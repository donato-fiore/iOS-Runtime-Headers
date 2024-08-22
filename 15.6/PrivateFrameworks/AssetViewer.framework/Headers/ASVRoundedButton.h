// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASVROUNDEDBUTTON_H
#define ASVROUNDEDBUTTON_H



#import "ASVButton.h"

@interface ASVRoundedButton : ASVButton



-(id)initWithImage:(id)arg0 buttonStyle:(NSInteger)arg1 textStyle:(NSInteger)arg2 controlStyle:(NSInteger)arg3 largeImageInsets:(struct UIEdgeInsets )arg4 ;
-(id)initWithTitle:(id)arg0 buttonStyle:(NSInteger)arg1 textStyle:(NSInteger)arg2 controlStyle:(NSInteger)arg3 adjustsFontForContentSizeCategory:(BOOL)arg4 ;
-(id)initWithTitle:(id)arg0 buttonStyle:(NSInteger)arg1 textStyle:(NSInteger)arg2 controlStyle:(NSInteger)arg3 cornerRadius:(CGFloat)arg4 ;
-(id)initWithTitle:(id)arg0 buttonStyle:(NSInteger)arg1 textStyle:(NSInteger)arg2 controlStyle:(NSInteger)arg3 cornerRadius:(CGFloat)arg4 adjustsFontForContentSizeCategory:(BOOL)arg5 ;
-(void)_setupViewWithCornerRadius:(CGFloat)arg0 ;


@end


#endif