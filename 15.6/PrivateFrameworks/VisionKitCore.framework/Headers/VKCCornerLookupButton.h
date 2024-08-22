// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKCCORNERLOOKUPBUTTON_H
#define VKCCORNERLOOKUPBUTTON_H

@class UIButton, NSString, MADVIVisualSearchResultItem, UITapGestureRecognizer;
@protocol UIPointerInteractionDelegate, UIGestureRecognizerDelegate, VKCCornerLookupButtonDelegate;


#import "VKCTappableView.h"
#import "VKCVisualSearchResultItem.h"

@interface VKCCornerLookupButton : VKCTappableView <UIPointerInteractionDelegate, UIGestureRecognizerDelegate>



@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (nonatomic) CGFloat buttonHeight; // ivar: _buttonHeight
@property (nonatomic) CGFloat buttonWidth; // ivar: _buttonWidth
@property (retain, nonatomic) NSString *currentRVItemID; // ivar: _currentRVItemID
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VKCCornerLookupButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didProcessResult; // ivar: _didProcessResult
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isShowingVisualResultsPane; // ivar: _isShowingVisualResultsPane
@property (nonatomic) BOOL observingInteractionDidFinish; // ivar: _observingInteractionDidFinish
@property (retain, nonatomic) VKCVisualSearchResultItem *resultItem; // ivar: _resultItem
@property (retain, nonatomic) MADVIVisualSearchResultItem *searchItem; // ivar: _searchItem
@property (nonatomic) BOOL shouldShowResultWhenVisible; // ivar: _shouldShowResultWhenVisible
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(CGFloat)contentSizeScaleFactor;
-(CGFloat)cornerButtonSize;
-(id)_backgroundColorBehindText;
-(id)_defaultSymbolName;
-(id)_queryString;
-(id)_symbolNameForItem;
-(id)imageForButton;
-(id)initWithFrame:(struct CGRect )arg0 resultItem:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)queryForProcessingResult;
-(void)_didDismissVisualResultsPane:(id)arg0 ;
-(void)_setupButton;
-(void)_setupGestures;
-(void)_updateImage;
-(void)dealloc;
-(void)didDismissVisualResultsPane;
-(void)didMoveToWindow;
-(void)didTap;
-(void)showLookupUIPaneForResultItem;
-(void)showVisualSearchResultView;
-(void)updateIndicatorDotForState;


@end


#endif