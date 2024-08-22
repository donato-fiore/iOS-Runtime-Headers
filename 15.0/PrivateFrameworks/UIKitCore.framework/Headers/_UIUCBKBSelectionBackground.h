// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIUCBKBSELECTIONBACKGROUND_H
#define _UIUCBKBSELECTIONBACKGROUND_H



#import "UIView.h"

@interface _UIUCBKBSelectionBackground : UIView {
    UIView *_backgroundProvidingView;
}


@property (nonatomic) BOOL showButtonShape; // ivar: _showButtonShape


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateBackgroundProvidingView;
-(void)layoutSubviews;


@end


#endif