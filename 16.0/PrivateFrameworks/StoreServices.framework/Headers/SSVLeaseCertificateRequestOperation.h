// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVLEASECERTIFICATEREQUESTOPERATION_H
#define SSVLEASECERTIFICATEREQUESTOPERATION_H

@class NSString;
@protocol OS_dispatch_semaphore;


#import "SSVComplexOperation.h"
#import "SSVPlaybackLeaseConfiguration.h"
#import "SSURLBag.h"

@interface SSVLeaseCertificateRequestOperation : SSVComplexOperation {
    NSObject<OS_dispatch_semaphore> *_bagLoadSemaphore;
    NSString *_certificateURLBagKey;
    SSVPlaybackLeaseConfiguration *_configuration;
    id *_outputBlock;
    SSURLBag *_urlBag;
}


@property (copy) NSString *certificateURLBagKey;
@property (copy) id *outputBlock;


-(id)_resolveCertificateURLReturningError:(*id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithURLBag:(id)arg0 ;
-(void)cancel;
-(void)main;


@end


#endif