// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSMARTSCALEVIEW_H
#define PXSMARTSCALEVIEW_H

@class UIView;



@interface PXSmartScaleView : UIView

@property (readonly) CGFloat displayScale;
@property CGSize displaySize; // ivar: _displaySize


-(void)setFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewScaleDidChange;


@end


#endif