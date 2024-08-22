// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAENOTIFICATIONCENTER_H
#define HAENOTIFICATIONCENTER_H

@class NSString;
@protocol HAENotificationCenterDelegate, HAENotificationCenterUserDelegate;

#import <Foundation/Foundation.h>


@interface HAENotificationCenter : NSObject {
    id<HAENotificationCenterDelegate> *centerDelegate;
}


@property (readonly, nonatomic) NSString *bundleID; // ivar: bundleID
@property (readonly, weak, nonatomic) NSObject<HAENotificationCenterUserDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat liveMonitorWindowInSec; // ivar: liveMonitorWindowInSec
@property (readonly, nonatomic) CGFloat liveThresholdInDBA; // ivar: liveThresholdInDBA


+(BOOL)connectedWiredDeviceIsHeadphone;
+(BOOL)connectedWiredDeviceIsHeadphoneWithUUID:(id)arg0 ;
+(void)startNotificationCenterServer;
-(id)addHAENotificationEvent:(id)arg0 error:(*id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(void)addHAENotificationEvent:(id)arg0 completion:(id)arg1 ;


@end


#endif