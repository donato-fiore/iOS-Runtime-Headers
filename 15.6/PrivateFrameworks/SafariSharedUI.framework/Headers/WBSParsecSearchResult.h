// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPARSECSEARCHRESULT_H
#define WBSPARSECSEARCHRESULT_H

@class NSURL, NSString, NSNumber, NSArray, MKMapItem, SFSearchResult, WBSQuerySuggestion;
@protocol WBSParsecSearchResult, WBSCompletionListItem, WBSParsecSearchGenericResult, WBSParsecSearchMapsResult, WBSParsecSearchSimpleResult, WBSParsecSearchSportsResult, WBSParsecSearchSession;

#import <Foundation/Foundation.h>

#import "WBSParsecActionButton.h"
#import "WBSParsecAuxiliaryInfo.h"
#import "WBSParsecImageRepresentation.h"
#import "WBSParsecSearchSportsAttributionExtraCompletionItem.h"
#import "WBSParsecLegacySearchResult.h"
#import "WBSParsecSearchMapsResultFeedbackSender.h"

@interface WBSParsecSearchResult : NSObject <WBSParsecSearchResult, WBSCompletionListItem, WBSParsecSearchGenericResult, WBSParsecSearchMapsResult, WBSParsecSearchSimpleResult, WBSParsecSearchSportsResult>



@property (readonly, nonatomic) WBSParsecActionButton *actionButton;
@property (readonly, nonatomic) NSURL *appPunchoutURL;
@property (readonly, nonatomic) WBSParsecAuxiliaryInfo *auxiliaryInfo;
@property (readonly, nonatomic) NSString *completion;
@property (readonly, nonatomic) WBSParsecImageRepresentation *completionIcon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptionLeadInText;
@property (readonly, nonatomic) NSNumber *descriptionMaximumNumberOfLines;
@property (readonly, copy, nonatomic) NSArray *descriptionRichTexts;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) BOOL descriptionTextCanWrap;
@property (readonly, nonatomic) NSUInteger engagementDestination;
@property (readonly, nonatomic) WBSParsecSearchSportsAttributionExtraCompletionItem *extraCompletionItem;
@property (readonly, nonatomic) NSString *feedbackIdentifier;
@property (readonly, copy, nonatomic) NSString *footnote;
@property (readonly, nonatomic) BOOL hasSingleLineDescriptionAndTitle;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBSParsecImageRepresentation *icon;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *images;
@property (readonly, copy, nonatomic) NSArray *individualScores;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (readonly, nonatomic) WBSParsecLegacySearchResult *legacySearchResult; // ivar: _legacySearchResult
@property (readonly, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) WBSParsecSearchMapsResultFeedbackSender *mapsFeedbackSender;
@property (readonly, copy, nonatomic) NSString *mediaKind;
@property (readonly, nonatomic) NSUInteger minimumRankOfTopHitToSuppressResult;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (nonatomic) NSInteger parsecQueryID;
@property (retain, nonatomic) NSObject<WBSParsecSearchSession> *parsecSearchSession;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, copy, nonatomic) NSString *referrerForLoadingResult;
@property (readonly, copy, nonatomic) NSString *secondaryTitle;
@property (readonly, nonatomic) WBSParsecImageRepresentation *secondaryTitleGlyph;
@property (readonly, copy, nonatomic) NSString *sectionBundleIdentifier;
@property (readonly, nonatomic) NSString *sectionHeader;
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSInteger subtype;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WBSParsecImageRepresentation *thumbnail;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSNumber *titleMaximumLines;
@property (readonly, nonatomic) NSNumber *titleMaximumNumberOfLines;
@property (readonly, nonatomic) NSInteger type;
@property (readonly, nonatomic) NSString *urlString;


+(NSInteger)typeForSFSearchResult:(id)arg0 ;
+(NSInteger)typeForSFSearchResult:(id)arg0 isOneLine:(BOOL)arg1 ;
-(BOOL)canBecomeTopHitForQuery:(id)arg0 ;
-(id)_genericResult;
-(id)_mapsResult;
-(id)_result;
-(id)_resultPresentedInCard;
-(id)_simpleResult;
-(id)_sportsResult;
-(id)completionIconWithSession:(id)arg0 ;
-(id)iconWithSession:(id)arg0 ;
-(id)init;
-(id)initWithLegacySearchResult:(id)arg0 ;
-(id)thumbnailWithSession:(id)arg0 ;
-(id)titleGlyphWithSession:(id)arg0 ;


@end


#endif