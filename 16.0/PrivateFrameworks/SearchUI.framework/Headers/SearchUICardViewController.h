// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUICARDVIEWCONTROLLER_H
#define SEARCHUICARDVIEWCONTROLLER_H

@class UIViewController, SFCard, NSString, TLKLabel, NSTimer, UIActivityIndicatorView, NUIContainerBoxView, UIViewController<SearchUICardTableBridgingProtocol>, UITextField;
@protocol SearchUISizingDelegate, SearchUICommandDelegate, SearchUICardViewDelegate, SFFeedbackListener;


#import "SearchUIBackgroundView.h"

@interface SearchUICardViewController : UIViewController <SearchUISizingDelegate>



@property (retain, nonatomic) SFCard *card;
@property (weak, nonatomic) NSObject<SearchUICommandDelegate> *commandDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SearchUICardViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dragInteractionEnabled;
@property (weak, nonatomic) NSObject<SFFeedbackListener> *feedbackListener;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInPreviewPlatter) BOOL inPreviewPlatter;
@property (nonatomic) CGFloat initialPreviewPlatterHeight; // ivar: _initialPreviewPlatterHeight
@property (nonatomic) NSUInteger level; // ivar: _level
@property (retain, nonatomic) TLKLabel *loadingLabel; // ivar: _loadingLabel
@property (retain, nonatomic) NSTimer *loadingScreenTimer; // ivar: _loadingScreenTimer
@property (retain, nonatomic) UIActivityIndicatorView *loadingSpinner; // ivar: _loadingSpinner
@property (retain, nonatomic) NUIContainerBoxView *loadingView; // ivar: _loadingView
@property (nonatomic) BOOL rowSelectionAppearanceEnabled;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController<SearchUICardTableBridgingProtocol> *tableViewController; // ivar: _tableViewController
@property (weak, nonatomic) UITextField *textField;
@property (nonatomic) BOOL threeDTouchEnabled;
@property (readonly, nonatomic) BOOL topRowWillFillBackgroundWithContent;
@property (retain, nonatomic) SearchUIBackgroundView *view;


-(BOOL)_canShowWhileLocked;
-(BOOL)hasCustomViewControllersForCardSections;
-(CGFloat)contentHeightForWidth:(CGFloat)arg0 ;
-(id)init;
-(id)initWithCard:(id)arg0 feedbackListener:(id)arg1 ;
-(id)initWithCard:(id)arg0 style:(NSUInteger)arg1 feedbackListener:(id)arg2 ;
-(id)testingTableViewController;
-(struct CGSize )preferredContentSize;
-(void)contentSizeDidChange:(struct CGSize )arg0 animated:(BOOL)arg1 ;
-(void)displayLoadingViewAfterDelay:(CGFloat)arg0 withSpinner:(BOOL)arg1 ;
-(void)prepareLoadingView;
-(void)updateTimerAndCardSections:(id)arg0 ;
-(void)updateWithCardSections:(id)arg0 ;


@end


#endif