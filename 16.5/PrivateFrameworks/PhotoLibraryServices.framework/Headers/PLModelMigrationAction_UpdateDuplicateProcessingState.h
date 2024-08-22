// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLMODELMIGRATIONACTION_UPDATEDUPLICATEPROCESSINGSTATE_H
#define PLMODELMIGRATIONACTION_UPDATEDUPLICATEPROCESSINGSTATE_H

@class NSString, NSProgress;
@protocol PLModelMigrationAction;


#import "PLModelMigrationAction.h"

@interface PLModelMigrationAction_UpdateDuplicateProcessingState : PLModelMigrationAction <PLModelMigrationAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;


+(NSInteger)actionProgressWeight;
-(NSInteger)performActionWithManagedObjectContext:(id)arg0 error:(*id)arg1 ;
-(NSInteger)processAssetStateMap:(id)arg0 pendingParentUnitCount:(NSInteger)arg1 context:(id)arg2 error:(*id)arg3 ;
-(NSInteger)updateDuplicateProcessingStateWithProcessingState:(unsigned short)arg0 pendingParentUnitCount:(NSInteger)arg1 assetProcessingStateMap:(id)arg2 context:(id)arg3 request:(id)arg4 error:(*id)arg5 ;
-(NSInteger)updateSceneClassificationDuplicateProcessingStateWithProcessingState:(unsigned short)arg0 pendingParentUnitCount:(NSInteger)arg1 assetProcessingStateMap:(id)arg2 context:(id)arg3 request:(id)arg4 error:(*id)arg5 ;
-(id)fetchRequestForAnimated;
-(id)fetchRequestForAudioVideo;
-(id)fetchRequestForDocument;
-(id)fetchRequestForExposureScore;
-(id)fetchRequestForScreenshot;


@end


#endif