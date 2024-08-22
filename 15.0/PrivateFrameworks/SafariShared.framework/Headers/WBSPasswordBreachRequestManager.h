// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPASSWORDBREACHREQUESTMANAGER_H
#define WBSPASSWORDBREACHREQUESTMANAGER_H

@class NSURLSession, NSOperationQueue;

#import <Foundation/Foundation.h>

#import "WBSPasswordBreachContext.h"

@interface WBSPasswordBreachRequestManager : NSObject {
    WBSPasswordBreachContext *_context;
    NSURLSession *_session;
    NSOperationQueue *_fetchOperationQueue;
}




-(id)initWithContext:(id)arg0 ;
-(void)_buildRequestWithURL:(id)arg0 headers:(id)arg1 completionHandler:(id)arg2 ;
-(void)_fetchBucketAtURL:(id)arg0 withClientBlindedHash:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchHighFrequencyBucketWithCompletionHandler:(id)arg0 ;
-(void)fetchLowFrequencyBucketsForBucketIdentifiersAndClientBlindedHashes:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif