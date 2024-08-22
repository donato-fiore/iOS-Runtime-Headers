// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OFUITRACKINGPINCHVIEW_H
#define OFUITRACKINGPINCHVIEW_H

@class UIImageView;


#import "OFUIView.h"

@interface OFUITrackingPinchView : OFUIView {
    UIImageView *_imageView;
    CGPoint _anchorPoint;
    CGSize _originalSize;
    BOOL _isRotating;
    CGFloat _originalAngle;
    CGFloat _currentAngle;
}


@property CGPoint originalCenter; // ivar: _originalCenter


-(id)image;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)beginTrackingPinch:(id)arg0 ;
-(void)completeTrackingPinch:(id)arg0 ;
-(void)continueTrackingPinch:(id)arg0 ;
-(void)dealloc;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)setContentsRect:(struct CGRect )arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setSize:(struct CGSize )arg0 angle:(float)arg1 ;


@end


#endif