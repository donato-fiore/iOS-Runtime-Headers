// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPMADSERVICEIMAGEPROCESSINGTASKBATCH_H
#define VCPMADSERVICEIMAGEPROCESSINGTASKBATCH_H

@class NSDictionary, PHPhotoLibrary, NSString;


#import "VCPMABaseTask.h"

@interface VCPMADServiceImageProcessingTaskBatch : VCPMABaseTask {
    NSDictionary *_requests;
    PHPhotoLibrary *_photolibrary;
    NSString *_clientBundleID;
    NSString *_clientTeamID;
}


@property (retain, nonatomic) NSString *signpostPayload; // ivar: _signpostPayload


// +(id)taskWithCloudIdentifierRequests:(id)arg0 photoLibrary:(id)arg1 clientBundleID:(id)arg2 clientTeamID:(id)arg3 cancelBlock:(id)arg4 andCompletionHandler:(unk)arg5  ;
-(BOOL)cachesResources;
-(BOOL)run:(*id)arg0 ;
-(id)assetWithIdentifier:(id)arg0 isCloudIdentifier:(BOOL)arg1 error:(*id)arg2 ;
// -(id)initWithCloudIdentifierRequests:(id)arg0 photoLibrary:(id)arg1 clientBundleID:(id)arg2 clientTeamID:(id)arg3 cancelBlock:(id)arg4 andCompletionHandler:(unk)arg5  ;


@end


#endif