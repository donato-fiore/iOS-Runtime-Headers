// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXRUNNODE_H
#define PXRUNNODE_H

@class NSSet, NSLock, NSString, NSArray;
@protocol PXRunNode, PXRunNodeDelegate;

#import <Foundation/Foundation.h>

#import "PXRunNodeOperation.h"

@interface PXRunNode : NSObject <PXRunNode>

 {
    PXRunNodeOperation *_operation;
}


@property (readonly, nonatomic) NSSet *_dependencySet; // ivar: __dependencySet
@property (readonly, nonatomic) NSLock *_operationLock; // ivar: __operationLock
@property (readonly, getter=isCanceled) BOOL canceled;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXRunNodeDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSArray *dependencies; // ivar: _dependencies
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly) NSUInteger state;
@property (readonly) Class superclass;
@property (readonly, getter=isWaiting) BOOL waiting;


+(id)_defaultNodeRunnerWithQualityOfService:(NSInteger)arg0 ;
+(void)processGraphForRunNode:(id)arg0 ;
+(void)processGraphForRunNode:(id)arg0 withQualityOfService:(NSInteger)arg1 ;
-(id)init;
-(id)initWithDependencies:(id)arg0 ;
-(id)newOperation;
-(void)_performChangesToOperation:(id)arg0 ;
-(void)cancel;
-(void)cancelWithError:(id)arg0 ;
-(void)complete;
-(void)completeWithError:(id)arg0 ;
-(void)didCancel;
-(void)run;


@end


#endif