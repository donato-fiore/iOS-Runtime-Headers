// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKDAYOCCURRENCERESIZEHANDLEVIEW_H
#define EKDAYOCCURRENCERESIZEHANDLEVIEW_H

@class UIView, UIColor;


#import "EKDayOccurrenceView.h"

@interface EKDayOccurrenceResizeHandleView : UIView

@property (retain, nonatomic) UIColor *baseColor; // ivar: _baseColor
@property (readonly, weak, nonatomic) EKDayOccurrenceView *occurrenceView; // ivar: _occurrenceView
@property (nonatomic) CGFloat radius; // ivar: _radius


-(id)initWithFrame:(struct CGRect )arg0 occurrenceView:(id)arg1 ;
-(struct CGRect )_circleRect;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif