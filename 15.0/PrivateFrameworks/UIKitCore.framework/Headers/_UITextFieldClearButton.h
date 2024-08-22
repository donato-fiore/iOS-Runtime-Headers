// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTFIELDCLEARBUTTON_H
#define _UITEXTFIELDCLEARBUTTON_H

@protocol _UITextFieldClearButtonImageProviding;


#import "UIButton.h"

@interface _UITextFieldClearButton : UIButton

@property (weak, nonatomic) NSObject<_UITextFieldClearButtonImageProviding> *imageProvider; // ivar: _imageProvider


+(Class)_visualProviderClass;
-(BOOL)_isModernButton;
-(id)_defaultImageForState:(NSUInteger)arg0 withConfiguration:(id)arg1 ;
-(void)setPointerInteractionEnabled:(BOOL)arg0 ;


@end


#endif