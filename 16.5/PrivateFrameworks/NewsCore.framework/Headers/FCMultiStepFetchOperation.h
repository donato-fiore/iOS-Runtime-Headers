// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCMULTISTEPFETCHOPERATION_H
#define FCMULTISTEPFETCHOPERATION_H

@class NFMutexLock, NSMutableArray;


#import "FCFetchOperation.h"

@interface FCMultiStepFetchOperation : FCFetchOperation

@property (retain, nonatomic) NFMutexLock *accessLock; // ivar: _accessLock
@property (retain, nonatomic) NSMutableArray *stepResults; // ivar: _stepResults
@property (retain, nonatomic) NSMutableArray *steps; // ivar: _steps


-(id)completeFetchOperation;
-(id)init;
-(void)_performNextStep;
-(void)addFetchStep:(SEL)arg0 ;
-(void)addNonCriticalFetchStep:(SEL)arg0 ;
-(void)customizeChildOperation:(id)arg0 forFetchStep:(SEL)arg1 ;
-(void)performOperation;


@end


#endif