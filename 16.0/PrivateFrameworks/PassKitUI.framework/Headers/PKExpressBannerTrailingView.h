// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKEXPRESSBANNERTRAILINGVIEW_H
#define PKEXPRESSBANNERTRAILINGVIEW_H

@class UIView, NSString;
@protocol PKExpressGlyphViewDelegate, SBUISystemApertureAccessoryView, PKExpressBannerTrailingViewDelegate;


#import "PKExpressGlyphView.h"

@interface PKExpressBannerTrailingView : UIView <PKExpressGlyphViewDelegate, SBUISystemApertureAccessoryView>

 {
    int _state;
    PKExpressGlyphView *_glyphView;
    id<PKExpressBannerTrailingViewDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)expressGlyphView:(id)arg0 revealingCheckmarkAnimated:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif