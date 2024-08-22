// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCPLFACEPUSHSUPPORT_H
#define PLCPLFACEPUSHSUPPORT_H

@protocol PLSyncContext;

#import <Foundation/Foundation.h>


@interface PLCPLFacePushSupport : NSObject {
    id<PLSyncContext> *_syncContext;
}




+(BOOL)_shouldPushBeingKeyFace:(id)arg0 ;
+(BOOL)isFaceSyncable:(id)arg0 ;
+(void)applyFaceChangesFromAsset:(id)arg0 toAssetChange:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(void)markSyncableFacesAsPushedInAsset:(id)arg0 ;
-(BOOL)_faceAnalysisWasPerformedOnLatestAdjustmentOfAsset:(id)arg0 ;
-(id)_facesAdjustmentsFingerprintFromAsset:(id)arg0 assetChange:(id)arg1 ;
-(id)cplFaceAnalysisRefFromAsset:(id)arg0 algorithmVersion:(*NSInteger)arg1 ;
-(id)cplFaceRefFromFace:(id)arg0 ;
-(id)cplFaceRefsFromFaces:(id)arg0 algorithmVersion:(*NSInteger)arg1 ;
-(id)initWithSyncContext:(id)arg0 ;
-(id)rejectedPersonIdentifiersForFace:(id)arg0 ;
-(void)applyFaceChangesFromAsset:(id)arg0 toAssetChange:(id)arg1 ;


@end


#endif