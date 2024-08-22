// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSVLEASEREQUESTOPERATION_H
#define SSVLEASEREQUESTOPERATION_H

@class NSString, NSData;
@protocol OS_dispatch_semaphore;


#import "SSVOperation.h"
#import "SSVPlaybackLeaseConfiguration.h"
#import "SSVPlaybackLeaseRequest.h"
#import "SSURLBag.h"

@interface SSVLeaseRequestOperation : SSVOperation {
    NSObject<OS_dispatch_semaphore> *_bagLoadSemaphore;
    NSString *_bagKey;
    NSData *_certificateData;
    NSString *_certificateURLBagKey;
    SSVPlaybackLeaseConfiguration *_configuration;
    id *_outputBlock;
    SSVPlaybackLeaseRequest *_request;
    NSUInteger _retryCount;
    SSURLBag *_urlBag;
}


@property (copy) NSString *certificateURLBagKey;
@property (readonly, copy) SSVPlaybackLeaseRequest *leaseRequest;
@property (copy) id *outputBlock;


-(BOOL)_loadCertificateDataIfNecessary:(*id)arg0 ;
-(BOOL)_resolveConfigurationAndURLReturningError:(*id)arg0 ;
-(BOOL)_shouldRetryForError:(id)arg0 ;
-(id)initWithLeaseRequest:(id)arg0 URLBag:(id)arg1 ;
-(id)initWithLeaseRequest:(id)arg0 configuration:(id)arg1 ;
-(void)cancel;
-(void)main;


@end


#endif