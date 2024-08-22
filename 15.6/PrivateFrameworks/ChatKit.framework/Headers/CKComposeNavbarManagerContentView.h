// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCOMPOSENAVBARMANAGERCONTENTVIEW_H
#define CKCOMPOSENAVBARMANAGERCONTENTVIEW_H

@class UIView;


#import "CKNavigationBarCanvasView.h"

@interface CKComposeNavbarManagerContentView : UIView

@property (retain, nonatomic) CKNavigationBarCanvasView *canvasView; // ivar: _canvasView


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif