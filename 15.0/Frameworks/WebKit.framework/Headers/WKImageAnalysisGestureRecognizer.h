// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKIMAGEANALYSISGESTURERECOGNIZER_H
#define WKIMAGEANALYSISGESTURERECOGNIZER_H

@class UILongPressGestureRecognizer, UIView<WKImageAnalysisGestureRecognizerDelegate>;



@interface WKImageAnalysisGestureRecognizer : UILongPressGestureRecognizer {
    UIView<WKImageAnalysisGestureRecognizerDelegate> *_imageAnalysisGestureRecognizerDelegate;
}




-(id)initWithImageAnalysisGestureDelegate:(id)arg0 ;
-(void)setState:(NSInteger)arg0 ;


@end


#endif