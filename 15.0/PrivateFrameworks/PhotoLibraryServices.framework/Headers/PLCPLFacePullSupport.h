// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCPLFACEPULLSUPPORT_H
#define PLCPLFACEPULLSUPPORT_H

@protocol PLSyncContext, PLSyncableAsset;

#import <Foundation/Foundation.h>


@interface PLCPLFacePullSupport : NSObject {
    id<PLSyncContext> *_syncContext;
    id<PLSyncableAsset> *_currentAsset;
}




+(id)_disjointSetsByAddingSet:(id)arg0 toSets:(id)arg1 ;
+(void)applyFacesChangesFromAssetChange:(id)arg0 toAsset:(id)arg1 inSyncContext:(id)arg2 ;
-(BOOL)_canReassignFaceFromPerson:(id)arg0 toPerson:(id)arg1 shouldDedupePersons:(*BOOL)arg2 ;
-(NSInteger)_policyForApplyingFaceChangesFromAssetChange:(id)arg0 ;
-(id)_applyAssetChange:(id)arg0 toExistingFaces:(id)arg1 withPolicy:(NSInteger)arg2 ;
-(id)_createFaceFromFaceRef:(id)arg0 algorithmVersion:(int)arg1 ;
-(id)initWithSyncContext:(id)arg0 asset:(id)arg1 ;
-(void)_applyDimensionAndStateFromFaceReference:(id)arg0 toDetectedFace:(id)arg1 ;
-(void)_applyPersonFromFaceReference:(id)arg0 toDetectedFace:(id)arg1 ;
-(void)_finalizeFace:(id)arg0 withFaceRef:(id)arg1 applyDimensionAndState:(BOOL)arg2 ;
-(void)_unlinkPersonIfVerifiedFromFace:(id)arg0 ;
-(void)applyFacesChangesFromAssetChange:(id)arg0 ;
-(void)dealloc;


@end


#endif