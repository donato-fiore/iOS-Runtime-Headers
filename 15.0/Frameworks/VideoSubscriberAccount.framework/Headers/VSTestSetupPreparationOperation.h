// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSTESTSETUPPREPARATIONOPERATION_H
#define VSTESTSETUPPREPARATIONOPERATION_H

@class NSArray, NSOperationQueue;


#import "VSAsyncOperation.h"

@interface VSTestSetupPreparationOperation : VSAsyncOperation

@property (retain, nonatomic) NSArray *errors; // ivar: _errors
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue


-(id)init;
-(void)addError:(id)arg0 ;
-(void)executionDidBegin;


@end


#endif