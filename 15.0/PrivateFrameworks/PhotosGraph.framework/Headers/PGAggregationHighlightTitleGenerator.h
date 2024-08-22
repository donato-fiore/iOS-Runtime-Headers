// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGAGGREGATIONHIGHLIGHTTITLEGENERATOR_H
#define PGAGGREGATIONHIGHLIGHTTITLEGENERATOR_H

@protocol PGEventEnrichment;


#import "PGTitleGenerator.h"

@interface PGAggregationHighlightTitleGenerator : PGTitleGenerator

@property (readonly, nonatomic) NSObject<PGEventEnrichment> *collection; // ivar: _collection


-(BOOL)_useSplitTimeTitlesIfNeeded;
-(id)_locationTitleUsingKeyAssetAddressNode:(id)arg0 curationAddressNodes:(id)arg1 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif