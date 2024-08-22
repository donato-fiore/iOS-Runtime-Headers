// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPSUBTITLEBUTTONVIEW_H
#define LPSUBTITLEBUTTONVIEW_H

@class UIButton;


#import "LPComponentView.h"
#import "LPCaptionButtonPresentationProperties.h"
#import "LPTextViewStyle.h"

@interface LPSubtitleButtonView : LPComponentView {
    LPCaptionButtonPresentationProperties *_buttonProperties;
    LPTextViewStyle *_style;
    UIButton *_button;
}




-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 buttonProperties:(id)arg1 style:(id)arg2 ;
-(id)viewForLastBaselineLayout;
-(struct CGSize )_layoutButtonForSize:(struct CGSize )arg0 applyingLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buildSubviewsIfNeeded;
-(void)buttonPressed:(id)arg0 ;
-(void)layoutComponentView;
-(void)sizeToFit;


@end


#endif