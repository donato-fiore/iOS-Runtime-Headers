// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTEXTINPUTGESTUREFEEDBACKVIEW_H
#define PKTEXTINPUTGESTUREFEEDBACKVIEW_H

@class UIView, NSArray;


#import "PKTextInputFeedbackController.h"

@interface PKTextInputGestureFeedbackView : UIView {
    BOOL __needsRefresh;
    PKTextInputFeedbackController *_dataSourceController;
    NSArray *__highlightViews;
    UIView *__reserveSpaceView;
    CGRect __reserveSpaceCaretRect;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif