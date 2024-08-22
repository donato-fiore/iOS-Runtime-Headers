// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EAWIFIUNCONFIGUREDACCESSORY_H
#define EAWIFIUNCONFIGUREDACCESSORY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EAWiFiUnconfiguredAccessory : NSObject

@property (readonly, copy, nonatomic) NSString *macAddress; // ivar: _macAddress
@property (readonly, copy, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (readonly, copy, nonatomic) NSString *model; // ivar: _model
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger properties; // ivar: _properties
@property (readonly, copy, nonatomic) NSString *ssid; // ivar: _ssid


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithAirPortAssistantWACDevice:(id)arg0 ;


@end


#endif