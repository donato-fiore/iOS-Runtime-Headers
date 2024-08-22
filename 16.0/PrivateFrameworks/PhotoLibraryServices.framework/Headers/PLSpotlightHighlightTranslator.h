// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSPOTLIGHTHIGHLIGHTTRANSLATOR_H
#define PLSPOTLIGHTHIGHLIGHTTRANSLATOR_H


#import <Foundation/Foundation.h>


@interface PLSpotlightHighlightTranslator : NSObject



+(id)_personsFromGraphData:(id)arg0 photoLibrary:(id)arg1 ;
+(id)_scenesFromGraphData:(id)arg0 sceneTaxonomyProvider:(id)arg1 ;
+(id)_seasonsForHighlight:(id)arg0 graphData:(id)arg1 searchConfiguration:(id)arg2 ;
+(id)spotlightSearchableItemFromHighlight:(id)arg0 graphData:(id)arg1 searchConfiguration:(id)arg2 ;


@end


#endif