// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYFIRMWAREUPDATEPRESENCEPOLICY_H
#define HMDACCESSORYFIRMWAREUPDATEPRESENCEPOLICY_H

@protocol NSCopying;


#import "HMDAccessoryFirmwareUpdatePolicy.h"
#import "HMDHome.h"

@interface HMDAccessoryFirmwareUpdatePresencePolicy : HMDAccessoryFirmwareUpdatePolicy <NSCopying>



@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly, nonatomic) BOOL presenceNeeded; // ivar: _presenceNeeded


+(id)logCategory;
-(BOOL)evaluate;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessory:(id)arg0 presenceNeeded:(BOOL)arg1 workQueue:(id)arg2 ;
-(void)configure;
-(void)handlePresenceChange:(id)arg0 ;
-(void)registerForNotifications;


@end


#endif