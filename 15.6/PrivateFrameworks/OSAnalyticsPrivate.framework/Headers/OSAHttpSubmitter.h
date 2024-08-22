// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSAHTTPSUBMITTER_H
#define OSAHTTPSUBMITTER_H

@class NSURL, NSURLConnection, NSHTTPURLResponse, NSMutableData;
@protocol OS_dispatch_semaphore;


#import "OSASubmitter.h"

@interface OSAHttpSubmitter : OSASubmitter {
    NSURL *_submissionURL;
    NSURLConnection *_connection;
    NSHTTPURLResponse *_response;
    NSMutableData *_payload;
    NSObject<OS_dispatch_semaphore> *_submissionSem;
    unsigned int _thoughput_warnings;
    CGFloat _last_thoughput_check;
}




-(id)initWithEndpoint:(int)arg0 ;
-(id)submissionURL;
-(void)abort;
-(void)cleanupConnectionAndDisable:(id)arg0 ;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)connection:(id)arg0 didSendBodyData:(NSInteger)arg1 totalBytesWritten:(NSInteger)arg2 totalBytesExpectedToWrite:(NSInteger)arg3 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)postContent:(id)arg0 withHeaders:(id)arg1 ;
-(void)startConnection:(id)arg0 ;


@end


#endif