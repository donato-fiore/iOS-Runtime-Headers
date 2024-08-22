// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC17CORESUGGESTIONSUI26SGBANNERCONTENTHOSTINGVIEW_H
#define _TTC17CORESUGGESTIONSUI26SGBANNERCONTENTHOSTINGVIEW_H

@class UIView;



@interface _TtC17CoreSuggestionsUI26SGBannerContentHostingView : UIView {
    ? hostingController;
    ? banner;
    ? suggestionStore;
    ? invalidateBannerConstraints;
}




-(CGFloat)actionButtonLeadingEdgeOffset;
-(id)initWithBanner:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)invalidateBannerView;
-(void)reload;
-(void)setSuggestionWithStore:(id)arg0 ;
-(void)updateWithBanner:(id)arg0 ;


@end


#endif