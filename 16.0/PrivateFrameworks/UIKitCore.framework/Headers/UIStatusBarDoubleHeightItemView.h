// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARDOUBLEHEIGHTITEMVIEW_H
#define UISTATUSBARDOUBLEHEIGHTITEMVIEW_H

@class NSString;


#import "UIStatusBarItemView.h"

@interface UIStatusBarDoubleHeightItemView : UIStatusBarItemView {
    NSString *_contentsString;
    CGFloat _letterSpacing;
    BOOL _ellipsize;
}




-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)extraRightPadding;
-(id)contentsImage;


@end


#endif