// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTEERASINGATTRIBUTESVIEW_H
#define PKPALETTEERASINGATTRIBUTESVIEW_H

@class UIView, UISegmentedControl;



@interface PKPaletteErasingAttributesView : UIView

@property (nonatomic) NSInteger eraserType;
@property (retain, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl


-(BOOL)_canShowWhileLocked;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;


@end


#endif