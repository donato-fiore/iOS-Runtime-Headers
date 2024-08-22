// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NTKCFACEDETAILCOLLECTIONCELLLABEL_H
#define _NTKCFACEDETAILCOLLECTIONCELLLABEL_H

@class UIView, UILabel, CAShapeLayer, NSString;



@interface _NTKCFaceDetailCollectionCellLabel : UIView {
    UILabel *_label;
    CAShapeLayer *_background;
}


@property (nonatomic) BOOL active; // ivar: _active
@property (readonly, nonatomic) CGFloat firstLineBaseline;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL usesShortTextWidth; // ivar: _usesShortTextWidth


-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif