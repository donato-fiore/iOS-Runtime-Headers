// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSWELLKNOWNURLRESPONSECODERELIABILITYCHECKER_H
#define WBSWELLKNOWNURLRESPONSECODERELIABILITYCHECKER_H

@class NSURL, NSOperationQueue, NSURLSession;

#import <Foundation/Foundation.h>


@interface WBSWellKnownURLResponseCodeReliabilityChecker : NSObject {
    NSURL *_url;
    NSOperationQueue *_fetchOperationQueue;
    NSURLSession *_session;
    id *_completion;
}




-(id)initWithURL:(id)arg0 ;
-(void)cancel;
-(void)checkReliabilityWithCompletion:(id)arg0 ;


@end


#endif