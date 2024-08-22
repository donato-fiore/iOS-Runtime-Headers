// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDREMOTEFEATUREAVAILABILITYASSETMANAGER_H
#define HDREMOTEFEATUREAVAILABILITYASSETMANAGER_H

@class NSURL, NSString, _HKMobileAssetDownloadManager, NSUserDefaults;
@protocol HDPeriodicActivityDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDPeriodicActivity.h"

@interface HDRemoteFeatureAvailabilityAssetManager : NSObject <HDPeriodicActivityDelegate>

 {
    NSURL *_assetDirectoryOverride;
    CGFloat _retryInterval;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _HKMobileAssetDownloadManager *downloadManager; // ivar: _downloadManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDPeriodicActivity *periodicActivity; // ivar: _periodicActivity
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUserDefaults *unitTest_defaults; // ivar: _unitTest_defaults
@property (copy, nonatomic) id *unitTest_errorObserver; // ivar: _unitTest_errorObserver


-(id)initWithProfile:(id)arg0 ;
-(void)performPeriodicActivity:(id)arg0 completion:(id)arg1 ;
-(void)periodicActivity:(id)arg0 configureXPCActivityCriteria:(id)arg1 ;


@end


#endif