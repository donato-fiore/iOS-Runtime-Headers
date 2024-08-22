// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVRCRMSDEVICEKEYBOARDIMPL_H
#define _TVRCRMSDEVICEKEYBOARDIMPL_H

@class NSString;
@protocol TVRXKeyboardImpl, _TVRCRMSDeviceKeyboardImplDelegate;

#import <Foundation/Foundation.h>

#import "TVRXKeyboardController.h"
#import "TVRMSKeyboardInfo.h"

@interface _TVRCRMSDeviceKeyboardImpl : NSObject <TVRXKeyboardImpl>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_TVRCRMSDeviceKeyboardImplDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editing; // ivar: _editing
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) TVRXKeyboardController *keyboardController; // ivar: _keyboardController
@property (retain, nonatomic) TVRMSKeyboardInfo *keyboardInfo; // ivar: _keyboardInfo
@property (readonly) Class superclass;


-(BOOL)isEditing;
-(NSInteger)_keyboardTypeForInfo:(id)arg0 ;
-(id)_attributesForKeyboardInfo:(id)arg0 ;
-(id)attributes;
-(id)text;
-(void)keyboardSessionBegan:(id)arg0 ;
-(void)keyboardSessionEnded:(id)arg0 ;
-(void)keyboardSessionUpdatedEditingInfo:(id)arg0 ;
-(void)sendReturnKey;
-(void)setText:(id)arg0 ;


@end


#endif