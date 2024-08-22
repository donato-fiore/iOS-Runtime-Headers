// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPPERSONBUILDER_H
#define VCPPERSONBUILDER_H

@class PHPhotoLibrary, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "VCPFaceClusterer.h"
#import "VCPPhotosFaceProcessingContext.h"
#import "VCPPhotosPersistenceDelegate.h"

@interface VCPPersonBuilder : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPFaceClusterer *_faceClusterer;
    VCPPhotosFaceProcessingContext *_context;
    VCPPhotosPersistenceDelegate *_persistenceDelegate;
    NSMutableDictionary *_state;
    NSUInteger _lastMinimumFaceGroupSizeForCreatingMergeCandidates;
    BOOL _personBuilderMergeCandidatesEnabled;
}




-(BOOL)_setAllFaceGroupsNeedPersonBuilding;
// -(BOOL)performPersonBuildingWithCancelOrExtendTimeoutBlock:(id)arg0 error:(unk)arg1  ;
-(id)initWithPhotoLibrary:(id)arg0 andFaceClusterer:(id)arg1 andContext:(id)arg2 ;
-(void)_readFaceAnalysisState;
-(void)_setFaceAnalysisStateValue:(id)arg0 forKey:(id)arg1 ;
-(void)setLastMinimumFaceGroupSizeForCreatingMergeCandidate:(NSUInteger)arg0 ;
-(void)setPersonBuilderMergeCandidatesEnabled:(BOOL)arg0 ;


@end


#endif