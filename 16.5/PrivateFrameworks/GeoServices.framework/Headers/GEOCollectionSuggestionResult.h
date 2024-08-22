// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCOLLECTIONSUGGESTIONRESULT_H
#define GEOCOLLECTIONSUGGESTIONRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOPDCollectionSuggestionResult.h"
#import "GEOExploreGuides.h"

@interface GEOCollectionSuggestionResult : NSObject {
    GEOPDCollectionSuggestionResult *_collectionSuggestionResult;
}


@property (readonly, nonatomic) NSArray *collections; // ivar: _collections
@property (readonly, nonatomic) GEOExploreGuides *exploreGuides;


-(id)initWithCollectionSuggestionResult:(id)arg0 mapsResults:(id)arg1 ;


@end


#endif