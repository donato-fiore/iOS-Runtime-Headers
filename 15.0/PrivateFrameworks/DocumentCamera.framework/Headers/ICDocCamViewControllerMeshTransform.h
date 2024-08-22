// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDOCCAMVIEWCONTROLLERMESHTRANSFORM_H
#define ICDOCCAMVIEWCONTROLLERMESHTRANSFORM_H

@class UIImageView, NSString, UIView;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>

#import "ICDocCamImageQuad.h"

@interface ICDocCamViewControllerMeshTransform : NSObject <CAAnimationDelegate>



@property (retain, nonatomic) UIImageView *animationImageView; // ivar: _animationImageView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *imageMeshAnimationCompletionBlock; // ivar: _imageMeshAnimationCompletionBlock
@property (retain, nonatomic) ICDocCamImageQuad *imageQuad; // ivar: _imageQuad
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (nonatomic) CGRect imageViewFrame; // ivar: _imageViewFrame
@property (nonatomic) CGRect previewViewFrame; // ivar: _previewViewFrame
@property (retain, nonatomic) UIView *scrimView; // ivar: _scrimView
@property (readonly) Class superclass;


-(id)imageMeshTransformWithImageQuad:(id)arg0 imageViewFrame:(struct CGRect )arg1 previewBounds:(struct CGRect )arg2 finalTransform:(BOOL)arg3 ;
-(id)initWithImage:(id)arg0 backgroundImage:(id)arg1 imageViewFrame:(struct CGRect )arg2 view:(id)arg3 imageQuad:(id)arg4 previewView:(id)arg5 previewBounds:(struct CGRect )arg6 scrimView:(id)arg7 ;
-(struct CGRect )frameForImageInImageViewFrame:(struct CGRect )arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)hide;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif