// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLMUTABLEPTPASSET_H
#define PLMUTABLEPTPASSET_H

@class NSString, NSData, NSNumber;


#import "PLPTPAsset.h"
#import "PLPTPAssetHandle.h"

@interface PLMutablePTPAsset : PLPTPAsset

@property (copy, nonatomic) PLPTPAssetHandle *assetHandle;
@property (nonatomic, getter=isBurstFavorite) BOOL burstFavorite;
@property (nonatomic, getter=isBurstFirstPicked) BOOL burstFirstPicked;
@property (nonatomic, getter=isBurstPicked) BOOL burstPicked;
@property (copy, nonatomic) NSString *burstUUID;
@property (copy, nonatomic) NSString *captureDateString;
@property (nonatomic) NSInteger conversionGroup;
@property (copy, nonatomic) NSString *createdFilename;
@property (nonatomic, getter=isDeleted) BOOL deleted;
@property (nonatomic) NSInteger desiredOrientation;
@property (copy, nonatomic) NSString *durationString;
@property (copy, nonatomic) NSData *event;
@property (nonatomic, getter=isExifAvailable) BOOL exifAvailable;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *fullDirectoryPath;
@property (copy, nonatomic) NSString *groupUUID;
@property (nonatomic, getter=isHighFrameRateVideo) BOOL highFrameRateVideo;
@property (nonatomic) CGSize imagePixSize;
@property (copy, nonatomic) NSString *locationString;
@property (copy, nonatomic) NSString *modificationDateString;
@property (copy, nonatomic) NSNumber *objectCompressedSize;
@property (copy, nonatomic) NSString *originalFilename;
@property (copy, nonatomic) NSString *originatingAssetID;
@property (copy, nonatomic) NSString *relatedUUID;
@property (copy, nonatomic) NSString *spatialOverCaptureGroupIdentifier;
@property (copy, nonatomic) NSNumber *thumbCompressedSize;
@property (copy, nonatomic) NSNumber *thumbOffset;
@property (nonatomic) CGSize thumbPixSize;
@property (nonatomic, getter=isTimeLapseVideo) BOOL timeLapseVideo;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif