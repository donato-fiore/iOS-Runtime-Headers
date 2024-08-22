// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CPSEARCHRESULTFORFEEDBACK_H
#define _CPSEARCHRESULTFORFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPSearchResultForFeedback, NSSecureCoding, NSCopying;


#import "_CPActionItemForFeedback.h"
#import "_CPCardForFeedback.h"
#import "_CPStruct.h"
#import "_CPPunchoutForFeedback.h"

@interface _CPSearchResultForFeedback : PBCodable <_CPSearchResultForFeedback, NSSecureCoding>



@property (retain, nonatomic) _CPActionItemForFeedback *action; // ivar: _action
@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (nonatomic) NSUInteger blockId; // ivar: _blockId
@property (retain, nonatomic) _CPCardForFeedback *card; // ivar: _card
@property (retain, nonatomic) _CPCardForFeedback *compactCard; // ivar: _compactCard
@property (copy, nonatomic) NSString *completedQuery; // ivar: _completedQuery
@property (copy, nonatomic) NSString *correctedQuery; // ivar: _correctedQuery
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didTakeoverGo; // ivar: _didTakeoverGo
@property (nonatomic) BOOL doNotFold; // ivar: _doNotFold
@property (copy, nonatomic) NSData *entityData; // ivar: _entityData
@property (copy, nonatomic) NSString *fbr; // ivar: _fbr
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger hashedIdentifier; // ivar: _hashedIdentifier
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) _CPCardForFeedback *inlineCard; // ivar: _inlineCard
@property (copy, nonatomic) NSString *intendedQuery; // ivar: _intendedQuery
@property (nonatomic) BOOL isFuzzyMatch; // ivar: _isFuzzyMatch
@property (nonatomic) BOOL isInstantAnswer; // ivar: _isInstantAnswer
@property (nonatomic) BOOL isLocalApplicationResult; // ivar: _isLocalApplicationResult
@property (nonatomic) BOOL isStaticCorrection; // ivar: _isStaticCorrection
@property (readonly, copy, nonatomic) NSString *jsonApplicationBundleIdentifier;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, copy, nonatomic) NSObject<NSCopying> *jsonIdentifier;
@property (readonly, copy, nonatomic) NSString *jsonResultBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *jsonSectionBundleIdentifier;
@property (nonatomic) int knownApplicationBundleIdentifier; // ivar: _knownApplicationBundleIdentifier
@property (nonatomic) int knownResultBundleId; // ivar: _knownResultBundleId
@property (nonatomic) int knownSectionBundleIdentifier; // ivar: _knownSectionBundleIdentifier
@property (retain, nonatomic) _CPStruct *localFeatures; // ivar: _localFeatures
@property (nonatomic) BOOL noGoTakeover; // ivar: _noGoTakeover
@property (nonatomic) BOOL preferTopPlatter; // ivar: _preferTopPlatter
@property (nonatomic) BOOL publiclyIndexable; // ivar: _publiclyIndexable
@property (retain, nonatomic) _CPPunchoutForFeedback *punchout; // ivar: _punchout
@property (nonatomic) NSUInteger queryId; // ivar: _queryId
@property (nonatomic) CGFloat rankingScore; // ivar: _rankingScore
@property (copy, nonatomic) NSString *resultBundleId; // ivar: _resultBundleId
@property (copy, nonatomic) NSString *resultType; // ivar: _resultType
@property (copy, nonatomic) NSString *sectionBundleIdentifier; // ivar: _sectionBundleIdentifier
@property (nonatomic) BOOL shouldAutoNavigate; // ivar: _shouldAutoNavigate
@property (nonatomic) BOOL shouldUseCompactDisplay; // ivar: _shouldUseCompactDisplay
@property (readonly) Class superclass;
@property (nonatomic) int topHit; // ivar: _topHit
@property (nonatomic) int type; // ivar: _type
@property (copy, nonatomic) NSString *userInput; // ivar: _userInput
@property (nonatomic) BOOL usesCompactDisplay; // ivar: _usesCompactDisplay
@property (nonatomic) BOOL wasCompact; // ivar: _wasCompact
@property (readonly, nonatomic) NSUInteger whichApplicationbundleid; // ivar: _whichApplicationbundleid
@property (readonly, nonatomic) NSUInteger whichResultbundleidentifier; // ivar: _whichResultbundleidentifier
@property (readonly, nonatomic) NSUInteger whichSectionbundleid; // ivar: _whichSectionbundleid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(void)clearApplicationbundleid;
-(void)clearSectionbundleid;
-(void)writeTo:(id)arg0 ;


@end


#endif