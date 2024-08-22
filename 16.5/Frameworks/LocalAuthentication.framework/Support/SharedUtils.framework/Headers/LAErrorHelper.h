// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAERRORHELPER_H
#define LAERRORHELPER_H


#import <Foundation/Foundation.h>


@interface LAErrorHelper : NSObject



+(BOOL)error:(id)arg0 hasCode:(NSInteger)arg1 ;
+(BOOL)error:(id)arg0 hasCode:(NSInteger)arg1 subcode:(NSInteger)arg2 ;
+(BOOL)error:(id)arg0 hasCodeFromArray:(id)arg1 ;
+(BOOL)storageError:(id)arg0 hasCode:(NSInteger)arg1 ;
+(id)_errorNotSupportedAction:(id)arg0 on:(id)arg1 ;
+(id)errorDeviceDoesNotSupportAction:(id)arg0 ;
+(id)errorNotSupported;
+(id)errorPlatformDoesNotSupportAction:(id)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 message:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 message:(id)arg1 moreInfo:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 message:(id)arg1 suberror:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 subcode:(NSInteger)arg1 message:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 userInfo:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 withUnderlyingErrors:(id)arg1 ;
+(id)internalErrorWithMessage:(id)arg0 ;
+(id)internalErrorWithMessage:(id)arg0 suberror:(id)arg1 ;
+(id)localizedStringForError:(NSInteger)arg0 ;
+(id)missingEntitlementError:(id)arg0 ;
+(id)parameterErrorForMissingOrInvalidObject:(id)arg0 name:(char *)arg1 ;
+(id)parameterErrorWithMessage:(id)arg0 ;
+(id)redactInternalError:(id)arg0 ;
+(id)silentInternalErrorWithMessage:(id)arg0 ;
+(id)storageErrorWithCode:(NSInteger)arg0 message:(id)arg1 ;
+(id)storageErrorWithCode:(NSInteger)arg0 message:(id)arg1 suberror:(id)arg2 ;
+(id)xctErrorWithMessage:(id)arg0 suberror:(id)arg1 ;
+(void)raiseExceptionOnError:(id)arg0 ;


@end


#endif