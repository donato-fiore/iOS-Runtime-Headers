// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MBERROR_H
#define MBERROR_H


#import <Foundation/Foundation.h>


@interface MBError : NSObject



+(BOOL)isCancelledError:(id)arg0 ;
+(BOOL)isCancelledXPCActivityDeferredError:(id)arg0 ;
+(BOOL)isError:(id)arg0 withCode:(NSInteger)arg1 ;
+(BOOL)isError:(id)arg0 withCodes:(NSInteger)arg1 ;
+(BOOL)isNSError:(id)arg0 withCode:(NSInteger)arg1 ;
+(BOOL)isRetryAfterError:(id)arg0 retryAfterDate:(*id)arg1 ;
+(BOOL)isTransientError:(id)arg0 ;
+(BOOL)isUnexpectedErrorCode:(NSInteger)arg0 ;
+(id)descriptionForError:(id)arg0 ;
+(id)descriptionForError:(id)arg0 paths:(BOOL)arg1 ;
+(id)dictionaryRepresentationForError:(id)arg0 ;
+(id)errorForHTTPURLResponse:(id)arg0 error:(id)arg1 ;
+(id)errorForNSError:(id)arg0 path:(id)arg1 format:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 URL:(id)arg1 format:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 description:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 error:(id)arg1 URL:(id)arg2 format:(id)arg3 ;
+(id)errorWithCode:(NSInteger)arg0 error:(id)arg1 format:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 error:(id)arg1 path:(id)arg2 format:(id)arg3 ;
+(id)errorWithCode:(NSInteger)arg0 format:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 path:(id)arg1 format:(id)arg2 ;
+(id)errorWithDictionaryRepresentation:(id)arg0 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 format:(id)arg2 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 path:(id)arg2 format:(id)arg3 ;
+(id)errorWithErrno:(int)arg0 code:(NSInteger)arg1 path:(id)arg2 format:(id)arg3 ;
+(id)errorWithErrno:(int)arg0 code:(NSInteger)arg1 path:(id)arg2 format:(id)arg3 arguments:(char *)arg4 ;
+(id)errorWithErrno:(int)arg0 format:(id)arg1 ;
+(id)errorWithErrno:(int)arg0 path:(id)arg1 format:(id)arg2 ;
+(id)errorWithErrors:(id)arg0 ;
+(id)formatErrors:(id)arg0 descriptionSelector:(SEL)arg1 ;
+(id)loggableDescriptionForError:(id)arg0 ;
+(id)posixErrorWithCode:(NSInteger)arg0 format:(id)arg1 ;
+(id)posixErrorWithCode:(NSInteger)arg0 path:(id)arg1 format:(id)arg2 ;
+(id)posixErrorWithFormat:(id)arg0 ;
+(id)posixErrorWithPath:(id)arg0 format:(id)arg1 ;
+(id)sanitizedError:(id)arg0 ;
+(int)codeForErrno:(int)arg0 ;
+(int)codeForNSError:(id)arg0 ;
+(int)errnoForError:(id)arg0 ;


@end


#endif