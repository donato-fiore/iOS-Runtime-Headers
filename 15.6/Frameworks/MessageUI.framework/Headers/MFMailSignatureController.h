// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMAILSIGNATURECONTROLLER_H
#define MFMAILSIGNATURECONTROLLER_H


#import <Foundation/Foundation.h>


@interface MFMailSignatureController : NSObject



-(BOOL)isDefaultSignatureForSender:(id)arg0 ;
-(id)_getSignatureStringForSender:(id)arg0 ;
-(id)_signatureStringForSender:(id)arg0 ;
-(void)addSignatureForSender:(id)arg0 bodyField:(id)arg1 prepend:(BOOL)arg2 ;
-(void)finalizeSignatureForBodyField:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeSignatureForSender:(id)arg0 bodyField:(id)arg1 ;
-(void)updateSignatureForSender:(id)arg0 bodyField:(id)arg1 ;


@end


#endif