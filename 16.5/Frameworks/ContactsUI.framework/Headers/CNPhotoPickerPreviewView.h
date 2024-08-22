// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPHOTOPICKERPREVIEWVIEW_H
#define CNPHOTOPICKERPREVIEWVIEW_H

@class UIView, CAShapeLayer;



@interface CNPhotoPickerPreviewView : UIView

@property (retain, nonatomic) CAShapeLayer *clippingLayer; // ivar: _clippingLayer
@property (readonly, nonatomic) UIView *previewView; // ivar: _previewView
@property (retain, nonatomic) UIView *thumbnailContentView; // ivar: _thumbnailContentView


+(id)pickerPreviewWithFrame:(struct CGRect )arg0 forItem:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setupPreview;
-(void)updatePreviewWithItem:(id)arg0 ;


@end


#endif