// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDGRIDVIEW_H
#define EDGRIDVIEW_H

@class UIView, UIColor;



@interface EDGridView : UIView {
    NSInteger _cellCount;
}


@property (retain, nonatomic) UIColor *strokeColor; // ivar: _strokeColor


-(id)initWithWithCellCount:(NSInteger)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif