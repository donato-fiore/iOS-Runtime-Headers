// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBDEFAULTFORMDELEGATE_H
#define WEBDEFAULTFORMDELEGATE_H

@class NSString;
@protocol WebFormDelegate;

#import <Foundation/Foundation.h>


@interface WebDefaultFormDelegate : NSObject <WebFormDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedFormDelegate;
-(BOOL)textField:(id)arg0 doCommandBySelector:(SEL)arg1 inFrame:(id)arg2 ;
-(void)didFocusTextField:(id)arg0 inFrame:(id)arg1 ;
-(void)frame:(id)arg0 sourceFrame:(id)arg1 willSubmitForm:(id)arg2 withValues:(id)arg3 submissionListener:(id)arg4 ;
-(void)textDidChangeInTextArea:(id)arg0 inFrame:(id)arg1 ;
-(void)textDidChangeInTextField:(id)arg0 inFrame:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg0 inFrame:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 inFrame:(id)arg1 ;
-(void)willSendSubmitEventToForm:(id)arg0 inFrame:(id)arg1 withValues:(id)arg2 ;


@end


#endif