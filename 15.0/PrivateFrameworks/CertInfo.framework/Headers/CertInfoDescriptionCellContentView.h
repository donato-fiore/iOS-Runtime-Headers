// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CERTINFODESCRIPTIONCELLCONTENTVIEW_H
#define CERTINFODESCRIPTIONCELLCONTENTVIEW_H

@class UIView, NSArray;



@interface CertInfoDescriptionCellContentView : UIView {
    NSArray *_labelsAndValues;
    CGFloat _idealHeight;
    int _sizesCount;
    *CGSize _sizes;
}




-(CGFloat)rowHeight;
-(id)_labelFont;
-(id)_valueFont;
-(void)_recalculateIdealHeight;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setLabelsAndValues:(id)arg0 ;


@end


#endif