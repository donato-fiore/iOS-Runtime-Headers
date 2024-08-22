// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCMUTABLEASSETDETAIL_H
#define BCMUTABLEASSETDETAIL_H

@class NSString, NSData, NSDate, CKRecord;
@protocol BCAssetDetail, NSSecureCoding, BCCloudDataPrivacyDelegate;


#import "BCMutableCloudData.h"

@interface BCMutableAssetDetail : BCMutableCloudData <BCAssetDetail, NSSecureCoding>



@property (copy, nonatomic) NSString *assetID; // ivar: _assetID
@property (nonatomic) CGFloat bookmarkTime; // ivar: _bookmarkTime
@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (copy, nonatomic) NSDate *dateFinished; // ivar: _dateFinished
@property (copy, nonatomic) NSDate *datePlaybackTimeUpdated; // ivar: _datePlaybackTimeUpdated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger editGeneration;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAudiobook;
@property (nonatomic) BOOL isFinished; // ivar: _isFinished
@property (copy, nonatomic) NSDate *lastOpenDate; // ivar: _lastOpenDate
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (nonatomic) BOOL notFinished; // ivar: _notFinished
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (nonatomic) int readingPositionAbsolutePhysicalLocation; // ivar: _readingPositionAbsolutePhysicalLocation
@property (copy, nonatomic) NSString *readingPositionAnnotationVersion; // ivar: _readingPositionAnnotationVersion
@property (copy, nonatomic) NSString *readingPositionAssetVersion; // ivar: _readingPositionAssetVersion
@property (copy, nonatomic) NSString *readingPositionCFIString; // ivar: _readingPositionCFIString
@property (nonatomic) int readingPositionLocationRangeEnd; // ivar: _readingPositionLocationRangeEnd
@property (nonatomic) int readingPositionLocationRangeStart; // ivar: _readingPositionLocationRangeStart
@property (copy, nonatomic) NSDate *readingPositionLocationUpdateDate; // ivar: _readingPositionLocationUpdateDate
@property (copy, nonatomic) NSString *readingPositionStorageUUID; // ivar: _readingPositionStorageUUID
@property (copy, nonatomic) NSData *readingPositionUserData; // ivar: _readingPositionUserData
@property (nonatomic) float readingProgress; // ivar: _readingProgress
@property (nonatomic) float readingProgressHighWaterMark; // ivar: _readingProgressHighWaterMark
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;
@property (nonatomic) short taste; // ivar: _taste
@property (nonatomic) short tasteSyncedToStore; // ivar: _tasteSyncedToStore


+(BOOL)supportsSecureCoding;
-(id)configuredRecordFromAttributes;
-(id)identifier;
-(id)initWithAssetID:(id)arg0 ;
-(id)initWithCloudData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(id)recordType;
-(id)zoneName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif