// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLRESOURCECHOOSER_H
#define PLRESOURCECHOOSER_H


#import <Foundation/Foundation.h>


@interface PLResourceChooser : NSObject



+(NSInteger)_fileResourceTypeForCloudResourceType:(NSUInteger)arg0 hasAdjustments:(BOOL)arg1 requiresUnadjustedVersion:(BOOL)arg2 ;
+(NSUInteger)cloudResourceTypeForAsset:(id)arg0 format:(id)arg1 filePath:(*id)arg2 imageType:(*NSInteger)arg3 ;
+(id)_chooseFileReservationForLargeDisplayableImageFileForAsset:(id)arg0 format:(id)arg1 forceLarge:(BOOL)arg2 allowMetadataSnapshot:(BOOL)arg3 outFilePath:(*id)arg4 outImageType:(*NSInteger)arg5 ;
+(id)_filteredArrayUsingPredicate:(id)arg0 originalItems:(id)arg1 nonMatchingItems:(*id)arg2 ;
+(id)_itemMatchingFormat:(id)arg0 allItems:(id)arg1 acceptableSortedAlternatives:(*id)arg2 ;
+(id)_originalItemFromAllItems:(id)arg0 ;
+(id)_penultimateItemFromAllItems:(id)arg0 ;
+(id)fileReservationForImageFileForAsset:(id)arg0 format:(id)arg1 outFilePath:(*id)arg2 outImageType:(*NSInteger)arg3 ;
+(id)fileReservationForLargeDisplayableImageFileForAsset:(id)arg0 format:(id)arg1 allowMetadataSnapshot:(BOOL)arg2 forceLarge:(BOOL)arg3 outFilePath:(*id)arg4 outImageType:(*NSInteger)arg5 ;
+(void)_chooseCloudResourceTypeForFormat:(id)arg0 asset:(id)arg1 optimalCPLResourceType:(*NSUInteger)arg2 localCPLResourceType:(*NSUInteger)arg3 localCPLResourceFilePath:(*id)arg4 fileReservation:(*id)arg5 ;
-(id)init;


@end


#endif