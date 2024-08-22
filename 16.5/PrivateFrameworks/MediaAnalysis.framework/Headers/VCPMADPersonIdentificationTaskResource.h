// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPMADPERSONIDENTIFICATIONTASKRESOURCE_H
#define VCPMADPERSONIDENTIFICATIONTASKRESOURCE_H

@class VNPersonsModel, PHPhotoLibrary;
@protocol OS_dispatch_queue;


#import "VCPMADResource.h"
#import "VCPObjectPool.h"
#import "VCPPhotosFaceProcessingContext.h"

@interface VCPMADPersonIdentificationTaskResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    VCPObjectPool *_sessionPool;
    VCPPhotosFaceProcessingContext *_faceProcessingContext;
    VNPersonsModel *_personIdentityModel;
    PHPhotoLibrary *_photoLibrary;
}




+(id)sharedResource;
-(id)faceProcessingContext;
-(id)init;
-(id)personIdentityModel;
-(id)photoLibrary;
-(id)visionSession;
-(void)_loadResources;
-(void)purge;


@end


#endif