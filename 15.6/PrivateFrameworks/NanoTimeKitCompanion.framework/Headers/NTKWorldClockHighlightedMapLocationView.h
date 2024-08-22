// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKWORLDCLOCKHIGHLIGHTEDMAPLOCATIONVIEW_H
#define NTKWORLDCLOCKHIGHLIGHTEDMAPLOCATIONVIEW_H

@class UIColor;


#import "NTKWorldClockMapLocationView.h"

@interface NTKWorldClockHighlightedMapLocationView : NTKWorldClockMapLocationView

@property (retain, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (nonatomic) CGFloat strokeWidth; // ivar: _strokeWidth


-(id)initWithFrame:(struct CGRect )arg0 fillColor:(id)arg1 andStrokeWidth:(CGFloat)arg2 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif