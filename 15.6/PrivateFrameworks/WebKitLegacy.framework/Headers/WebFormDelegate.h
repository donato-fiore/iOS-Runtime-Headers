// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBFORMDELEGATE_H
#define WEBFORMDELEGATE_H

@class NSString;
@protocol WebFormDelegate;

#import <Foundation/Foundation.h>


@interface WebFormDelegate : NSObject <WebFormDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_sharedWebFormDelegate;
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