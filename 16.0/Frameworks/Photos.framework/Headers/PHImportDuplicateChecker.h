// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHIMPORTDUPLICATECHECKER_H
#define PHIMPORTDUPLICATECHECKER_H

@class NSMutableDictionary, NSDate, NSMutableSet;

#import <Foundation/Foundation.h>

#import "PHPhotoLibrary.h"

@interface PHImportDuplicateChecker : NSObject {
    NSMutableDictionary *_avchdAssetIdentifierCache;
    NSMutableDictionary *_sizeNameCache;
    NSMutableDictionary *_assetIdentifierCache;
    NSDate *_lastChange;
    NSMutableSet *_updatedDupInfos;
}


@property (retain, nonatomic) PHPhotoLibrary *library; // ivar: _library


+(id)_dateWithDate:(id)arg0 ;
+(id)_fetchAssetInfoFromLibrary:(id)arg0 forFileSizes:(id)arg1 ;
+(id)duplicatesFromResults:(id)arg0 forLibrary:(id)arg1 ;
-(BOOL)_findFingerprint:(id)arg0 forItem:(id)arg1 inCache:(id)arg2 considerTrash:(BOOL)arg3 ;
-(NSUInteger)_populateCachesWithAssetsInfos:(id)arg0 ;
-(id)_checkForDuplicate:(id)arg0 considerItemsInTheTrash:(BOOL)arg1 ;
-(id)_filterDuplicatesForItem:(id)arg0 duplicateSet:(id)arg1 considerItemsInTrash:(BOOL)arg2 ;
-(id)_findMatchingAssetsForItem:(id)arg0 inSet:(id)arg1 matchingDate:(*id)arg2 confidence:(*unsigned char)arg3 ;
-(id)initWithLibrary:(id)arg0 ;
-(void)_populateCachesWithAssetInfo:(id)arg0 ;
-(void)_setDupInfo:(id)arg0 forFingerprint:(id)arg1 inCache:(id)arg2 ;
-(void)_updateAssetsFromDupInfos;
// -(void)findDuplicatesOfItems:(id)arg0 considerItemsInTrash:(BOOL)arg1 forEach:(id)arg2 atEnd:(unk)arg3  ;


@end


#endif