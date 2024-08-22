// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFHIGHLIGHTBANNER_H
#define _SFHIGHLIGHTBANNER_H

@class SFPinnableBanner, SFThemeColorEffectView, UIView, SLAttributionView, SLHighlight;



@interface _SFHighlightBanner : SFPinnableBanner {
    SFThemeColorEffectView *_backdrop;
    UIView *_separator;
    SLAttributionView *_attributionView;
}


@property (copy, nonatomic) id *closeActionHandler; // ivar: _closeActionHandler
@property (readonly, nonatomic) SLHighlight *highlight; // ivar: _highlight


-(id)initWithHighlight:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_close;
-(void)themeDidChange;


@end


#endif