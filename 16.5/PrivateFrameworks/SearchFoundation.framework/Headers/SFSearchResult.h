// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSEARCHRESULT_H
#define SFSEARCHRESULT_H

@class NSArray, NSString, NSDictionary, NSNumber, NSData, NSURL;
@protocol SFJSONSerializable, SFSearchResult, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFActionItem.h"
#import "SFCard.h"
#import "SFImage.h"
#import "SFCustom.h"
#import "SFMoreResults.h"
#import "SFPunchout.h"
#import "SFTopic.h"
#import "SFText.h"

@interface SFSearchResult : NSObject <SFJSONSerializable, SFSearchResult, NSSecureCoding, NSCopying>



@property (retain, nonatomic) SFActionItem *action; // ivar: _action
@property (copy, nonatomic) NSArray *alternativeURLs; // ivar: _alternativeURLs
@property (copy, nonatomic) NSString *appleReferrer; // ivar: _appleReferrer
@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (copy, nonatomic) NSString *auxiliaryBottomText; // ivar: _auxiliaryBottomText
@property (nonatomic) int auxiliaryBottomTextColor; // ivar: _auxiliaryBottomTextColor
@property (copy, nonatomic) NSString *auxiliaryMiddleText; // ivar: _auxiliaryMiddleText
@property (copy, nonatomic) NSString *auxiliaryTopText; // ivar: _auxiliaryTopText
@property (nonatomic) NSUInteger blockId; // ivar: _blockId
@property (copy, nonatomic) NSString *calendarIdentifier; // ivar: _calendarIdentifier
@property (retain, nonatomic) SFCard *card; // ivar: _card
@property (retain, nonatomic) SFCard *compactCard; // ivar: _compactCard
@property (copy, nonatomic) NSString *completedQuery; // ivar: _completedQuery
@property (copy, nonatomic) NSString *completion; // ivar: _completion
@property (retain, nonatomic) SFImage *completionImage; // ivar: _completionImage
@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (copy, nonatomic) NSArray *contentTypeTree; // ivar: _contentTypeTree
@property (copy, nonatomic) NSString *correctedQuery; // ivar: _correctedQuery
@property (retain, nonatomic) SFCustom *customProperties; // ivar: _customProperties
@property (nonatomic) NSInteger dataOwnerType; // ivar: _dataOwnerType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *descriptions; // ivar: _descriptions
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL didTakeoverGo; // ivar: _didTakeoverGo
@property (nonatomic) BOOL doNotFold; // ivar: _doNotFold
@property (copy, nonatomic) NSString *domainName; // ivar: _domainName
@property (retain, nonatomic) NSNumber *engagementScore; // ivar: _engagementScore
@property (retain, nonatomic) NSData *entityData; // ivar: _entityData
@property (copy, nonatomic) NSString *entityIdentifier; // ivar: _entityIdentifier
@property (copy, nonatomic) NSString *fbr; // ivar: _fbr
@property (copy, nonatomic) NSString *fileProviderDomainIdentifier; // ivar: _fileProviderDomainIdentifier
@property (copy, nonatomic) NSString *fileProviderIdentifier; // ivar: _fileProviderIdentifier
@property (copy, nonatomic) NSString *footnote; // ivar: _footnote
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SFImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) SFCard *inlineCard; // ivar: _inlineCard
@property (copy, nonatomic) NSString *intendedQuery; // ivar: _intendedQuery
@property (nonatomic) BOOL isCentered; // ivar: _isCentered
@property (nonatomic) BOOL isFuzzyMatch; // ivar: _isFuzzyMatch
@property (nonatomic) BOOL isInstantAnswer; // ivar: _isInstantAnswer
@property (nonatomic) BOOL isLocalApplicationResult; // ivar: _isLocalApplicationResult
@property (nonatomic) BOOL isQuickGlance; // ivar: _isQuickGlance
@property (nonatomic) BOOL isSecondaryTitleDetached; // ivar: _isSecondaryTitleDetached
@property (nonatomic) BOOL isStaticCorrection; // ivar: _isStaticCorrection
@property (nonatomic) BOOL isStreaming; // ivar: _isStreaming
@property (copy, nonatomic) NSArray *itemProviderDataTypes; // ivar: _itemProviderDataTypes
@property (copy, nonatomic) NSArray *itemProviderFileTypes; // ivar: _itemProviderFileTypes
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSDictionary *localFeatures; // ivar: _localFeatures
@property (retain, nonatomic) NSData *mapsData; // ivar: _mapsData
@property (retain, nonatomic) SFImage *mapsMoreIcon; // ivar: _mapsMoreIcon
@property (copy, nonatomic) NSString *mapsMoreString; // ivar: _mapsMoreString
@property (retain, nonatomic) NSURL *mapsMoreURL; // ivar: _mapsMoreURL
@property (copy, nonatomic) NSString *mapsResultType; // ivar: _mapsResultType
@property (retain, nonatomic) NSNumber *maxAge; // ivar: _maxAge
@property (copy, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (nonatomic) NSUInteger minimumRankOfTopHitToSuppressResult; // ivar: _minimumRankOfTopHitToSuppressResult
@property (retain, nonatomic) SFMoreResults *moreResults; // ivar: _moreResults
@property (retain, nonatomic) SFPunchout *moreResultsPunchout; // ivar: _moreResultsPunchout
@property (copy, nonatomic) NSString *nearbyBusinessesString; // ivar: _nearbyBusinessesString
@property (nonatomic) BOOL noGoTakeover; // ivar: _noGoTakeover
@property (retain, nonatomic) SFTopic *normalizedTopic; // ivar: _normalizedTopic
@property (nonatomic) CGFloat personalizationScore; // ivar: _personalizationScore
@property (nonatomic) int placement; // ivar: _placement
@property (nonatomic) BOOL preferTopPlatter; // ivar: _preferTopPlatter
@property (nonatomic) BOOL preventThumbnailImageScaling; // ivar: _preventThumbnailImageScaling
@property (nonatomic) BOOL publiclyIndexable; // ivar: _publiclyIndexable
@property (copy, nonatomic) NSString *publishDate; // ivar: _publishDate
@property (retain, nonatomic) SFPunchout *punchout; // ivar: _punchout
@property (nonatomic) NSUInteger queryId; // ivar: _queryId
@property (retain, nonatomic) NSNumber *queryIndependentScore; // ivar: _queryIndependentScore
@property (nonatomic) CGFloat rankingScore; // ivar: _rankingScore
@property (nonatomic) BOOL renderHorizontallyWithOtherResultsInCategory; // ivar: _renderHorizontallyWithOtherResultsInCategory
@property (retain, nonatomic) SFTopic *requestedTopic; // ivar: _requestedTopic
@property (copy, nonatomic) NSString *resultBundleId; // ivar: _resultBundleId
@property (copy, nonatomic) NSString *resultTemplate; // ivar: _resultTemplate
@property (copy, nonatomic) NSString *resultType; // ivar: _resultType
@property (copy, nonatomic) NSString *secondaryTitle; // ivar: _secondaryTitle
@property (retain, nonatomic) SFImage *secondaryTitleImage; // ivar: _secondaryTitleImage
@property (copy, nonatomic) NSString *sectionBundleIdentifier; // ivar: _sectionBundleIdentifier
@property (copy, nonatomic) NSString *sectionHeader; // ivar: _sectionHeader
@property (copy, nonatomic) NSString *sectionHeaderMore; // ivar: _sectionHeaderMore
@property (copy, nonatomic) NSURL *sectionHeaderMoreURL; // ivar: _sectionHeaderMoreURL
@property (copy, nonatomic) NSDictionary *serverFeatures; // ivar: _serverFeatures
@property (nonatomic) CGFloat serverScore; // ivar: _serverScore
@property (nonatomic) BOOL shouldAutoNavigate; // ivar: _shouldAutoNavigate
@property (nonatomic) BOOL shouldUseCompactDisplay; // ivar: _shouldUseCompactDisplay
@property (copy, nonatomic) NSString *sourceName; // ivar: _sourceName
@property (copy, nonatomic) NSString *srf; // ivar: _srf
@property (copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) SFImage *thumbnail; // ivar: _thumbnail
@property (retain, nonatomic) SFText *title; // ivar: _title
@property (copy, nonatomic) NSString *titleNote; // ivar: _titleNote
@property (retain, nonatomic) NSNumber *titleNoteSize; // ivar: _titleNoteSize
@property (nonatomic) int topHit; // ivar: _topHit
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (copy, nonatomic) NSString *userActivityRequiredString; // ivar: _userActivityRequiredString
@property (copy, nonatomic) NSString *userInput; // ivar: _userInput
@property (nonatomic) BOOL usesCompactDisplay; // ivar: _usesCompactDisplay
@property (nonatomic) BOOL wasCompact; // ivar: _wasCompact


+(BOOL)supportsSecureCoding;
+(id)fallbackBundleId;
+(id)fallbackImageSymbolName;
+(id)fallbackSectionBundleIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQueryTopic:(id)arg0 ;
-(id)initWithSearchResult:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updatePunchout;


@end


#endif