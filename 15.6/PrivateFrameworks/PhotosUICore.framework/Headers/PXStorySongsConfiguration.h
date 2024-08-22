// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYSONGSCONFIGURATION_H
#define PXSTORYSONGSCONFIGURATION_H

@protocol PXAudioAssetFetchResult, PXAudioAsset;

#import <Foundation/Foundation.h>


@interface PXStorySongsConfiguration : NSObject

@property (readonly, nonatomic) NSObject<PXAudioAssetFetchResult> *curatedAudioAssets; // ivar: _curatedAudioAssets
@property (readonly, nonatomic) NSObject<PXAudioAsset> *currentAsset; // ivar: _currentAsset


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCuratedAudioAssets:(id)arg0 ;
-(id)initWithCuratedAudioAssets:(id)arg0 currentAsset:(id)arg1 ;
-(id)previewConfiguration;


@end


#endif