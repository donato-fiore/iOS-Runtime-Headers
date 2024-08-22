// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDOCCAMRENAMEPROMPT_H
#define ICDOCCAMRENAMEPROMPT_H

@class NSString, UIAlertAction;
@protocol UITextFieldDelegate;

#import <Foundation/Foundation.h>

#import "ICDocCamRenamePrompt.h"

@interface ICDocCamRenamePrompt : NSObject <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *existingTitle; // ivar: _existingTitle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIAlertAction *saveAction; // ivar: _saveAction
@property (retain, nonatomic) ICDocCamRenamePrompt *strongSelf; // ivar: _strongSelf
@property (readonly) Class superclass;


-(BOOL)isTitleValid:(id)arg0 error:(*id)arg1 ;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(id)initWithExistingTitle:(id)arg0 ;
-(id)stringByScrubbingStringForCollectionName:(id)arg0 ;
-(void)enableAction:(id)arg0 withString:(id)arg1 ;
-(void)showFromViewController:(id)arg0 completion:(id)arg1 ;
-(void)showSingleButtonAlertFromViewController:(id)arg0 withTitle:(id)arg1 message:(id)arg2 ;
-(void)textFieldChanged:(id)arg0 ;


@end


#endif