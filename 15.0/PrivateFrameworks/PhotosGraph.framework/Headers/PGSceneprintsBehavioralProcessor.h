// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGSCENEPRINTSBEHAVIORALPROCESSOR_H
#define PGSCENEPRINTSBEHAVIORALPROCESSOR_H

@class NSMapTable, NSSet;
@protocol PGBehavioralAlgorithm;

#import <Foundation/Foundation.h>


@interface PGSceneprintsBehavioralProcessor : NSObject <PGBehavioralAlgorithm>



@property (readonly, nonatomic) NSMapTable *goldAssetSceneprintsAndDates; // ivar: _goldAssetSceneprintsAndDates
@property (readonly, nonatomic) NSSet *goldAssetUUIDs; // ivar: _goldAssetUUIDs
@property (readonly, nonatomic) NSSet *goldAssets; // ivar: _goldAssets
@property (nonatomic) CGFloat similarityThreshold; // ivar: _similarityThreshold


-(float)semanticScoreForAsset:(id)arg0 ;
-(id)dataToPersist;
-(id)initWithGoldAssets:(id)arg0 ;
-(id)initWithGoldAssets:(id)arg0 persistedData:(id)arg1 ;
-(id)semanticScoreByAssetUUIDForAssets:(id)arg0 ;
-(void)preprocessWithProgressBlock:(id)arg0 ;


@end


#endif