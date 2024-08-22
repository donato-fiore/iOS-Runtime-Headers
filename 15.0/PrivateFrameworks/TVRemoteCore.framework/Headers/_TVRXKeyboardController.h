// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRXKEYBOARDCONTROLLER_H
#define _TVRXKEYBOARDCONTROLLER_H

@class NSString;
@protocol _TVRXKeyboardControllerDelegate, _TVRXKeyboardImpl;

#import <Foundation/Foundation.h>

#import "TVRCKeyboardAttributes.h"

@interface _TVRXKeyboardController : NSObject

@property (readonly, nonatomic) TVRCKeyboardAttributes *attributes;
@property (weak, nonatomic) NSObject<_TVRXKeyboardControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (retain, nonatomic, getter=_impl, setter=_setImpl:) NSObject<_TVRXKeyboardImpl> *impl; // ivar: _impl
@property (copy, nonatomic) NSString *text;


-(id)_init;
-(void)_beginSessionWithAttributes:(id)arg0 ;
-(void)_editingSessionBeganWithAttributes:(id)arg0 ;
-(void)_editingSessionEnded;
-(void)_editingSessionUpdatedAttributes:(id)arg0 ;
-(void)_editingSessionUpdatedText:(id)arg0 ;
-(void)_endSession;
-(void)_textActionPayloadGenerated:(id)arg0 ;
-(void)sendReturnKey;
-(void)sendTextActionPayload:(id)arg0 ;


@end


#endif