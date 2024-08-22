// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PROXYCONFIGURATION_H
#define PROXYCONFIGURATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ProxyConfiguration : NSObject

@property (readonly, nonatomic) NSDictionary *deviceIdentificationToken; // ivar: _deviceIdentificationToken
@property (readonly, nonatomic) NSDictionary *proxy; // ivar: _proxy


+(BOOL)shouldRetryForError:(id)arg0 ;
+(id)currentVersion;
-(id)initWithDeviceIdentificationToken:(id)arg0 ;
-(void)applyToRequest:(id)arg0 ;


@end


#endif