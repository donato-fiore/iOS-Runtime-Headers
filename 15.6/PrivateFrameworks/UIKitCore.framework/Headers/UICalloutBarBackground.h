// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICALLOUTBARBACKGROUND_H
#define UICALLOUTBARBACKGROUND_H



#import "UIView.h"
#import "UIVisualEffectView.h"
#import "UIImageView.h"

@interface UICalloutBarBackground : UIView {
    UIVisualEffectView *_blurView;
    UIImageView *_selectionTintView;
}


@property (nonatomic) CGRect highlightRect; // ivar: _highlightRect


-(id)init;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 forFrame:(struct CGRect )arg1 ;


@end


#endif