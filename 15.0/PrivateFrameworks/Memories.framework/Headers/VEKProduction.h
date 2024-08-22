// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VEKPRODUCTION_H
#define VEKPRODUCTION_H

@class PHAssetCollection, NSString, NSDictionary, NSArray, PHAsset, NSDate, NSSet;
@protocol PosterDataProtocol, NSSecureCoding, NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VEKBlueprint.h"
#import "MiroPickList.h"
#import "_TtC11MVKPipeline15PicklistService.h"
#import "VEKResult.h"
#import "_TtC11MVKPipeline11MoodService.h"
#import "_TtC11MVKPipeline18PipelineController.h"
#import "_TtC11MVKPipeline24PipelineExportController.h"
#import "VEKProductionExport.h"

@interface VEKProduction : NSObject <PosterDataProtocol, NSSecureCoding, NSCopying>



@property (retain, nonatomic) VEKBlueprint *blueprint; // ivar: _blueprint
@property (readonly, nonatomic) PHAssetCollection *collection; // ivar: _collection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *featuredPersonsInMemoryAsFaceRanges; // ivar: _featuredPersonsInMemoryAsFaceRanges
@property (retain, nonatomic) NSArray *fetchedAssets; // ivar: _fetchedAssets
@property (readonly, nonatomic) NSString *fontName;
@property (retain, nonatomic) MiroPickList *fullPicklist; // ivar: _fullPicklist
@property (retain, nonatomic) _TtC11MVKPipeline15PicklistService *fullPicklistService; // ivar: _fullPicklistService
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) PHAsset *keyAsset; // ivar: _keyAsset
@property (retain, nonatomic) VEKResult *lastResult; // ivar: _lastResult
@property (nonatomic) CGFloat maxDuration; // ivar: _maxDuration
@property (nonatomic) NSUInteger memoryCategory; // ivar: _memoryCategory
@property (retain, nonatomic) NSDictionary *memoryFeaturesPersonInAsset; // ivar: _memoryFeaturesPersonInAsset
@property (nonatomic) NSUInteger memorySubcategory; // ivar: _memorySubcategory
@property (nonatomic) BOOL memoryTypeDisablesCropping; // ivar: _memoryTypeDisablesCropping
@property (retain, nonatomic) NSDate *memoryViewedDate; // ivar: _memoryViewedDate
@property (retain, nonatomic) _TtC11MVKPipeline11MoodService *moodService; // ivar: _moodService
@property (nonatomic) BOOL persistedAtLeastOnce; // ivar: _persistedAtLeastOnce
@property (retain, nonatomic) _TtC11MVKPipeline18PipelineController *pipelineController; // ivar: _pipelineController
@property (retain, nonatomic) _TtC11MVKPipeline24PipelineExportController *pipelineExportController; // ivar: _pipelineExportController
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pipelineQueue; // ivar: _pipelineQueue
@property (retain, nonatomic) VEKProductionExport *productionExport; // ivar: _productionExport
@property (nonatomic) CGFloat requestedDuration; // ivar: _requestedDuration
@property (retain, nonatomic) NSString *requestedMood; // ivar: _requestedMood
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSSet *suggestions; // ivar: _suggestions
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)savedMetadataForMemory:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)persisted;
-(NSInteger)pickedItemCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
// -(void)exportWithPresets:(id)arg0 naturalSize:(struct CGSize )arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)logAssetTypesForCollection:(id)arg0 description:(id)arg1 ;
-(void)logCloudToLocalIdentifiersForCollection:(id)arg0 ;
// -(void)makePlayerItemWithNaturalSize:(struct CGSize )arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
// -(void)makeProjectWithNaturalSize:(struct CGSize )arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)persistMemory;


@end


#endif