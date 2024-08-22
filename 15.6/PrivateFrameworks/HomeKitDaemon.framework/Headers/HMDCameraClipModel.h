// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERACLIPMODEL_H
#define HMDCAMERACLIPMODEL_H

@class HMBModel, NSNumber, NSData, NSDate, NSString, NSArray, HMBStreamingAsset;



@interface HMDCameraClipModel : HMBModel

@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSData *encryptionKey;
@property (retain, nonatomic) NSNumber *encryptionScheme;
@property NSUInteger feedbackStatus;
@property (retain, nonatomic) NSNumber *feedbackStatusField;
@property (retain, nonatomic) NSNumber *isComplete;
@property (retain, nonatomic) NSNumber *maximumClipDuration;
@property NSInteger quality;
@property (retain, nonatomic) NSNumber *qualityField;
@property (retain, nonatomic) NSNumber *recordedLocally;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSString *streamingAssetVersion;
@property (retain, nonatomic) NSNumber *targetFragmentDuration;
@property (retain, nonatomic) NSArray *videoMetadata;
@property (retain, nonatomic) NSArray *videoMetadataArray;
@property (retain, nonatomic) HMBStreamingAsset *videoStreamingAsset;


+(id)clipsBeforeDateQuery;
+(id)clipsWithNeedsUploadFeedbackStatusQuery;
+(id)clipsWithQualityBetweenDatesAscendingQuery;
+(id)clipsWithQualityBetweenDatesDescendingQuery;
+(id)countOfClipsWithQualityBetweenDatesQuery;
+(id)hmbExternalRecordType;
+(id)hmbProperties;
+(id)hmbQueries;
+(id)incompleteClipsQuery;
+(id)sentinelParentUUID;
-(id)createClipWithSignificantEvents:(id)arg0 ;


@end


#endif