// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SOERRORHELPER_H
#define SOERRORHELPER_H


#import <Foundation/Foundation.h>


@interface SOErrorHelper : NSObject



+(BOOL)error:(id)arg0 hasCode:(NSInteger)arg1 ;
+(BOOL)error:(id)arg0 hasCode:(NSInteger)arg1 subcode:(NSInteger)arg2 ;
+(id)deniedBundleIdentifier:(id)arg0 ;
+(id)doNotHandleBreakingRecursionWithCallerBundleIdentifier:(id)arg0 ;
+(id)errorNotSupported;
+(id)errorWithCode:(NSInteger)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 message:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 message:(id)arg1 moreInfo:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 message:(id)arg1 suberror:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 subcode:(NSInteger)arg1 message:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 userInfo:(id)arg1 ;
+(id)internalErrorWithMessage:(id)arg0 ;
+(id)invalidURLError:(id)arg0 ;
+(id)missingEntitlementError:(id)arg0 ;
+(id)parameterErrorWithMessage:(id)arg0 ;
+(id)silentInternalErrorWithMessage:(id)arg0 ;
+(void)raiseExceptionOnError:(id)arg0 ;


@end


#endif