// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DKDIAGNOSTICVIEWCONTROLLER_H
#define DKDIAGNOSTICVIEWCONTROLLER_H

@class UIViewController, CXCallObserver, NSString, NSLock, CAGradientLayer, _UILegibilityLabel;
@protocol CXCallObserverDelegate, DKDiagnostic_Internal, CAAnimationDelegate, NSExtensionRequestHandling, DKDiagnostic;


#import "DKDiagnosticContext.h"
#import "DKMutableDiagnosticResult.h"

@interface DKDiagnosticViewController : UIViewController <CXCallObserverDelegate, DKDiagnostic_Internal, CAAnimationDelegate, NSExtensionRequestHandling, DKDiagnostic>



@property (retain, nonatomic) CXCallObserver *callObserver; // ivar: _callObserver
@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) DKDiagnosticContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (retain, nonatomic) NSLock *finishedLock; // ivar: _finishedLock
@property (retain, nonatomic) CAGradientLayer *gradientLayer; // ivar: _gradientLayer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilityLabel *pressHomeLabel; // ivar: _pressHomeLabel
@property (retain, nonatomic) DKMutableDiagnosticResult *result; // ivar: _result
@property (nonatomic, getter=isSetup) BOOL setup; // ivar: _setup
@property (nonatomic) BOOL shouldShowPressHomeLabel; // ivar: _shouldShowPressHomeLabel
@property (readonly) Class superclass;


-(id)init;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;
-(void)cancel;
-(void)createGradientLayer;
-(void)displayPressHomeLabel;
-(void)monitorIncomingCall;
-(void)resetGradientAndLabelBefore:(BOOL)arg0 ;
-(void)start;
-(void)viewDidLoad;


@end


#endif