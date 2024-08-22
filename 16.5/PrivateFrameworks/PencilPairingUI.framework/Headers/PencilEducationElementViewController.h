// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PENCILEDUCATIONELEMENTVIEWCONTROLLER_H
#define PENCILEDUCATIONELEMENTVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, NSString, PKDrawingReplayController, NSDictionary, UIButton, UIStackView, PKTextInputInteraction, PKTextInputSettings, UILabel;
@protocol PKScribbleInteractionDelegate, UITextCursorAssertion, PencilEducationElementViewControllerDelegate;


#import "PencilEducationElementData.h"
#import "PencilEducationElementTextField.h"

@interface PencilEducationElementViewController : UIViewController <PKScribbleInteractionDelegate>



@property (readonly, nonatomic) BOOL animationInProgress;
@property (retain, nonatomic) NSMutableArray *animationQueue; // ivar: _animationQueue
@property (retain, nonatomic) NSObject<UITextCursorAssertion> *cursorAssertion; // ivar: _cursorAssertion
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PKDrawingReplayController *delayDrawingReplayController; // ivar: _delayDrawingReplayController
@property (weak, nonatomic) NSObject<PencilEducationElementViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didDisappear; // ivar: _didDisappear
@property (nonatomic) BOOL didRunInitialAppearActions; // ivar: _didRunInitialAppearActions
@property (retain, nonatomic) PKDrawingReplayController *drawingReplayController; // ivar: _drawingReplayController
@property (retain, nonatomic) PencilEducationElementData *elementData; // ivar: _elementData
@property (copy, nonatomic) id *endWritingCompletionBlock; // ivar: _endWritingCompletionBlock
@property (nonatomic) BOOL hasPencilInteraction; // ivar: _hasPencilInteraction
@property (readonly, nonatomic) BOOL hasRemainingAnimation;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger inProgressAnimationType; // ivar: _inProgressAnimationType
@property (nonatomic) BOOL isAnimating; // ivar: _isAnimating
@property (nonatomic) BOOL isRunningAnimationSequence; // ivar: _isRunningAnimationSequence
@property (nonatomic) BOOL isTextFieldRTL; // ivar: _isTextFieldRTL
@property (readonly, nonatomic) BOOL isUIRTL;
@property (retain, nonatomic) NSDictionary *localizationOffsetDictionary; // ivar: _localizationOffsetDictionary
@property (nonatomic) NSUInteger performAnimationAsyncIndex; // ivar: _performAnimationAsyncIndex
@property (retain, nonatomic) NSString *processedString; // ivar: _processedString
@property (weak, nonatomic) UIButton *replayButton; // ivar: _replayButton
@property (nonatomic) NSUInteger replayButtonHiddenIndex; // ivar: _replayButtonHiddenIndex
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;
@property (weak, nonatomic) PencilEducationElementTextField *textField; // ivar: _textField
@property (readonly, nonatomic) PKTextInputInteraction *textInputInteraction; // ivar: _textInputInteraction
@property (retain, nonatomic) PKTextInputSettings *textInputSettings; // ivar: _textInputSettings
@property (weak, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) NSInteger type;


+(id)keyPathsForValuesAffectingAnimationInProgress;
-(BOOL)_canShowWhileLocked;
-(BOOL)_pkScribbleInteractionShouldDisableInputAssistant:(id)arg0 ;
-(BOOL)_scribbleInteraction:(id)arg0 focusWillTransformElement:(id)arg1 ;
-(BOOL)hasCustomHeightRatioForAnimationType:(NSInteger)arg0 ;
-(BOOL)hasCustomWidthRatioForAnimationType:(NSInteger)arg0 ;
-(BOOL)isSecondaryAnimationForType:(NSInteger)arg0 ;
-(BOOL)isTextAddedForAnimationType:(NSInteger)arg0 ;
-(CGFloat)calculateFittingHeightByTemporarilyAdjustingFrameForWidth:(CGFloat)arg0 ;
-(CGFloat)customHeightRatioForAnimationType:(NSInteger)arg0 ;
-(CGFloat)customWidthRatioForAnimationType:(NSInteger)arg0 ;
-(CGFloat)nextAnimationDelayForAnimationType:(NSInteger)arg0 ;
-(CGFloat)scaleRatioForAnimationType:(NSInteger)arg0 ;
-(CGFloat)speedRatioForAnimationType:(NSInteger)arg0 ;
-(NSInteger)transformDimensionAnimationType:(NSInteger)arg0 ;
-(id)allowedCalloutActionsForType:(NSInteger)arg0 ;
-(id)defaultAllowedCalloutActions;
-(id)drawingForAnimationType:(NSInteger)arg0 ;
-(id)initWithElementData:(id)arg0 ;
-(id)localizationOffsetKeyForAnimationType:(NSInteger)arg0 ;
-(id)replacePlaceholdersInString:(id)arg0 ;
-(struct CGAffineTransform )applyLocalizationScaleOffsetsIfNecesssaryForDrawing:(id)arg0 animationType:(NSInteger)arg1 transform:(struct CGAffineTransform )arg2 ;
-(struct CGAffineTransform )transformDrawing:(id)arg0 toFitBounds:(struct CGRect )arg1 dimension:(NSInteger)arg2 offset:(struct CGPoint )arg3 animationType:(NSInteger)arg4 ;
-(struct CGAffineTransform )transformForAnimationType:(NSInteger)arg0 drawing:(id)arg1 bounds:(struct CGRect )arg2 ;
-(struct CGPoint )offsetForAnimationType:(NSInteger)arg0 ;
-(struct CGRect )textFieldBoundsForRange:(struct _NSRange )arg0 ;
-(struct PKPencilEducationOffset )localizationOffsetsForAnimationType:(NSInteger)arg0 ;
-(struct _NSRange )textRangeForAnimationType:(NSInteger)arg0 ;
-(void)_scribbleInteraction:(id)arg0 didFinishWritingInElement:(id)arg1 ;
-(void)_scribbleInteraction:(id)arg0 willBeginWritingInElement:(id)arg1 ;
-(void)beginAnimation;
-(void)beginAnimationIfNecessary;
-(void)cancelAnimation;
-(void)cancelPendingReplayHiddenCommands;
-(void)cancelScheduledAnimations;
-(void)handleEndAnimation;
-(void)reloadAnimationQueue;
-(void)reloadStrings;
-(void)replayButtonPressed:(id)arg0 ;
-(void)updateIsAnimatingUI;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif