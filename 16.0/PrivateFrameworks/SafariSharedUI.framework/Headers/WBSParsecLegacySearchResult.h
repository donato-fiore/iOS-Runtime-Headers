// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPARSECLEGACYSEARCHRESULT_H
#define WBSPARSECLEGACYSEARCHRESULT_H

@class WBSParsecModel, SFSearchResult, NSURL, NSString, MKMapItem, WBSQuerySuggestion;
@protocol WBSParsecSearchResult, WBSCompletionListItem;


#import "WBSParsecActionButton.h"
#import "WBSParsecImageRepresentation.h"

@interface WBSParsecLegacySearchResult : WBSParsecModel <WBSParsecSearchResult, WBSCompletionListItem>

 {
    BOOL _topHit;
    SFSearchResult *_sfSearchResult;
}


@property (readonly, nonatomic) WBSParsecActionButton *actionButton; // ivar: _actionButton
@property (readonly, nonatomic) NSURL *appPunchoutURL; // ivar: _appPunchoutURL
@property (readonly, nonatomic) NSString *completion; // ivar: _completion
@property (readonly, nonatomic) WBSParsecImageRepresentation *completionIcon; // ivar: _completionIcon
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (readonly, nonatomic) NSUInteger engagementDestination;
@property (readonly, nonatomic) NSString *feedbackIdentifier; // ivar: _feedbackIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBSParsecImageRepresentation *icon; // ivar: _icon
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (readonly, nonatomic) NSUInteger legacyType; // ivar: _legacyType
@property (readonly, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (readonly, copy, nonatomic) NSString *mediaKind; // ivar: _mediaKind
@property (readonly, nonatomic) NSUInteger minimumRankOfTopHitToSuppressResult; // ivar: _minimumRankOfTopHitToSuppressResult
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (nonatomic) NSInteger parsecQueryID; // ivar: _parsecQueryID
@property (readonly, copy, nonatomic) NSString *query; // ivar: _query
@property (readonly, copy, nonatomic) NSString *referrerForLoadingResult; // ivar: _referrerForLoadingResult
@property (copy, nonatomic) NSString *sectionBundleIdentifier; // ivar: _sectionBundleIdentifier
@property (readonly, nonatomic) NSString *sectionHeader; // ivar: _sectionHeader
@property (retain, nonatomic) SFSearchResult *sfSearchResultValue; // ivar: _sfSearchResultValue
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *urlString; // ivar: _urlString


+(Class)_resultClassForDictionary:(id)arg0 ;
+(id)_specializedSchema;
+(id)resultWithDictionary:(id)arg0 ;
+(id)schema;
-(BOOL)canBecomeTopHitForQuery:(id)arg0 ;
-(id)_glyphRepresentationsFromGlyphDictionaries:(id)arg0 ;
-(id)_glyphsFromGlyphRepresentations:(id)arg0 withSession:(id)arg1 ;
-(id)completionIconWithSession:(id)arg0 ;
-(id)iconWithSession:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif