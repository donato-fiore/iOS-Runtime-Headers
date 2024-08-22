// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETRESOURCEWRITEREQUEST_H
#define PHASSETRESOURCEWRITEREQUEST_H

@class NSError, NSString, NSURL, NSDictionary;
@protocol PHAssetResourceRequestDelegate, PHAssetResourceRequest;

#import <Foundation/Foundation.h>

#import "PHAssetResourceRequest.h"
#import "PHAssetResource.h"
#import "PHAssetResourceRequestOptions.h"

@interface PHAssetResourceWriteRequest : NSObject <PHAssetResourceRequestDelegate, PHAssetResourceRequest>

 {
    PHAssetResourceRequest *_dataRequest;
    NSError *_error;
    os_unfair_lock_s _completionHandlerLock;
}


@property (readonly, nonatomic) PHAssetResource *assetResource; // ivar: _assetResource
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<PHAssetResourceRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *destinationFileURL; // ivar: _destinationFileURL
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *info; // ivar: _info
@property (readonly, nonatomic) NSUInteger managerID; // ivar: _managerID
@property (readonly, nonatomic) PHAssetResourceRequestOptions *options; // ivar: _options
@property (readonly, nonatomic) int requestID; // ivar: _requestID
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *taskIdentifier; // ivar: _taskIdentifier


-(id)initWithAssetResource:(id)arg0 destinationFileURL:(id)arg1 options:(id)arg2 requestID:(int)arg3 managerID:(NSUInteger)arg4 delegate:(id)arg5 completionHandler:(id)arg6 ;
-(void)_handleDidFindFileURL:(id)arg0 ;
-(void)assetResourceRequest:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)cancel;
-(void)setErrorIfNone:(id)arg0 ;
-(void)startRequest;


@end


#endif