// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSSTHEMEASSETMAPPER_H
#define TSSTHEMEASSETMAPPER_H

@class TSUCustomCallBackDictionary;

#import <Foundation/Foundation.h>

#import "TSSTheme.h"

@interface TSSThemeAssetMapper : NSObject {
    TSUCustomCallBackDictionary *mAssetMap;
}


@property (readonly, nonatomic) TSSTheme *fromTheme; // ivar: mFromTheme
@property (readonly, nonatomic) TSSTheme *toTheme; // ivar: mToTheme


-(BOOL)p_hasCachedMappingsForPresetsOfKind:(id)arg0 ;
-(id)init;
-(id)initWithFromTheme:(id)arg0 toTheme:(id)arg1 ;
-(id)mapPresetsWithKindFromPreset:(id)arg0 ;
-(id)mapStyle:(id)arg0 ;
-(id)mappedAssetForAsset:(id)arg0 ;
-(void)cacheAssetMappings:(id)arg0 ;
-(void)cacheMappingFromAsset:(id)arg0 toAsset:(id)arg1 ;
-(void)clearMappingCache;
-(void)dealloc;


@end


#endif