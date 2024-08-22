// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISWIPEACTIONDELETESCANLINEVIEW_H
#define UISWIPEACTIONDELETESCANLINEVIEW_H



#import "UIView.h"
#import "UIColor.h"

@interface UISwipeActionDeleteScanlineView : UIView {
    UIView *_bottomLineWrapper;
    UIView *_topLine;
    UIView *_bottomLine;
}


@property (copy, nonatomic) UIColor *deleteLineColor;


+(CGFloat)lineHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif