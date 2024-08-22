// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPHOTOANALYSISASSETATTRIBUTES_H
#define PLPHOTOANALYSISASSETATTRIBUTES_H

@class NSData, NSDate;


#import "PLManagedObject.h"
#import "PLManagedAsset.h"

@interface PLPhotoAnalysisAssetAttributes : PLManagedObject

@property (retain, nonatomic) PLManagedAsset *asset;
@property (retain, nonatomic) NSData *wallpaperPropertiesData;
@property (retain, nonatomic) NSDate *wallpaperPropertiesTimestamp;
@property (nonatomic) NSUInteger wallpaperPropertiesVersion;


+(id)entityName;
+(id)fetchRequest;


@end


#endif