// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKIMAGEANALYSISGESTURERECOGNIZER_H
#define WKIMAGEANALYSISGESTURERECOGNIZER_H

@class UILongPressGestureRecognizer, UIView<WKImageAnalysisGestureRecognizerDelegate>;



@interface WKImageAnalysisGestureRecognizer : UILongPressGestureRecognizer {
    UIView<WKImageAnalysisGestureRecognizerDelegate> *_imageAnalysisGestureRecognizerDelegate;
}




-(id)initWithImageAnalysisGestureDelegate:(id)arg0 ;
-(void)beginAfterExceedingForceThresholdIfNeeded:(id)arg0 ;
-(void)setState:(NSInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif