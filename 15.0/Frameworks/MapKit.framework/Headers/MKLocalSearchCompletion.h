// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKLOCALSEARCHCOMPLETION_H
#define MKLOCALSEARCHCOMPLETION_H

@class GEOSearchCategory, NSArray, GEOResolvedItem, GEOCollectionResult, GEODirectionIntent, GEOStyleAttributes, NSString, GEOPublisherResult, GEORetainedSearchMetadata, GEOServerResultScoreMetadata;
@protocol GEOCompletionItem;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"
#import "MKLocalSearchCompletion.h"

@interface MKLocalSearchCompletion : NSObject {
    id<GEOCompletionItem> *_item;
    MKMapItem *_mapItem;
    BOOL _shouldDisplayNoResults;
    BOOL _shouldEnableRAPForNoResults;
}


@property (readonly, nonatomic, getter=_alreadySentFeedback) BOOL alreadySentFeedback; // ivar: _alreadySentFeedback
@property (readonly, nonatomic) NSInteger autocompleteCellType;
@property (readonly, nonatomic) GEOSearchCategory *category;
@property (readonly, nonatomic) NSArray *childItems;
@property (readonly, nonatomic) GEOResolvedItem *clientResolved;
@property (readonly, nonatomic) GEOCollectionResult *collectionResult;
@property (readonly, nonatomic) GEODirectionIntent *directionIntent;
@property (retain, nonatomic) MKLocalSearchCompletion *directionIntentDestination; // ivar: _directionIntentDestination
@property (retain, nonatomic) MKLocalSearchCompletion *directionIntentOrigin; // ivar: _directionIntentOrigin
@property (readonly, nonatomic, getter=_disambiguationRadiusMeters) float disambiguationRadiusMeters;
@property (readonly, nonatomic) NSArray *displayLines;
@property (readonly, nonatomic) NSInteger entryTapBehavior;
@property (readonly, nonatomic) NSObject<GEOCompletionItem> *geoCompletionItem;
@property (readonly, nonatomic, getter=_hasDisambiguationRadiusMeters) BOOL hasDisambiguationRadiusMeters;
@property (readonly, nonatomic) BOOL hasQueryAcceleratorAffordanceEnabled;
@property (readonly, nonatomic) BOOL hasSortPriority;
@property (readonly, nonatomic) GEOStyleAttributes *iconStyleAttributes;
@property (copy, nonatomic) NSString *localizedSectionHeader; // ivar: _localizedSectionHeader
@property (readonly, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic, getter=_placeType) int placeType;
@property (readonly, nonatomic) GEOPublisherResult *publisherResult;
@property (readonly, nonatomic) NSString *queryAcceleratorCompletionString;
@property (readonly, nonatomic) NSArray *resultRefinements;
@property (readonly, nonatomic) GEORetainedSearchMetadata *retainedSearchMetadata;
@property (readonly, nonatomic) NSUInteger serverItemIndexInSection; // ivar: _serverItemIndexInSection
@property (readonly, nonatomic) GEOServerResultScoreMetadata *serverResultScoreMetadata;
@property (readonly, nonatomic) NSUInteger serverSectionIndex; // ivar: _serverSectionIndex
@property (readonly, nonatomic) NSInteger sortPriority;
@property (copy, nonatomic) NSString *sourceID; // ivar: _sourceID
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSArray *subtitleHighlightRanges;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *titleHighlightRanges;
@property (readonly, nonatomic, getter=_type) NSInteger type;


-(BOOL)getCoordinate:(struct CLLocationCoordinate2D *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(NSUInteger)hash;
-(id)calloutTitle;
-(id)copyStorage;
-(id)description;
-(id)highlightsForLine:(NSUInteger)arg0 ;
-(id)iconWithScale:(CGFloat)arg0 ;
-(id)initWithGeoCompletionItem:(id)arg0 serverSectionIndex:(NSUInteger)arg1 serverItemIndexInSection:(NSUInteger)arg2 ;
-(id)queryLine;
-(void)sendFeedback;


@end


#endif