// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICKEYBOARDNOTIFICATIONLISTENER_H
#define ICKEYBOARDNOTIFICATIONLISTENER_H


#import <Foundation/Foundation.h>


@interface ICKeyboardNotificationListener : NSObject

@property (nonatomic) CGRect keyboardFrame; // ivar: _keyboardFrame


+(id)sharedListener;
-(id)init;
-(struct CGRect )currentKeyboardFrame;
-(void)dealloc;
-(void)handleKeyboardWillHide:(id)arg0 ;
-(void)handleKeyboardWillShow:(id)arg0 ;


@end


#endif