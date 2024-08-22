// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKTRANSITINCIDENTITEMCELLBACKGROUNDVIEW_H
#define MKTRANSITINCIDENTITEMCELLBACKGROUNDVIEW_H

@class UIView, UIColor;



@interface MKTransitIncidentItemCellBackgroundView : UIView {
    CGFloat _scale;
    CGFloat _cornerRadius;
}


@property (retain, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (nonatomic) NSInteger position; // ivar: _position
@property (retain, nonatomic) UIColor *strokeColor; // ivar: _strokeColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didMoveToWindow;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif