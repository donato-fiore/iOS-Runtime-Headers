// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHARINGMESSAGEEXTENSIONMESSAGEBUILDER_H
#define PKSHARINGMESSAGEEXTENSIONMESSAGEBUILDER_H


#import <Foundation/Foundation.h>


@interface PKSharingMessageExtensionMessageBuilder : NSObject



+(void)messageFromConfiguration:(id)arg0 completionHandler:(id)arg1 ;
+(void)messageFromInvitation:(id)arg0 analyticsSessionToken:(id)arg1 completionHandler:(id)arg2 ;
+(void)messageFromInvitation:(id)arg0 completionHandler:(id)arg1 ;
+(void)messageFromSharingRequest:(id)arg0 completionHandler:(id)arg1 ;
+(void)messageURLFromSharingRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif