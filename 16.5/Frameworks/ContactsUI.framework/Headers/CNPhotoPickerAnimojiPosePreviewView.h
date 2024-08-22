// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPHOTOPICKERANIMOJIPOSEPREVIEWVIEW_H
#define CNPHOTOPICKERANIMOJIPOSEPREVIEWVIEW_H

@class AVTView, CAShapeLayer;


#import "CNPhotoPickerPreviewView.h"

@interface CNPhotoPickerAnimojiPosePreviewView : CNPhotoPickerPreviewView

@property (readonly, nonatomic) AVTView *avtView; // ivar: _avtView
@property (retain, nonatomic) CAShapeLayer *clippingLayer; // ivar: _clippingLayer


-(void)layoutSubviews;
-(void)setupPreview;
-(void)updatePoseWithConfiguration:(id)arg0 ;
-(void)updatePreviewWithItem:(id)arg0 ;


@end


#endif