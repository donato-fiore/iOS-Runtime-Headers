// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGBANNERVIEW_H
#define SGBANNERVIEW_H

@class UIView, NSString, NSAttributedString, UIColor, UIVisualEffectView, NSLayoutXAxisAnchor, NSArray;
@protocol SGBannerProtocol, SGSuggestionDelegate, SGSuggestion;


#import "_TtC17CoreSuggestionsUI15SGBannerContent.h"
#import "SGBannerDividerParameter.h"
#import "_TtC17CoreSuggestionsUI26SGBannerContentHostingView.h"
#import "SGSuggestionAction.h"
#import "SGSuggestionStore.h"

@interface SGBannerView : UIView <SGBannerProtocol>



@property (nonatomic) NSInteger accessoryType;
@property (nonatomic) NSInteger actionButtonType;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIVisualEffectView *backgroundVisualEffectView;
@property (retain, nonatomic) _TtC17CoreSuggestionsUI15SGBannerContent *banner; // ivar: _banner
@property (copy, nonatomic) SGBannerDividerParameter *bannerDivider;
@property (readonly, nonatomic) _TtC17CoreSuggestionsUI26SGBannerContentHostingView *bannerHostingView; // ivar: _bannerHostingView
@property (retain, nonatomic) NSLayoutXAxisAnchor *closeButtonCenterXAnchor;
@property (nonatomic) CGFloat closeButtonXAnchorOffset;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SGSuggestionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) SGSuggestionAction *dismissAction;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *imageSGViews;
@property (copy, nonatomic) NSArray *images;
@property (nonatomic) BOOL orientationChanged; // ivar: _orientationChanged
@property (copy, nonatomic) SGSuggestionAction *primaryAction;
@property (nonatomic) BOOL prominentActionButton;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSObject<SGSuggestion> *suggestion;
@property (nonatomic) BOOL suggestionCategorySupportsBatchDismissal;
@property (copy, nonatomic) SGSuggestionStore *suggestionStore;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


-(CGFloat)actionButtonLeadingEdgeOffset;
-(id)init;
-(struct CGRect )popoverSourceRect;
-(struct CGSize )intrinsicContentSize;
-(void)forceReloadBannerView:(id)arg0 ;
-(void)invalidateBannerView;
-(void)invalidateReloadBannerView:(id)arg0 ;
-(void)reload;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif