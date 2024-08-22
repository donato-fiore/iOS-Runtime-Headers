// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCASSETLOADPROPERTIESLOCALFILEEVALUATION_H
#define MPCASSETLOADPROPERTIESLOCALFILEEVALUATION_H

@class MPModelFileAsset, NSString;

#import <Foundation/Foundation.h>


@interface MPCAssetLoadPropertiesLocalFileEvaluation : NSObject

@property (nonatomic) NSInteger HLSContentPolicy; // ivar: _HLSContentPolicy
@property (nonatomic) NSInteger expectedAssetType; // ivar: _expectedAssetType
@property (nonatomic) NSInteger expectedQualityType; // ivar: _expectedQualityType
@property (readonly, copy, nonatomic) MPModelFileAsset *fileAsset; // ivar: _fileAsset
@property (nonatomic) NSInteger fileAssetType; // ivar: _fileAssetType
@property (nonatomic) BOOL fileIsCached; // ivar: _fileIsCached
@property (nonatomic) BOOL fileIsDownloaded; // ivar: _fileIsDownloaded
@property (nonatomic) BOOL fileIsHLS; // ivar: _fileIsHLS
@property (readonly, nonatomic) BOOL fileIsValid;
@property (nonatomic) BOOL fileMatchesRequiredFileFormat; // ivar: _fileMatchesRequiredFileFormat
@property (nonatomic) BOOL fileMatchesRequiredQuality; // ivar: _fileMatchesRequiredQuality
@property (copy, nonatomic) NSString *filePath; // ivar: _filePath
@property (nonatomic) NSInteger fileQualityType; // ivar: _fileQualityType
@property (readonly, nonatomic) BOOL fileShouldBeUpdated;
@property (nonatomic) NSInteger recommendation; // ivar: _recommendation
@property (nonatomic) NSInteger status; // ivar: _status


-(id)description;
-(id)humanDescription;
-(id)initWithFileAsset:(id)arg0 ;


@end


#endif