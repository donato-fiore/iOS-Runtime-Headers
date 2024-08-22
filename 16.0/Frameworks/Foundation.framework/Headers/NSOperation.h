// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSOPERATION_H
#define NSOPERATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSOperation : NSObject {
    ? _iop;
}


@property (readonly, getter=isAsynchronous) BOOL asynchronous;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (copy) id *completionBlock;
@property (readonly, getter=isConcurrent) BOOL concurrent;
@property (readonly, copy) NSArray *dependencies;
@property (readonly, getter=isExecuting) BOOL executing;
@property (readonly, getter=isFinished) BOOL finished;
@property (copy) NSString *name;
@property NSInteger qualityOfService;
@property NSInteger queuePriority;
@property (readonly, getter=isReady) BOOL ready;
@property CGFloat threadPriority;


+(BOOL)_removesDependenciesAfterFinish;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)currentOperation;
+(id)keyPathsForValuesAffectingCancelled;
+(id)keyPathsForValuesAffectingExecuting;
+(id)keyPathsForValuesAffectingFinished;
+(id)keyPathsForValuesAffectingIsCancelled;
+(id)keyPathsForValuesAffectingIsExecuting;
+(id)keyPathsForValuesAffectingIsFinished;
+(id)keyPathsForValuesAffectingIsReady;
+(id)keyPathsForValuesAffectingReady;
-(*void)observationInfo;
-(id)__graphDescription:(NSUInteger)arg0 ;
-(id)_copyCompletionBlock:(SEL)arg0 ;
-(id)_implicitObservationInfo;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)addDependency:(id)arg0 ;
-(void)addObserver:(id)arg0 forKeyPath:(id)arg1 options:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)cancel;
-(void)dealloc;
-(void)main;
-(void)removeAllDependencies;
-(void)removeDependency:(id)arg0 ;
-(void)removeObserver:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setObservationInfo:(*void)arg0 ;
-(void)start;
-(void)waitUntilFinished;
-(void)waitUntilFinishedOrTimeout:(CGFloat)arg0 ;


@end


#endif