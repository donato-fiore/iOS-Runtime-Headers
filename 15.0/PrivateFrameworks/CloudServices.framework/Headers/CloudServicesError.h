// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLOUDSERVICESERROR_H
#define CLOUDSERVICESERROR_H


#import <Foundation/Foundation.h>


@interface CloudServicesError : NSObject



+(NSInteger)codeForErrno:(NSInteger)arg0 ;
+(NSInteger)codeForNSError:(id)arg0 ;
+(id)errorForNSError:(id)arg0 path:(id)arg1 format:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 URL:(id)arg1 format:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 error:(id)arg1 URL:(id)arg2 format:(id)arg3 ;
+(id)errorWithCode:(NSInteger)arg0 error:(id)arg1 format:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 format:(id)arg1 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 format:(id)arg2 ;
+(id)sanitizedError:(id)arg0 ;


@end


#endif