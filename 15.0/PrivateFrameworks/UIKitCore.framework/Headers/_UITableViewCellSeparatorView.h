// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITABLEVIEWCELLSEPARATORVIEW_H
#define _UITABLEVIEWCELLSEPARATORVIEW_H



#import "UIView.h"
#import "UIVisualEffectView.h"
#import "UIVisualEffect.h"

@interface _UITableViewCellSeparatorView : UIView {
    UIView *_backgroundView;
    UIView *_overlayView;
    UIVisualEffectView *_effectView;
}


@property (nonatomic) BOOL drawsWithVibrantLightMode; // ivar: _drawsWithVibrantLightMode
@property (retain, nonatomic) UIVisualEffect *separatorEffect; // ivar: _separatorEffect


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif