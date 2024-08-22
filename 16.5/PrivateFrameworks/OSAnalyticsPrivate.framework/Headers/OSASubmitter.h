// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSASUBMITTER_H
#define OSASUBMITTER_H

@class NSData, NSDictionary, NSError, NSString, NSArray, NSURL;

#import <Foundation/Foundation.h>


@interface OSASubmitter : NSObject {
    NSInteger _responseCode;
    NSData *_responseData;
    NSDictionary *_responseHeaders;
    NSError *_responseError;
    BOOL _dryRun;
    unsigned int _jobCount;
}


@property BOOL allowUnsignedBlobs; // ivar: _allowUnsignedBlobs
@property (copy) NSString *connectionType; // ivar: _connectionType
@property (copy) NSArray *internalWhitelist; // ivar: _internalWhitelist
@property (copy) NSDictionary *launchInfo; // ivar: _launchInfo
@property (readonly) NSURL *submissionURL;


+(id)extractAuthenticatedBlob:(id)arg0 error:(*id)arg1 ;
+(id)submissionPathsWithHomeDirectory:(id)arg0 ;
-(BOOL)cheaterTaskingWithSets:(id)arg0 usingConfig:(id)arg1 resultsCallback:(id)arg2 ;
-(BOOL)submitLogsUsingPolicy:(id)arg0 resultsCallback:(id)arg1 ;
-(id)applyTasking:(id)arg0 taskId:(id)arg1 usingConfig:(id)arg2 fromBlob:(id)arg3 ;
-(id)init;
-(id)locateLog:(id)arg0 forRouting:(id)arg1 usingConfig:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
-(id)primarySubmissionPaths;
-(id)processJob:(id)arg0 forRouting:(id)arg1 including:(id)arg2 usingConfig:(id)arg3 taskings:(id)arg4 summarize:(id)arg5 ;
-(id)processSubmissionJobs:(id)arg0 usingConfig:(id)arg1 summarize:(id)arg2 ;
-(void)abort;
-(void)postContent:(id)arg0 withHeaders:(id)arg1 ;
-(void)prefaceSubmission:(id)arg0 withData:(id)arg1 usingArchive:(id)arg2 andHeaders:(id)arg3 ;
-(void)prepConfig:(id)arg0 ;


@end


#endif