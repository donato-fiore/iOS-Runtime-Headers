// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUIVISUALEFFECTVIEW_H
#define EKUIVISUALEFFECTVIEW_H

@class UIVisualEffectView;
@protocol EKUITintColorUpdateDelegate;


#import "TintColorUpdateView.h"

@interface EKUIVisualEffectView : UIVisualEffectView <EKUITintColorUpdateDelegate>

 {
    TintColorUpdateView *_updateView;
}


@property (weak, nonatomic) NSObject<EKUITintColorUpdateDelegate> *tintColorDelegate; // ivar: _tintColorDelegate


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)subTintColorUpdatedToColor:(id)arg0 ;
-(void)viewTintColorDidChangeForView:(id)arg0 toColor:(id)arg1 ;


@end


#endif