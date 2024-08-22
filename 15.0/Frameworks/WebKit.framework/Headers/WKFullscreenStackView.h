// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKFULLSCREENSTACKVIEW_H
#define WKFULLSCREENSTACKVIEW_H

@class UIStackView;



@interface WKFullscreenStackView : UIStackView {
    RetainPtr<AVBackgroundView> _backgroundView;
}




-(id)init;
-(void)addArrangedSubview:(id)arg0 applyingMaterialStyle:(NSInteger)arg1 tintEffectStyle:(NSInteger)arg2 ;
-(void)layoutSubviews;


@end


#endif