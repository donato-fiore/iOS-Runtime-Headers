// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPQUICKTYPESERVERHANDLER_H
#define PPQUICKTYPESERVERHANDLER_H

@protocol PPQuickTypeServerProtocol;

#import <Foundation/Foundation.h>


@interface PPQuickTypeServerHandler : NSObject <PPQuickTypeServerProtocol>





-(id)init;
-(void)hibernateWithCompletion:(id)arg0 ;
-(void)quickTypeItemsWithLanguageModelingTokens:(id)arg0 localeIdentifier:(id)arg1 recipients:(id)arg2 bundleIdentifier:(id)arg3 limit:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)quickTypeItemsWithQuery:(id)arg0 limit:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)recentQuickTypeItemsForRecipients:(id)arg0 completion:(id)arg1 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;
-(void)warmUpWithCompletion:(id)arg0 ;


@end


#endif