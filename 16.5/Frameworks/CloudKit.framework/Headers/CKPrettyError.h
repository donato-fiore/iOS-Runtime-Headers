// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPRETTYERROR_H
#define CKPRETTYERROR_H

@class NSError;



@interface CKPrettyError : NSError



+(BOOL)isError:(id)arg0 withCode:(NSInteger)arg1 ;
+(BOOL)isError:(id)arg0 withCodes:(id)arg1 ;
+(id)_errorDomain;
+(id)descriptionForError:(id)arg0 ;
+(id)descriptionForError:(id)arg0 paths:(BOOL)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 URL:(id)arg1 format:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 error:(id)arg1 URL:(id)arg2 format:(id)arg3 ;
+(id)errorWithCode:(NSInteger)arg0 error:(id)arg1 format:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 error:(id)arg1 path:(id)arg2 format:(id)arg3 ;
+(id)errorWithCode:(NSInteger)arg0 format:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 path:(id)arg1 format:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 userInfo:(id)arg1 error:(id)arg2 format:(id)arg3 ;
+(id)errorWithCode:(NSInteger)arg0 userInfo:(id)arg1 error:(id)arg2 format:(id)arg3 arguments:(char *)arg4 ;
+(id)errorWithCode:(NSInteger)arg0 userInfo:(id)arg1 error:(id)arg2 path:(id)arg3 URL:(id)arg4 description:(id)arg5 ;
+(id)errorWithCode:(NSInteger)arg0 userInfo:(id)arg1 format:(id)arg2 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 format:(id)arg2 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 path:(id)arg2 format:(id)arg3 ;
+(id)itemErrorFromError:(id)arg0 forID:(id)arg1 ;
+(id)sanitizedError:(id)arg0 ;
+(id)secureCodableError:(id)arg0 ;
-(id)CKPartialErrorDescription;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif