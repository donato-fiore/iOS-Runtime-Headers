// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFOUNDATIONERROR_H
#define CNFOUNDATIONERROR_H


#import <Foundation/Foundation.h>


@interface CNFoundationError : NSObject



+(BOOL)ifResultIsNo:(BOOL)arg0 setOutputError:(*id)arg1 toError:(id)arg2 ;
+(BOOL)ifResultIsNo:(BOOL)arg0 setOutputError:(*id)arg1 withBlock:(id)arg2 ;
+(BOOL)isCanceledError:(id)arg0 ;
+(BOOL)isCertificateError:(id)arg0 ;
+(BOOL)isError:(id)arg0 errorWithDomain:(id)arg1 code:(NSInteger)arg2 ;
+(BOOL)isFileAlreadyExistsError:(id)arg0 ;
+(BOOL)isFileNotFoundError:(id)arg0 ;
+(BOOL)isNotImplementedError:(id)arg0 ;
+(BOOL)isTimeoutError:(id)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 userInfo:(id)arg1 ;
+(id)errorWithErrno;
+(id)errorWithErrno:(int)arg0 ;
+(id)errorWithErrno:(int)arg0 userInfo:(id)arg1 ;
+(id)errorWithErrnoAndUserInfo:(id)arg0 ;
+(id)ifResultIsNil:(id)arg0 setOutputError:(*id)arg1 toError:(id)arg2 ;
+(id)ifResultIsNil:(id)arg0 setOutputError:(*id)arg1 withBlock:(id)arg2 ;
+(id)notImplementedError;
+(id)timeoutError;
+(id)userCanceledError;


@end


#endif