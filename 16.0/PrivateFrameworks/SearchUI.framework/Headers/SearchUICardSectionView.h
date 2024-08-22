// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUICARDSECTIONVIEW_H
#define SEARCHUICARDSECTIONVIEW_H

@class NUIContainerStackView, UIView, NSString, UIViewController, SFCardSection, UIMenu;
@protocol NUIContainerViewDelegate, SearchUIFeedbackDelegate;


#import "SearchUICardSectionRowModel.h"

@interface SearchUICardSectionView : NUIContainerStackView <NUIContainerViewDelegate>



@property (retain, nonatomic) UIView *chevronView; // ivar: _chevronView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) UIViewController *embeddedViewController; // ivar: _embeddedViewController
@property (weak, nonatomic) NSObject<SearchUIFeedbackDelegate> *feedbackDelegate; // ivar: _feedbackDelegate
@property (readonly) NSUInteger hash;
@property BOOL isCompactWidth; // ivar: _isCompactWidth
@property (readonly, nonatomic) UIView *leadingTextView; // ivar: _leadingTextView
@property (readonly, nonatomic) UIView *leadingView; // ivar: _leadingView
@property (retain, nonatomic) SearchUICardSectionRowModel *rowModel; // ivar: _rowModel
@property (readonly, nonatomic) SFCardSection *section;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIMenu *userReportMenu; // ivar: _userReportMenu
@property (readonly, nonatomic) UIView *viewForQuickLookZoomTransitionSource;


+(BOOL)fillsBackgroundWithContentForCardSection:(id)arg0 ;
+(BOOL)hasLeadingImageForCardSection:(id)arg0 ;
+(BOOL)prefersNoSeparatorAboveCardSection:(id)arg0 ;
+(BOOL)supportsCustomUserReportRequestAfforance;
+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
+(Class)layerClass;
+(id)dragSubtitleForCardSection:(id)arg0 ;
+(id)dragTitleForCardSection:(id)arg0 ;
+(int)defaultSeparatorStyleForCardSection:(id)arg0 ;
+(struct UIEdgeInsets )separatorInsetsForStyle:(int)arg0 cellView:(id)arg1 leadingView:(id)arg2 leadingTextView:(id)arg3 ;
-(BOOL)configureUserReportButton:(id)arg0 ;
-(CGFloat)trailingMarginForAccessory:(id)arg0 ;
-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(id)setupContentView;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)containerView:(id)arg0 willMeasureArrangedSubviewsFittingSize:(struct CGSize )arg1 forReason:(NSInteger)arg2 ;
-(void)didInvalidateSizeAnimate:(BOOL)arg0 ;
-(void)didMoveToWindow;
-(void)openPunchout:(id)arg0 triggerEvent:(NSUInteger)arg1 ;
-(void)requestRemovalFromEnclosingView;
-(void)tabKeyPressed;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateChevronVisible:(BOOL)arg0 leaveSpaceForChevron:(BOOL)arg1 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif