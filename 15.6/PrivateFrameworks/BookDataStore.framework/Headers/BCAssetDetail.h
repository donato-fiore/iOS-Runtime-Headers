// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCASSETDETAIL_H
#define BCASSETDETAIL_H

@class NSString, NSData, NSDate, CKRecord;
@protocol BCAssetDetail, BCCloudDataPrivacyDelegate;


#import "BCCloudData.h"

@interface BCAssetDetail : BCCloudData <BCAssetDetail>



@property (copy, nonatomic) NSString *assetID;
@property (nonatomic) CGFloat bookmarkTime;
@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (copy, nonatomic) NSDate *dateFinished;
@property (copy, nonatomic) NSDate *datePlaybackTimeUpdated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger editGeneration;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAudiobook;
@property (nonatomic) BOOL isFinished;
@property (copy, nonatomic) NSDate *lastOpenDate;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (nonatomic) BOOL notFinished;
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (nonatomic) int readingPositionAbsolutePhysicalLocation;
@property (copy, nonatomic) NSString *readingPositionAnnotationVersion;
@property (copy, nonatomic) NSString *readingPositionAssetVersion;
@property (copy, nonatomic) NSString *readingPositionCFIString;
@property (nonatomic) int readingPositionLocationRangeEnd;
@property (nonatomic) int readingPositionLocationRangeStart;
@property (copy, nonatomic) NSDate *readingPositionLocationUpdateDate;
@property (copy, nonatomic) NSString *readingPositionStorageUUID;
@property (copy, nonatomic) NSData *readingPositionUserData;
@property (nonatomic) float readingProgress;
@property (nonatomic) float readingProgressHighWaterMark;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;
@property (nonatomic) short taste;
@property (nonatomic) short tasteSyncedToStore;


+(id)propertyIDKey;
-(BOOL)isEqualExceptForDate:(id)arg0 ;
-(BOOL)setDifferentBookmarkTime:(CGFloat)arg0 ;
-(id)identifier;
-(id)mutableCopy;
-(id)recordType;
-(id)zoneName;
-(void)_configureFromAssetDetail:(id)arg0 withMergers:(id)arg1 ;
-(void)configureFromCloudData:(id)arg0 withMergers:(id)arg1 ;
-(void)resolveConflictsFromRecord:(id)arg0 withResolvers:(id)arg1 ;


@end


#endif