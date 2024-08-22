// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETCOLLECTIONGENERATOR_H
#define PLASSETCOLLECTIONGENERATOR_H

@class NSDateFormatter, NSString, NSMutableSet, NSMutableArray;
@protocol PLLibraryClustererDelegate, PLMomentGenerationDataManagement;

#import <Foundation/Foundation.h>

#import "PLFrequentLocationManager.h"
#import "PLLocalCreationDateCreator.h"

@interface PLAssetCollectionGenerator : NSObject <PLLibraryClustererDelegate>



@property (retain, nonatomic) NSDateFormatter *debugDateFormatter; // ivar: _debugDateFormatter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PLFrequentLocationManager *frequentLocationManager; // ivar: _frequentLocationManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *insertedOrUpdatedMoments; // ivar: _insertedOrUpdatedMoments
@property (retain, nonatomic) PLLocalCreationDateCreator *localCreationDateCreator; // ivar: _localCreationDateCreator
@property (weak, nonatomic) NSObject<PLMomentGenerationDataManagement> *manager; // ivar: _manager
@property (retain, nonatomic) NSMutableArray *momentsFromAssetClusters; // ivar: _momentsFromAssetClusters
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableSet *usedMomentObjectIDs; // ivar: _usedMomentObjectIDs


+(id)_createMomentOrUpdateForAssetCluster:(id)arg0 existingMomentDataForAssets:(id)arg1 dataManager:(id)arg2 usedMomentObjectIDs:(id)arg3 debugDateFormatter:(id)arg4 ;
+(id)createMomentOrUpdateForAssetCluster:(id)arg0 affectedMoment:(id)arg1 dataManager:(id)arg2 ;
-(id)_createMomentOrUpdateForAssetCluster:(id)arg0 existingMomentDataForAssets:(id)arg1 ;
-(id)_processMomentsCollectionsYearsWithAssets:(id)arg0 affectedMoments:(id)arg1 ;
-(id)dataManager;
-(id)initWithDataManager:(id)arg0 frequentLocationManager:(id)arg1 localCreationDateCreator:(id)arg2 ;
-(id)libraryClusterer:(id)arg0 createMomentClustersForAssetClusters:(id)arg1 existingMomentDataForAssets:(id)arg2 ;
-(id)processMomentsWithAssets:(id)arg0 affectedMoments:(id)arg1 ;
-(void)_cleanUpMoment:(id)arg0 ;
-(void)logRoutineInformation;


@end


#endif