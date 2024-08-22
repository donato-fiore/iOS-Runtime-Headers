// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETMONITOR_H
#define MAAUTOASSETMONITOR_H

@class NSString;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MAAutoAssetSelector.h"

@interface MAAutoAssetMonitor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) MAAutoAssetSelector *assetSelector; // ivar: _assetSelector
@property (readonly, nonatomic) NSString *autoAssetClientName; // ivar: _autoAssetClientName
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationDispatchQueue; // ivar: _notificationDispatchQueue
@property (copy, nonatomic) id *statusChangeNotificationBlock; // ivar: _statusChangeNotificationBlock


+(BOOL)supportsSecureCoding;
+(id)defaultDispatchQueue;
-(id)cancelRegistrationSync;
-(id)description;
-(id)initForClientName:(id)arg0 forAssetSelector:(id)arg1 error:(*id)arg2 notifyingStatusChanges:(id)arg3 ;
-(id)initForClientName:(id)arg0 forAssetSelector:(id)arg1 notifyingFromQueue:(id)arg2 error:(*id)arg3 notifyingStatusChanges:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)registerForNotificationsSync;
-(id)registerForNotificationsSync:(id)arg0 ;
-(id)summary;
-(void)cancelRegistration:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)registerForNotifications:(id)arg0 ;
-(void)registerForNotifications:(id)arg0 completion:(id)arg1 ;


@end


#endif