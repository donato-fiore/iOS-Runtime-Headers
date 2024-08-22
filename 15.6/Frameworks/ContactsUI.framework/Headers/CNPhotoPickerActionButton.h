// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPHOTOPICKERACTIONBUTTON_H
#define CNPHOTOPICKERACTIONBUTTON_H

@class UIButton;


#import "CNPhotoPickerActionButtonBlockHandler.h"

@interface CNPhotoPickerActionButton : UIButton

@property (retain, nonatomic) CNPhotoPickerActionButtonBlockHandler *blockHandler; // ivar: _blockHandler
@property (nonatomic) BOOL isDestructive; // ivar: _isDestructive


+(id)buttonWithTitle:(id)arg0 actionBlock:(id)arg1 ;
+(id)defaultButtonWithTitle:(id)arg0 actionBlock:(id)arg1 ;
+(id)destructiveButtonWithTitle:(id)arg0 actionBlock:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)performActionBlock;


@end


#endif