// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFEEDTESTASSETSSECTIONINFO_H
#define PXFEEDTESTASSETSSECTIONINFO_H

@class NSArray;


#import "PXFeedTestSectionInfo.h"

@interface PXFeedTestAssetsSectionInfo : PXFeedTestSectionInfo

@property (readonly, nonatomic) NSArray *plAssets; // ivar: _plAssets


-(NSInteger)sectionType;
-(NSInteger)typeForItemAtIndex:(NSInteger)arg0 ;
-(id)_fetchPhotoAssets:(NSInteger)arg0 ;
-(id)assetForItemAtIndex:(NSInteger)arg0 ;
-(id)countsByAssetDisplayType;
-(id)initWithPhotoLibrary:(id)arg0 ;


@end


#endif