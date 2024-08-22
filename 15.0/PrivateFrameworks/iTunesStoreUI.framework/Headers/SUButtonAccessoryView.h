// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUBUTTONACCESSORYVIEW_H
#define SUBUTTONACCESSORYVIEW_H

@class UIView;


#import "SUGradientButton.h"

@interface SUButtonAccessoryView : UIView {
    SUGradientButton *_button;
}


@property (readonly, nonatomic) SUGradientButton *button;


-(id)init;
-(id)initWithDefaultSize;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif