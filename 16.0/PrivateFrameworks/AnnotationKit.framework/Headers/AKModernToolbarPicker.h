// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKMODERNTOOLBARPICKER_H
#define AKMODERNTOOLBARPICKER_H

@class UIControl, UIStackView;


#import "AKController.h"

@interface AKModernToolbarPicker : UIControl

@property (weak, nonatomic) AKController *controller; // ivar: _controller
@property (nonatomic) NSInteger currentTag; // ivar: _currentTag
@property (retain, nonatomic) UIStackView *stackview; // ivar: _stackview


-(id)initWithFrame:(struct CGRect )arg0 controller:(id)arg1 ;
-(void)revalidateItems:(id)arg0 ;


@end


#endif