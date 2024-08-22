// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBPRIVATEPLAYMEDIAINTENTDATA_H
#define _INPBPRIVATEPLAYMEDIAINTENTDATA_H

@class PBCodable, NSArray, NSString;
@protocol _INPBPrivatePlayMediaIntentData, NSSecureCoding, NSCopying;


#import "_INPBString.h"
#import "_INPBPrivateMediaIntentData.h"

@interface _INPBPrivatePlayMediaIntentData : PBCodable <_INPBPrivatePlayMediaIntentData, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBString *alternativeProviderBundleIdentifier; // ivar: _alternativeProviderBundleIdentifier
@property (retain, nonatomic) _INPBString *ampPAFDataSetID; // ivar: _ampPAFDataSetID
@property (nonatomic) BOOL appInferred; // ivar: _appInferred
@property (nonatomic) BOOL appSelectionEnabled; // ivar: _appSelectionEnabled
@property (nonatomic) BOOL appSelectionSignalsEnabled; // ivar: _appSelectionSignalsEnabled
@property (nonatomic) int appSelectionSignalsFrequencyDenominator; // ivar: _appSelectionSignalsFrequencyDenominator
@property (copy, nonatomic) NSArray *audioSearchResults; // ivar: _audioSearchResults
@property (readonly, nonatomic) NSUInteger audioSearchResultsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL entityConfidenceSignalsEnabled; // ivar: _entityConfidenceSignalsEnabled
@property (nonatomic) int entityConfidenceSignalsFrequencyDenominatorInternal; // ivar: _entityConfidenceSignalsFrequencyDenominatorInternal
@property (nonatomic) int entityConfidenceSignalsFrequencyDenominatorProd; // ivar: _entityConfidenceSignalsFrequencyDenominatorProd
@property (nonatomic) int entityConfidenceSignalsMaxItemsToDisambiguate; // ivar: _entityConfidenceSignalsMaxItemsToDisambiguate
@property (readonly, nonatomic) BOOL hasAlternativeProviderBundleIdentifier;
@property (readonly, nonatomic) BOOL hasAmpPAFDataSetID;
@property (nonatomic) BOOL hasAppInferred;
@property (nonatomic) BOOL hasAppSelectionEnabled;
@property (nonatomic) BOOL hasAppSelectionSignalsEnabled;
@property (nonatomic) BOOL hasAppSelectionSignalsFrequencyDenominator;
@property (nonatomic) BOOL hasEntityConfidenceSignalsEnabled;
@property (nonatomic) BOOL hasEntityConfidenceSignalsFrequencyDenominatorInternal;
@property (nonatomic) BOOL hasEntityConfidenceSignalsFrequencyDenominatorProd;
@property (nonatomic) BOOL hasEntityConfidenceSignalsMaxItemsToDisambiguate;
@property (nonatomic) BOOL hasImmediatelyStartPlayback;
@property (nonatomic) BOOL hasIsAmbiguousPlay;
@property (nonatomic) BOOL hasIsPersonalizedRequest;
@property (readonly, nonatomic) BOOL hasPrivateMediaIntentData;
@property (nonatomic) BOOL hasShouldSuppressCommonWholeHouseAudioRoutes;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL immediatelyStartPlayback; // ivar: _immediatelyStartPlayback
@property (copy, nonatomic) NSArray *internalSignals; // ivar: _internalSignals
@property (readonly, nonatomic) NSUInteger internalSignalsCount;
@property (nonatomic) BOOL isAmbiguousPlay; // ivar: _isAmbiguousPlay
@property (nonatomic) BOOL isPersonalizedRequest; // ivar: _isPersonalizedRequest
@property (retain, nonatomic) _INPBPrivateMediaIntentData *privateMediaIntentData; // ivar: _privateMediaIntentData
@property (nonatomic) BOOL shouldSuppressCommonWholeHouseAudioRoutes; // ivar: _shouldSuppressCommonWholeHouseAudioRoutes
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)audioSearchResultsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)internalSignalAtIndex:(NSUInteger)arg0 ;
-(void)addAudioSearchResults:(id)arg0 ;
-(void)addInternalSignal:(id)arg0 ;
-(void)clearAudioSearchResults;
-(void)clearInternalSignals;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif