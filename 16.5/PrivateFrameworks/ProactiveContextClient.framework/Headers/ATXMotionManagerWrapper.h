// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMOTIONMANAGERWRAPPER_H
#define ATXMOTIONMANAGERWRAPPER_H

@class CMMotionActivityManager, NSOperationQueue, NSMutableDictionary, CMMotionActivity, _PASLock;

#import <Foundation/Foundation.h>


@interface ATXMotionManagerWrapper : NSObject {
    CMMotionActivityManager *_motionActivityManager;
    NSOperationQueue *_motionActivityQueue;
    NSMutableDictionary *_delegatesMonitoringForMotionType;
    CMMotionActivity *_mostRecentActivity;
    _PASLock *_currentMotion;
}




+(BOOL)hasMotionActivity;
+(id)sharedInstance;
-(id)_fetchMotionActivities;
-(id)_motionActivityHandler:(SEL)arg0 ;
-(id)getCurrentActivity;
-(id)init;
-(void)startUpdatingMotionType:(NSInteger)arg0 forDelegate:(id)arg1 ;
-(void)stopUpdatingMotionType:(NSInteger)arg0 forDelegate:(id)arg1 ;
-(void)updateCurrentActivity:(id)arg0 ;


@end


#endif