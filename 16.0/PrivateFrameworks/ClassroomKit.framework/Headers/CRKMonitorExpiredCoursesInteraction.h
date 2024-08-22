// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKMONITOREXPIREDCOURSESINTERACTION_H
#define CRKMONITOREXPIREDCOURSESINTERACTION_H

@class CATOperation, NSMutableSet, CATSerialOperationQueue;
@protocol CRKExpiredCoursesInteractionDelegate, CRKRequestPerformingProtocol;


#import "CRKCourseEnrollmentController.h"

@interface CRKMonitorExpiredCoursesInteraction : CATOperation {
    BOOL mIsObservingEnrollmentController;
}


@property (readonly, nonatomic) CRKCourseEnrollmentController *enrollmentController; // ivar: _enrollmentController
@property (readonly, nonatomic) NSObject<CRKExpiredCoursesInteractionDelegate> *expiredCoursesInteractionDelegate; // ivar: _expiredCoursesInteractionDelegate
@property (readonly, nonatomic) NSMutableSet *expiredCoursesToPresent; // ivar: _expiredCoursesToPresent
@property (readonly, nonatomic) CATSerialOperationQueue *serialOperationQueue; // ivar: _serialOperationQueue
@property (readonly, nonatomic) NSObject<CRKRequestPerformingProtocol> *studentDaemonProxy; // ivar: _studentDaemonProxy


-(BOOL)isAsynchronous;
-(id)initWithStudentDaemonProxy:(id)arg0 enrollmentController:(id)arg1 expiredCoursesInteractionDelegate:(id)arg2 ;
-(void)beginInteractionWithExpiredCourses:(id)arg0 ;
-(void)cancel;
-(void)expiredCoursesInteractionDidFinish:(id)arg0 ;
-(void)main;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateWithCourses:(id)arg0 ;


@end


#endif