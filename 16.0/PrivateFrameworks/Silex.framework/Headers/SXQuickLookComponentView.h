// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXQUICKLOOKCOMPONENTVIEW_H
#define SXQUICKLOOKCOMPONENTVIEW_H

@class UILabel, NFStateMachineState, UIActivityIndicatorView, NFStateMachine, UITapGestureRecognizer;
@protocol SXQuickLookComponentFileProvider, SXQuickLookModule;


#import "SXComponentView.h"
#import "SXQuickLookViewController.h"

@interface SXQuickLookComponentView : SXComponentView

@property (retain, nonatomic) UILabel *errorLabel; // ivar: _errorLabel
@property (readonly, nonatomic) NFStateMachineState *errorState; // ivar: _errorState
@property (readonly, nonatomic) NSObject<SXQuickLookComponentFileProvider> *fileProvider; // ivar: _fileProvider
@property (readonly, nonatomic) NFStateMachineState *idleState; // ivar: _idleState
@property (readonly, nonatomic) UIActivityIndicatorView *loadingIndicator; // ivar: _loadingIndicator
@property (readonly, nonatomic) NFStateMachineState *loadingState; // ivar: _loadingState
@property (readonly, nonatomic) NFStateMachineState *presentingState; // ivar: _presentingState
@property (readonly, nonatomic) NSObject<SXQuickLookModule> *quickLookModule; // ivar: _quickLookModule
@property (retain, nonatomic) SXQuickLookViewController *quickLookViewController; // ivar: _quickLookViewController
@property (readonly, nonatomic) NFStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


-(id)createErrorState;
-(id)createIdleState;
-(id)createLoadingState;
-(id)createPresentingState;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 fileProvider:(id)arg4 quickLookModule:(id)arg5 ;
-(void)configure;
-(void)discardContents;
-(void)handleTap;
-(void)layout;
-(void)layoutErrorView;
-(void)layoutLoadingIndicator;
-(void)layoutWebView;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)renderContents;


@end


#endif