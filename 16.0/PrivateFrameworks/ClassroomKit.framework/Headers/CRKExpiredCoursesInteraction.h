// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKEXPIREDCOURSESINTERACTION_H
#define CRKEXPIREDCOURSESINTERACTION_H

@class CATOperation, CATRemoteTaskOperation, NSSet;
@protocol CRKExpiredCoursesInteractionDelegate, CRKRequestPerformingProtocol;



@interface CRKExpiredCoursesInteraction : CATOperation {
    CATRemoteTaskOperation *mLeaveControlGroupsOperation;
    BOOL mIsPrompting;
}


@property (readonly, nonatomic) NSSet *courses; // ivar: _courses
@property (readonly, nonatomic) NSObject<CRKExpiredCoursesInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<CRKRequestPerformingProtocol> *studentDaemonProxy; // ivar: _studentDaemonProxy


+(id)new;
-(BOOL)isAsynchronous;
-(id)init;
-(id)initWithStudentDaemonProxy:(id)arg0 delegate:(id)arg1 courses:(id)arg2 ;
-(void)cancel;
-(void)leaveControlGroupsOperationDidFinish:(id)arg0 ;
-(void)main;
-(void)removeCourses:(id)arg0 ;


@end


#endif