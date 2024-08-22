// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISWIPEACTIONSTANDARDBUTTON_H
#define UISWIPEACTIONSTANDARDBUTTON_H



#import "UISwipeActionButton.h"

@interface UISwipeActionStandardButton : UISwipeActionButton {
    CGFloat _buttonWidth;
    ? _flags;
}


@property (nonatomic) CGFloat extensionLength; // ivar: _extensionLength


-(CGFloat)buttonWidth;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)titleLabel;
-(void)layoutSubviews;
-(void)setTitle:(id)arg0 forState:(NSUInteger)arg1 ;


@end


#endif