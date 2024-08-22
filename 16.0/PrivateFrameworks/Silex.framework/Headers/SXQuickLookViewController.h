// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXQUICKLOOKVIEWCONTROLLER_H
#define SXQUICKLOOKVIEWCONTROLLER_H

@class UIViewController, NSString, UILabel, NFStateMachineState, NFStateMachine, UIButton, UIImageView;
@protocol SXQuickLookEventHandlerDelegate, SXQuickLookEventHandler, SXQuickLookRenderer;



@interface SXQuickLookViewController : UIViewController <SXQuickLookEventHandlerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UILabel *errorLabel; // ivar: _errorLabel
@property (readonly, nonatomic) NFStateMachineState *errorState; // ivar: _errorState
@property (readonly, nonatomic) NSObject<SXQuickLookEventHandler> *eventHandler; // ivar: _eventHandler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NFStateMachineState *loadingState; // ivar: _loadingState
@property (readonly, nonatomic) NFStateMachineState *presentingState; // ivar: _presentingState
@property (readonly, nonatomic) NSObject<SXQuickLookRenderer> *renderer; // ivar: _renderer
@property (readonly, nonatomic) NFStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIButton *thumbnailControl; // ivar: _thumbnailControl
@property (readonly, nonatomic) UIImageView *thumbnailImageView; // ivar: _thumbnailImageView


-(id)createErrorState;
-(id)createLoadingState;
-(id)createPresentingState;
-(id)initWithEventHandler:(id)arg0 renderer:(id)arg1 ;
-(void)configureStateMachine;
-(void)handleTap;
-(void)showThumbnailErrorWithMessage:(id)arg0 ;
-(void)showThumbnailImage:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif