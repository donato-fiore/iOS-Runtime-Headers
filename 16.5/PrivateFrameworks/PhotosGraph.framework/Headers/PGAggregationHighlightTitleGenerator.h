// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGAGGREGATIONHIGHLIGHTTITLEGENERATOR_H
#define PGAGGREGATIONHIGHLIGHTTITLEGENERATOR_H



#import "PGTitleGenerator.h"

@interface PGAggregationHighlightTitleGenerator : PGTitleGenerator



-(BOOL)_useSplitTimeTitlesIfNeeded;
-(id)_locationTitleUsingKeyAssetAddressNode:(id)arg0 curationAddressNodes:(id)arg1 ;
-(id)initWithCollection:(id)arg0 keyAsset:(id)arg1 curatedAssetCollection:(id)arg2 titleGenerationContext:(id)arg3 ;
-(id)initWithMomentNodes:(id)arg0 keyAsset:(id)arg1 curatedAssetCollection:(id)arg2 titleGenerationContext:(id)arg3 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif