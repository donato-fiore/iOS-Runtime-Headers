// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPHONEDIALER_H
#define CNPHONEDIALER_H


#import <Foundation/Foundation.h>


@interface CNPhoneDialer : NSObject



+(BOOL)cancelDialMessage:(id)arg0 error:(*id)arg1 ;
+(BOOL)sendMessage:(id)arg0 error:(*id)arg1 ;
+(id)URLWithPhoneNumber:(id)arg0 ;
+(id)cancelMessageWithDialMessageID:(id)arg0 ;
+(id)dialMessageWithDataValue:(id)arg0 displayName:(id)arg1 ;
+(id)dialNumber:(id)arg0 displayName:(id)arg1 error:(*id)arg2 ;
+(id)messageWithAdditionalParameters:(id)arg0 ;
+(id)sanitizePhoneNumber:(id)arg0 ;
+(id)sendDialMessage:(id)arg0 displayName:(id)arg1 error:(*id)arg2 ;
+(void)loadIdentityServices;


@end


#endif