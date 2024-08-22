// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKODIASSESSMENT_H
#define PKODIASSESSMENT_H

@class NSString, NSMutableOrderedSet, ODISession;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKODIAssessment : NSObject {
    NSString *_assessment;
    BOOL _currentAssessmentDidTimeout;
    os_unfair_lock_s _lock;
    NSMutableOrderedSet *_assessmentComputedBlocks;
    BOOL _computingAssessment;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    BOOL _isAssessing;
}


@property (retain, nonatomic) ODISession *odiSession; // ivar: _odiSession
@property (nonatomic) NSUInteger outcomeType; // ivar: _outcomeType


-(BOOL)currentAssessmentDidTimeout;
-(BOOL)isAssessing;
-(id)currentAssessment;
-(id)init;
-(void)_callAssessmentComputedBlocksAndDidTimeout:(BOOL)arg0 ;
-(void)computeAssessment;
-(void)createODISession;
-(void)dealloc;
-(void)getAssessmentWithCompletion:(id)arg0 ;
-(void)provideSessionFeedback:(NSUInteger)arg0 ;
-(void)startAssessment;
-(void)startAssessmentWithHostBundleIdentifier:(id)arg0 ;
-(void)updateAssessment:(id)arg0 ;
-(void)updateAssessmentWithHostBundleIdentifier:(id)arg0 ;
-(void)updateAssessmentWithModel:(id)arg0 ;
-(void)waitForAssessmentWithContinueBlock:(id)arg0 ;


@end


#endif