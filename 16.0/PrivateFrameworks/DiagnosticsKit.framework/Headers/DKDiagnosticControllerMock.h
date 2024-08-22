// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DKDIAGNOSTICCONTROLLERMOCK_H
#define DKDIAGNOSTICCONTROLLERMOCK_H

@class NSString, NSLock;
@protocol DKDiagnostic_Internal, DKDiagnosticMock;

#import <Foundation/Foundation.h>

#import "DKDiagnosticContextMock.h"
#import "DKMutableDiagnosticResult.h"

@interface DKDiagnosticControllerMock : NSObject <DKDiagnostic_Internal, DKDiagnosticMock>



@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) DKDiagnosticContextMock *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (retain, nonatomic) NSLock *finishedLock; // ivar: _finishedLock
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) Class inputsClass; // ivar: _inputsClass
@property (retain, nonatomic) DKMutableDiagnosticResult *result; // ivar: _result
@property (nonatomic, getter=isSetup) BOOL setup; // ivar: _setup
@property (readonly) Class superclass;


-(id)init;
-(void)beginRequestWithInputsClass:(Class)arg0 predicates:(id)arg1 specifications:(id)arg2 parameters:(id)arg3 completion:(id)arg4 ;
-(void)cancel;
-(void)start;


@end


#endif