// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBTEXTACCESSORYBUTTON_H
#define OBTEXTACCESSORYBUTTON_H

@class UIButton, NSString;



@interface OBTextAccessoryButton : UIButton

@property (nonatomic) NSString *textStyle; // ivar: _textStyle


+(id)accessoryButtonWithTextStyle:(id)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif