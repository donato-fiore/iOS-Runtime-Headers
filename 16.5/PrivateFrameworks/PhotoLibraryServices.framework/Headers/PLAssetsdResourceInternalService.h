// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLASSETSDRESOURCEINTERNALSERVICE_H
#define PLASSETSDRESOURCEINTERNALSERVICE_H

@class NSString;
@protocol PLAssetsdResourceInternalServiceProtocol;


#import "PLAbstractLibraryServicesManagerService.h"

@interface PLAssetsdResourceInternalService : PLAbstractLibraryServicesManagerService <PLAssetsdResourceInternalServiceProtocol>

 {
    NSString *_trustedCallerBundleID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithLibraryServicesManager:(id)arg0 trustedCallerBundleID:(id)arg1 ;
-(void)asynchronousMasterThumbnailForAssetUUID:(id)arg0 reply:(id)arg1 ;
-(void)batchSaveAssetJobs:(id)arg0 reply:(id)arg1 ;


@end


#endif