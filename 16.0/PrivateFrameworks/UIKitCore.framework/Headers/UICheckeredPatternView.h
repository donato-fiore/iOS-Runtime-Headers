// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICHECKEREDPATTERNVIEW_H
#define UICHECKEREDPATTERNVIEW_H



#import "UIView.h"
#import "UIColor.h"

@interface UICheckeredPatternView : UIView {
    UIColor *_patternColor;
    CGFloat _scale;
}


@property (retain, nonatomic) UIColor *checkerColor; // ivar: _checkerColor


-(BOOL)_canDrawContent;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didMoveToWindow;
-(void)updatePatternColor;


@end


#endif