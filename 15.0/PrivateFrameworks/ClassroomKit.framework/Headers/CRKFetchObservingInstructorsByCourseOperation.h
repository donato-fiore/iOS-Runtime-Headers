// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKFETCHOBSERVINGINSTRUCTORSBYCOURSEOPERATION_H
#define CRKFETCHOBSERVINGINSTRUCTORSBYCOURSEOPERATION_H

@class CATOperation, CATRemoteTaskOperation;
@protocol CRKRequestPerformingProtocol;



@interface CRKFetchObservingInstructorsByCourseOperation : CATOperation

@property (retain, nonatomic) CATRemoteTaskOperation *fetchCoursesOperation; // ivar: _fetchCoursesOperation
@property (retain, nonatomic) CATRemoteTaskOperation *fetchInstructorsOperation; // ivar: _fetchInstructorsOperation
@property (readonly, nonatomic) NSObject<CRKRequestPerformingProtocol> *requestPerformer; // ivar: _requestPerformer


-(BOOL)isAsynchronous;
-(id)initWithRequestPerformer:(id)arg0 ;
-(void)cancel;
-(void)compileResultsWithFetchCoursesResult:(id)arg0 fetchScreenObserversResult:(id)arg1 ;
-(void)main;
-(void)operationsDidComplete:(id)arg0 ;


@end


#endif