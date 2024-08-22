// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHMEDIARESOURCEREQUEST_H
#define PHMEDIARESOURCEREQUEST_H

@class NSMutableData, NSString;
@protocol PHAssetResourceRequestDelegate, PHMediaRequestDelegate;


#import "PHMediaRequest.h"
#import "PHAssetResourceRequest.h"
#import "PHMediaResourceResult.h"
#import "PHAssetResource.h"

@interface PHMediaResourceRequest : PHMediaRequest <PHAssetResourceRequestDelegate>

 {
    BOOL _networkAccessAllowed;
    NSInteger _downloadIntent;
    NSInteger _downloadPriority;
    BOOL _synchronous;
    PHAssetResourceRequest *_internalRequest;
    NSMutableData *_compositeData;
    PHMediaResourceResult *_dataResult;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PHMediaRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (readonly, nonatomic) PHAssetResource *resource; // ivar: _resource
@property (readonly, nonatomic) NSInteger resourceType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsURLOnly; // ivar: _wantsURLOnly


-(BOOL)isSynchronous;
-(void)_finishWithError:(id)arg0 ;
-(void)_handleDidFindFileURL:(id)arg0 ;
-(void)_reportProgress:(CGFloat)arg0 ;
-(void)cancel;
-(void)handleAvailabilityChangeForResource:(id)arg0 url:(id)arg1 info:(id)arg2 error:(id)arg3 ;
-(void)startRequest;


@end


#endif