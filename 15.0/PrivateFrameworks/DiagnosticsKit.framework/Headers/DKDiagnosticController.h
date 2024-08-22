// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKDIAGNOSTICCONTROLLER_H
#define DKDIAGNOSTICCONTROLLER_H

@class NSString, NSLock;
@protocol DKDiagnostic_Internal, NSExtensionRequestHandling, DKDiagnostic;

#import <Foundation/Foundation.h>

#import "DKDiagnosticContext.h"
#import "DKMutableDiagnosticResult.h"

@interface DKDiagnosticController : NSObject <DKDiagnostic_Internal, NSExtensionRequestHandling, DKDiagnostic>



@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) DKDiagnosticContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (retain, nonatomic) NSLock *finishedLock; // ivar: _finishedLock
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isXPC; // ivar: _isXPC
@property (retain, nonatomic) DKMutableDiagnosticResult *result; // ivar: _result
@property (nonatomic, getter=isSetup) BOOL setup; // ivar: _setup
@property (readonly) Class superclass;


-(id)init;
-(void)beginRequestWithDiagnosticContext:(id)arg0 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)cancel;
-(void)start;


@end


#endif