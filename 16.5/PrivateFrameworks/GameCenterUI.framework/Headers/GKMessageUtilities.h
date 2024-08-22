// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKMESSAGEUTILITIES_H
#define GKMESSAGEUTILITIES_H


#import <Foundation/Foundation.h>


@interface GKMessageUtilities : NSObject



+(id)contactFromEmailOrPhoneNumber:(id)arg0 fromContactStore:(id)arg1 ;
+(id)messagesRecipientHandleForContact:(id)arg0 ;
+(id)playerWithPhoneNumberOrEmail:(id)arg0 ;
+(id)playerWithPhoneNumberOrEmail:(id)arg0 givenName:(id)arg1 ;
+(id)predicateWithPhoneNumberOrEmail:(id)arg0 ;
+(void)linkMetadataWithPlayerRange:(struct _NSRange )arg0 shareURL:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif