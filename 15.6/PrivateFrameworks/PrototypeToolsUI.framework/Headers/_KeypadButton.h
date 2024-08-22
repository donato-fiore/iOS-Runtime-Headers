// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _KEYPADBUTTON_H
#define _KEYPADBUTTON_H

@class UIButton;



@interface _KeypadButton : UIButton

@property (readonly, nonatomic) NSUInteger digit; // ivar: _digit
@property (readonly, nonatomic) NSInteger keyType; // ivar: _keyType


-(id)initWithDigit:(NSUInteger)arg0 target:(id)arg1 ;
-(id)initWithKeyType:(NSInteger)arg0 digit:(NSUInteger)arg1 target:(id)arg2 ;
-(id)initWithKeyType:(NSInteger)arg0 target:(id)arg1 ;
-(void)_updateBackgroundColor;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif