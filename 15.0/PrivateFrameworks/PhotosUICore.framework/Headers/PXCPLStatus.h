// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCPLSTATUS_H
#define PXCPLSTATUS_H

@class NSDate, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXCPLStatus : NSObject <NSCopying>



@property (nonatomic) BOOL cloudQuotaOfferHasAssetCounts; // ivar: _cloudQuotaOfferHasAssetCounts
@property (copy, nonatomic) NSDate *exitDate; // ivar: _exitDate
@property (nonatomic) BOOL hasCloudQuotaOffer; // ivar: _hasCloudQuotaOffer
@property (nonatomic) BOOL isCellularDataDisabled; // ivar: _isCellularDataDisabled
@property (nonatomic) BOOL isClientVersionTooOld; // ivar: _isClientVersionTooOld
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) BOOL isExceedingBatteryQuota; // ivar: _isExceedingBatteryQuota
@property (nonatomic) BOOL isExceedingCellularQuota; // ivar: _isExceedingCellularQuota
@property (nonatomic) BOOL isExceedingQuota; // ivar: _isExceedingQuota
@property (nonatomic) BOOL isInAirplaneMode; // ivar: _isInAirplaneMode
@property (nonatomic) BOOL isInHardResetSync; // ivar: _isInHardResetSync
@property (nonatomic) BOOL isInLowDataMode; // ivar: _isInLowDataMode
@property (nonatomic) BOOL isInLowPowerMode; // ivar: _isInLowPowerMode
@property (nonatomic) BOOL isInSoftResetSync; // ivar: _isInSoftResetSync
@property (nonatomic) BOOL isOffline; // ivar: _isOffline
@property (nonatomic) BOOL isSyncing; // ivar: _isSyncing
@property (nonatomic) BOOL isUserPaused; // ivar: _isUserPaused
@property (nonatomic) float itemsToUploadProgress;
@property (nonatomic) NSInteger itemsToUploadProgressPercentage; // ivar: _itemsToUploadProgressPercentage
@property (nonatomic) NSUInteger numberOfItemsFailingToUpload; // ivar: _numberOfItemsFailingToUpload
@property (nonatomic) NSUInteger numberOfItemsToAdd; // ivar: _numberOfItemsToAdd
@property (nonatomic) NSUInteger numberOfItemsToUpload; // ivar: _numberOfItemsToUpload
@property (nonatomic) NSUInteger numberOfOriginalsToDownload; // ivar: _numberOfOriginalsToDownload
@property (nonatomic) NSUInteger numberOfOtherAssets; // ivar: _numberOfOtherAssets
@property (nonatomic) NSUInteger numberOfPhotoAssets; // ivar: _numberOfPhotoAssets
@property (nonatomic) NSUInteger numberOfReferencedItems; // ivar: _numberOfReferencedItems
@property (nonatomic) NSUInteger numberOfVideoAssets; // ivar: _numberOfVideoAssets
@property (readonly, copy, nonatomic) NSString *stringRepresentation;
@property (copy, nonatomic) NSDate *syncDate; // ivar: _syncDate


+(id)statusWithStringRepresentation:(id)arg0 ;
+(id)statusWithStringRepresentation:(id)arg0 currentDate:(id)arg1 ;
-(BOOL)_isEqualToCPLStatus:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_initWithDictionaryRepresentation:(id)arg0 currentDate:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif