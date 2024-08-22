// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSAMPLEGADGETVIEW_H
#define PXSAMPLEGADGETVIEW_H

@class UICollectionViewCell, UIColor, UIView;
@protocol PXSampleGadgetViewDelegate;



@interface PXSampleGadgetView : UICollectionViewCell

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) UIView *colorView; // ivar: _colorView
@property (weak, nonatomic) NSObject<PXSampleGadgetViewDelegate> *delegate; // ivar: _delegate


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif