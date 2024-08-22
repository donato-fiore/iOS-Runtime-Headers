// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TRUSERNOTIFICATION_H
#define _TRUSERNOTIFICATION_H


#import <Foundation/Foundation.h>


@interface _TRUserNotification : NSObject

@property (readonly, nonatomic) *__CFUserNotification CFUserNotification; // ivar: _userNotification
@property (readonly, nonatomic) BOOL didAccept;
@property (readonly, nonatomic) int response; // ivar: _response
@property (readonly, nonatomic) NSUInteger responseFlags; // ivar: _responseFlags


+(id)userNotificationDictionaryWithTitle:(id)arg0 message:(id)arg1 defaultButtonTitle:(id)arg2 alternateButtonTitle:(id)arg3 ;
+(id)userNotificationDictionaryWithTitle:(id)arg0 message:(id)arg1 defaultButtonTitle:(id)arg2 alternateButtonTitle:(id)arg3 isTopMost:(BOOL)arg4 dismissOnUnlock:(BOOL)arg5 ;
-(id)initWithDictionary:(id)arg0 options:(NSUInteger)arg1 error:(*int)arg2 ;
-(id)textFieldValueAtIndex:(NSUInteger)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)show;


@end


#endif