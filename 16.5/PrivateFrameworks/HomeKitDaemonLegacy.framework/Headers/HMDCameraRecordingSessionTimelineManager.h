// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERARECORDINGSESSIONTIMELINEMANAGER_H
#define HMDCAMERARECORDINGSESSIONTIMELINEMANAGER_H

@class HMFObject, NSString, NSMutableArray, NSDate;
@protocol HMFLogging, OS_dispatch_queue;



@interface HMDCameraRecordingSessionTimelineManager : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSMutableArray *doorbellActiveDateIntervals; // ivar: _doorbellActiveDateIntervals
@property (readonly, copy) NSDate *fragmentCreationReferenceDate; // ivar: _fragmentCreationReferenceDate
@property (readonly) CGFloat fragmentDuration; // ivar: _fragmentDuration
@property (readonly) NSUInteger hash;
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) NSMutableArray *motionActiveDateIntervals; // ivar: _motionActiveDateIntervals
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)isDoorbellTriggerActiveAtAnyTimeAfterOffset:(CGFloat)arg0 ;
-(BOOL)isDoorbellTriggerActiveAtAnyTimeAfterOffset:(CGFloat)arg0 forDuration:(CGFloat)arg1 ;
-(BOOL)isMotionTriggerActiveAtAnyTimeAfterOffset:(CGFloat)arg0 ;
-(BOOL)isMotionTriggerActiveAtAnyTimeAfterOffset:(CGFloat)arg0 forDuration:(CGFloat)arg1 ;
-(id)attributeDescriptions;
-(id)creationDateForFragmentAtTimeOffset:(CGFloat)arg0 ;
-(id)initWithWorkQueue:(id)arg0 fragmentDuration:(CGFloat)arg1 fragmentCreationReferenceDate:(id)arg2 logIdentifier:(id)arg3 ;
-(void)handleDoorbellDidActivateAtDate:(id)arg0 ;
-(void)handleMotionActive:(BOOL)arg0 didChangeAtDate:(id)arg1 ;


@end


#endif