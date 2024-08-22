// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSTROKEPREVIEWVIEW_H
#define PKSTROKEPREVIEWVIEW_H

@class UIView, CALayer, CIContext;



@interface PKStrokePreviewView : UIView {
    CALayer *_drawingLayer;
    CALayer *_shadowLayer;
    CIContext *_context;
}




-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif