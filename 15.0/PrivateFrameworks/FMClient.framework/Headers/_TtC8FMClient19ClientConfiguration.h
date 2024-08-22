// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8FMCLIENT19CLIENTCONFIGURATION_H
#define _TTC8FMCLIENT19CLIENTCONFIGURATION_H

@class NSString, NSDateComponents;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC8FMClient19ClientConfiguration : NSObject <NSSecureCoding>

 {
    ? deviceNameSyncInterval;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL deviceNameSyncEnabled; // ivar: deviceNameSyncEnabled
@property (nonatomic, readonly) NSDateComponents *deviceNameSyncInterval;
@property (nonatomic, readonly) CGFloat nearbyScanDuration; // ivar: nearbyScanDuration
@property (nonatomic, readonly) BOOL nearbyScanEnabled; // ivar: nearbyScanEnabled
@property (nonatomic, readonly) BOOL nearbyScanWhileAuthenticated; // ivar: nearbyScanWhileAuthenticated


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNearbyScanDuration:(CGFloat)arg0 nearbyScanEnabled:(BOOL)arg1 nearbyScanWhileAuthenticated:(BOOL)arg2 deviceNameSyncInterval:(id)arg3 deviceNameSyncEnabled:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif