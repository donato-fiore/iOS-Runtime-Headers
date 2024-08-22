// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT27SIGNATURESTROKEWIDTHCONTROL_H
#define _TTC8PAPERKIT27SIGNATURESTROKEWIDTHCONTROL_H

@class UIControl, NSString;
@protocol _TtP8PaperKit26SignatureStrokeWidthWidget_;



@interface _TtC8PaperKit27SignatureStrokeWidthControl : UIControl <_TtP8PaperKit26SignatureStrokeWidthWidget_>

 {
    ? valueLabel;
    ? $__lazy_storage_$_strokeWidthPreview;
    ? strokePreviewLargeWidth;
    ? strokePreviewShortWidth;
    ? unit;
}


@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL selected;
@property (nonatomic, readonly) NSString *unit;
@property (nonatomic, readonly) NSInteger width; // ivar: width


-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif