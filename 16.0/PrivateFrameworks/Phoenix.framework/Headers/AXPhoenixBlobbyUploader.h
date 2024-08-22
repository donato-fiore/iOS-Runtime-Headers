// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXPHOENIXBLOBBYUPLOADER_H
#define AXPHOENIXBLOBBYUPLOADER_H

@class NSURLSession, NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface AXPhoenixBlobbyUploader : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSURLSession *_session;
    NSDictionary *_bucketInfo;
}




+(id)_getStringforDate:(id)arg0 ;
+(id)sharedUploader;
-(id)_dateStringForHeaderForDate:(id)arg0 ;
-(id)_getAuthorizationForRequest:(id)arg0 headers:(id)arg1 ;
-(id)_hmacSHA1WithKey:(id)arg0 forData:(id)arg1 ;
-(id)_md5OfData:(id)arg0 ;
-(id)_prefixFromPackageFilePath:(id)arg0 ;
-(id)_urlRequestForFileAtPath:(id)arg0 bucket:(id)arg1 prefix:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(void)_completeUploadRequestWithData:(id)arg0 urlResponse:(id)arg1 error:(id)arg2 forPackagePath:(id)arg3 withCompletion:(id)arg4 ;
-(void)_uploadPackage:(id)arg0 bucket:(id)arg1 prefix:(id)arg2 withCompletion:(id)arg3 ;
-(void)_uploadPackagePath:(id)arg0 bucket:(id)arg1 prefix:(id)arg2 withCompletion:(id)arg3 ;
-(void)uploadPackages:(id)arg0 toBucket:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif