// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDOCCAMIMAGEQUADEDITPANGESTURERECOGNIZER_H
#define ICDOCCAMIMAGEQUADEDITPANGESTURERECOGNIZER_H

@class UIPanGestureRecognizer;
@protocol ICDocCamImageQuadEditPanGestureRecognizerDelegate;



@interface ICDocCamImageQuadEditPanGestureRecognizer : UIPanGestureRecognizer

@property (weak, nonatomic) NSObject<ICDocCamImageQuadEditPanGestureRecognizerDelegate> *quadEditorDelegate; // ivar: _quadEditorDelegate


-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif