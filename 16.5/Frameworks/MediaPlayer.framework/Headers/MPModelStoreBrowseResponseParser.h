// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELSTOREBROWSERESPONSEPARSER_H
#define MPMODELSTOREBROWSERESPONSEPARSER_H

@class NSArray, NSDictionary, NSSet, ICUserIdentity;

#import <Foundation/Foundation.h>

#import "MPSectionedCollection.h"
#import "MPStoreItemMetadataResponse.h"
#import "MPChangeDetails.h"
#import "MPModelStoreBrowseContentItemBuilder.h"
#import "MPModelStoreBrowseResponseParser.h"
#import "MPModelStoreBrowseSectionBuilder.h"

@interface MPModelStoreBrowseResponseParser : NSObject {
    MPSectionedCollection *_additionalContentIdentifiers;
    NSArray *_allAdditionalContentIdentifiersNeedingLookup;
    NSInteger _parseOnceToken;
    MPSectionedCollection *_results;
    NSDictionary *_storePlatformDataResults;
    NSSet *_unavailableContentIdentifiers;
    ICUserIdentity *_userIdentity;
}


@property (readonly, nonatomic) MPSectionedCollection *additionalContentIdentifiers;
@property (readonly, nonatomic) MPStoreItemMetadataResponse *additionalStoreItemMetadataResponse; // ivar: _additionalStoreItemMetadataResponse
@property (readonly, nonatomic) NSArray *allAdditionalContentIdentifiersNeedingLookup;
@property (readonly, nonatomic) MPChangeDetails *changeDetails; // ivar: _changeDetails
@property (readonly, nonatomic) MPModelStoreBrowseContentItemBuilder *contentItemBuilder; // ivar: _contentItemBuilder
@property (readonly, nonatomic) ? options; // ivar: _options
@property (readonly, nonatomic) MPModelStoreBrowseResponseParser *previousParser; // ivar: _previousParser
@property (readonly, nonatomic) id *rawResponseOutput; // ivar: _rawResponseOutput
@property (readonly, nonatomic) MPSectionedCollection *results;
@property (readonly, nonatomic) MPModelStoreBrowseSectionBuilder *sectionBuilder; // ivar: _sectionBuilder


-(BOOL)_parseFeaturedContentChild:(id)arg0 isMemberOfChartSet:(BOOL)arg1 insertingResultsToSectionedCollection:(id)arg2 atSectionIndex:(NSInteger)arg3 additionalContentIdentifiers:(id)arg4 allAdditionalContentIdentifiersNeedingLookup:(id)arg5 ;
-(BOOL)_storeItemMetadataIsAvailableForContentIdentifier:(id)arg0 ;
-(id)_storeItemMetadataForContentIdentifier:(id)arg0 ;
-(id)initWithPreviousParser:(id)arg0 additionalStoreItemMetadataResponse:(id)arg1 options:(struct ? )arg2 sectionBuilder:(id)arg3 contentItemBuilder:(id)arg4 userIdentity:(id)arg5 ;
-(id)initWithRawResponseOutput:(id)arg0 options:(struct ? )arg1 sectionBuilder:(id)arg2 contentItemBuilder:(id)arg3 userIdentity:(id)arg4 ;
-(void)_parse;
-(void)_parseFeaturedContentStructureModelChildren:(id)arg0 ;
-(void)_parseSingleContentListFromPageDataDictionary:(id)arg0 isMemberOfChartSet:(BOOL)arg1 ;
-(void)_parseUsingAdditionalContentIdentifiersFromPreviousParser;
-(void)_populateStorePlatformDataResultsFromRawResponseOutputDictionary:(id)arg0 ;
-(void)_populateUnavailableContentIdentifiersFromPageDataDictionary:(id)arg0 ;


@end


#endif