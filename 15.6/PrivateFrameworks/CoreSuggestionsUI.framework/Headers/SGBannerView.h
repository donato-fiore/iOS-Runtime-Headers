// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGBANNERVIEW_H
#define SGBANNERVIEW_H

@class UIView, NSString, NSAttributedString, NSLayoutXAxisAnchor, NSArray;
@protocol SGBannerProtocol, SGSuggestionDelegate, SGSuggestion;


#import "_TtC17CoreSuggestionsUI15SGBannerContent.h"
#import "_TtC17CoreSuggestionsUI26SGBannerContentHostingView.h"
#import "SGSuggestionStore.h"

@interface SGBannerView : UIView <SGBannerProtocol>



@property (nonatomic) NSInteger accessoryType;
@property (nonatomic) NSInteger actionButtonType;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle;
@property (retain, nonatomic) _TtC17CoreSuggestionsUI15SGBannerContent *banner; // ivar: _banner
@property (readonly, nonatomic) _TtC17CoreSuggestionsUI26SGBannerContentHostingView *bannerHostingView; // ivar: _bannerHostingView
@property (retain, nonatomic) NSLayoutXAxisAnchor *closeButtonCenterXAnchor;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SGSuggestionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSObject<SGSuggestion> *suggestion;
@property (copy, nonatomic) SGSuggestionStore *suggestionStore;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


-(CGFloat)actionButtonLeadingEdgeOffset;
-(id)init;
-(struct CGRect )popoverSourceRect;
-(void)invalidateBannerView;
-(void)invalidateReloadBannerView:(id)arg0 ;
-(void)reload;


@end


#endif