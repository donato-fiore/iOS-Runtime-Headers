// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKIDSDESTINATION_H
#define PKIDSDESTINATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKIDSDestination : NSObject

@property (readonly, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(id)destinationWithDeviceIdentifier:(id)arg0 name:(id)arg1 ;
-(id)description;
-(id)initWithDeviceIdentifier:(id)arg0 name:(id)arg1 ;


@end


#endif