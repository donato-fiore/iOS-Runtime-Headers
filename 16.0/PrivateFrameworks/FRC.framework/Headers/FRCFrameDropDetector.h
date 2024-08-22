// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FRCFRAMEDROPDETECTOR_H
#define FRCFRAMEDROPDETECTOR_H

@class NSArray, NSMutableArray;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface FRCFrameDropDetector : NSObject {
    ? minDuration;
    NSArray *sortedTimingList;
    NSArray *sortedMetadataList;
    NSMutableArray *frameInternalPTSList;
    NSMutableArray *frameBurstyDropInfoList;
    NSMutableArray *insertionPointList;
    NSObject<OS_os_log> *_logger;
}


@property (nonatomic) BOOL debugPrint; // ivar: _debugPrint
@property (readonly, nonatomic) NSUInteger gatingCause; // ivar: _gatingCause
@property (nonatomic) BOOL gatingEnabled; // ivar: _gatingEnabled
@property (readonly, nonatomic) ? maximumDuration; // ivar: _maximumDuration
@property (readonly, nonatomic) NSUInteger numberOfInsertionPoints; // ivar: _numberOfInsertionPoints
@property (readonly, nonatomic) NSInteger retimingRecipe; // ivar: _retimingRecipe
@property (nonatomic) BOOL singleDropRecoveryEnabled; // ivar: _singleDropRecoveryEnabled


-(NSUInteger)countNumberOfFramesWithRecipeInMetadataList:(id)arg0 ;
-(id)buildInsertionPointListFromInternalTimingList:(id)arg0 bailOutCode:(*NSInteger)arg1 ;
-(id)calculateFrameDropInfoFromSortedMetadataList:(id)arg0 sortedTimingList:(id)arg1 ;
-(id)calculateFrameDurationFromSortedTimingList:(id)arg0 ;
-(id)detectFrameDropsFromFrameMetadataList:(id)arg0 frameTimingList:(id)arg1 ;
-(id)detectFrameDropsFromFrameTimingList:(id)arg0 ;
-(id)detectFrameDropsFromInternalTimingList:(id)arg0 ;
-(id)detectSingleFrameDropsFromFrameTimingList:(id)arg0 ;
-(id)errorWithDescription:(id)arg0 ;
-(id)init;
-(id)selectFrameInsertionPointsFromTimingList:(id)arg0 metadataList:(id)arg1 sloMo:(BOOL)arg2 withError:(*id)arg3 ;
-(id)sortFrameMetadataListInDisplayOrderFromMetadataList:(id)arg0 ;
-(id)sortFrameTimingListInDisplayOrderFromTimingList:(id)arg0 ;
-(struct ? )droppingThreshold;
-(void)dealloc;
-(void)debugPrintFRCFRCFrameBurstyDropInfo:(id)arg0 ;
-(void)debugPrintFRCFrameInternalTimingInfo:(id)arg0 ;
-(void)debugPrintFRCFrameMetadataInfo:(id)arg0 ;
-(void)debugPrintFRCFrameTimingInfo:(id)arg0 ;
-(void)detectLocationOfBurstyGapsFromBurstyDropList:(id)arg0 frameInternalTimingList:(id)arg1 ;
-(void)detectSingleFrameDropsFromInternalTimingList:(id)arg0 ;
-(void)scaleNumberOfFramesToInsertFor2xSloMo:(id)arg0 ;
-(void)setPropertiesFromDefaults;


@end


#endif