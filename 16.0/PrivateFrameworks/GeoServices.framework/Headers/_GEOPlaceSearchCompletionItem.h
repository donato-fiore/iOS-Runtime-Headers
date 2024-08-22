// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOPLACESEARCHCOMPLETIONITEM_H
#define _GEOPLACESEARCHCOMPLETIONITEM_H

@class NSArray, NSString, NSData;
@protocol GEOCompletionItemPrivate, GEOMapItem;

#import <Foundation/Foundation.h>

#import "GEOMapServiceTraits.h"
#import "GEOSearchCategory.h"
#import "GEOCollectionResult.h"
#import "GEOPublisherResult.h"
#import "GEOResolvedItem.h"
#import "GEODirectionIntent.h"
#import "GEOPDAutocompleteEntry.h"
#import "GEOStyleAttributes.h"
#import "GEOMapItemIdentifier.h"
#import "GEORetainedSearchMetadata.h"
#import "GEOServerResultScoreMetadata.h"

@interface _GEOPlaceSearchCompletionItem : NSObject <GEOCompletionItemPrivate>

 {
    GEOMapServiceTraits *_traits;
    int _entryListIndex;
    int _entryIndex;
    NSArray *_lineHighlights;
    id<GEOMapItem> *_mapItem;
    GEOSearchCategory *_category;
    GEOCollectionResult *_collectionResult;
    GEOPublisherResult *_publisherResult;
    NSArray *_resultRefinements;
}


@property (readonly, nonatomic) NSInteger autocompleteCellType;
@property (readonly, nonatomic) GEOResolvedItem *clientResolved;
@property (readonly, nonatomic) GEOCollectionResult *collectionResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEODirectionIntent *directionIntent;
@property (readonly, nonatomic) float disambiguationRadiusMeters;
@property (readonly, nonatomic) NSArray *displayLines; // ivar: _displayLines
@property (readonly, nonatomic) GEOPDAutocompleteEntry *entry; // ivar: _entry
@property (readonly, nonatomic) NSData *entryMetadata;
@property (readonly, nonatomic) NSInteger entryTapBehavior;
@property (readonly, nonatomic) NSObject<GEOMapItem> *geoMapItem;
@property (readonly, nonatomic) BOOL hasDisambiguationRadiusMeters;
@property (readonly, nonatomic) BOOL hasQueryAcceleratorAffordanceEnabled;
@property (readonly, nonatomic) BOOL hasSortPriority;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) GEOStyleAttributes *iconStyleAttributes;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) NSData *metadata;
@property (readonly, nonatomic, getter=_placeDataAutocompleteEntry) GEOPDAutocompleteEntry *placeDataAutocompleteEntry;
@property (readonly, nonatomic) int placeType;
@property (readonly, nonatomic) GEOPublisherResult *publisherResult;
@property (readonly, nonatomic) NSString *queryAcceleratorCompletionString;
@property (readonly, nonatomic) NSArray *resultRefinements;
@property (readonly, nonatomic) GEORetainedSearchMetadata *retainedSearchMetadata;
@property (readonly, nonatomic) GEOSearchCategory *searchCategory;
@property (readonly, nonatomic) GEOServerResultScoreMetadata *serverResultScoreMetadata;
@property (readonly, nonatomic) NSInteger sortPriority;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


-(BOOL)getCoordinate:(struct ? *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)calloutTitle;
-(id)highlightsForLine:(NSUInteger)arg0 ;
-(id)initWithEntry:(id)arg0 traits:(id)arg1 entryListIndex:(int)arg2 entryIndex:(int)arg3 mapItems:(id)arg4 collections:(id)arg5 publishers:(id)arg6 ;
-(id)queryLine;
-(void)sendFeedback;


@end


#endif