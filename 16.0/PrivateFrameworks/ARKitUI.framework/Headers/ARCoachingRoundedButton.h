// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARCOACHINGROUNDEDBUTTON_H
#define ARCOACHINGROUNDEDBUTTON_H



#import "ARCoachingButton.h"

@interface ARCoachingRoundedButton : ARCoachingButton



-(id)initWithTitle:(id)arg0 buttonStyle:(NSInteger)arg1 textStyle:(NSInteger)arg2 controlStyle:(NSInteger)arg3 adjustsFontForContentSizeCategory:(BOOL)arg4 ;
-(id)initWithTitle:(id)arg0 buttonStyle:(NSInteger)arg1 textStyle:(NSInteger)arg2 controlStyle:(NSInteger)arg3 cornerRadius:(CGFloat)arg4 ;
-(id)initWithTitle:(id)arg0 buttonStyle:(NSInteger)arg1 textStyle:(NSInteger)arg2 controlStyle:(NSInteger)arg3 cornerRadius:(CGFloat)arg4 adjustsFontForContentSizeCategory:(BOOL)arg5 ;
-(void)_setupViewWithCornerRadius:(CGFloat)arg0 ;


@end


#endif