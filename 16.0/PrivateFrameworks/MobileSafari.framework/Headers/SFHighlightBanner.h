// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFHIGHLIGHTBANNER_H
#define SFHIGHLIGHTBANNER_H

@class SLAttributionView, SLHighlight;


#import "SFPinnableBanner.h"
#import "SFThemeColorEffectView.h"

@interface SFHighlightBanner : SFPinnableBanner {
    SFThemeColorEffectView *_backdrop;
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