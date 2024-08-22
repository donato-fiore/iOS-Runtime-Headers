// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBPRIVATEMEDIAINTENTDATA_H
#define _INPBPRIVATEMEDIAINTENTDATA_H

@class PBCodable, NSString;
@protocol _INPBPrivateMediaIntentData, NSSecureCoding, NSCopying;


#import "_INPBString.h"
#import "_INPBHomeAutomationEntityProvider.h"
#import "_INPBAppIdentifier.h"
#import "_INPBSpeakerIDInfo.h"
#import "_INPBWholeHouseAudioMetadata.h"

@interface _INPBPrivateMediaIntentData : PBCodable <_INPBPrivateMediaIntentData, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int asrConfidenceLevel; // ivar: _asrConfidenceLevel
@property (nonatomic) float asrConfidenceScore; // ivar: _asrConfidenceScore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBString *fallbackUsername; // ivar: _fallbackUsername
@property (nonatomic) BOOL hasAsrConfidenceLevel;
@property (nonatomic) BOOL hasAsrConfidenceScore;
@property (readonly, nonatomic) BOOL hasFallbackUsername;
@property (readonly, nonatomic) BOOL hasHomeAutomationEntityProvider;
@property (nonatomic) BOOL hasIsAppAttributionRequired;
@property (nonatomic) BOOL hasIsAppCorrection;
@property (nonatomic) BOOL hasNlConfidenceLevel;
@property (nonatomic) BOOL hasNlConfidenceScore;
@property (readonly, nonatomic) BOOL hasProxiedThirdPartyAppInfo;
@property (readonly, nonatomic) BOOL hasResolvedSharedUserID;
@property (readonly, nonatomic) BOOL hasSpeakerIDInfo;
@property (nonatomic) BOOL hasUseDialogMemoryForAttribution;
@property (readonly, nonatomic) BOOL hasWholeHouseAudioMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBHomeAutomationEntityProvider *homeAutomationEntityProvider; // ivar: _homeAutomationEntityProvider
@property (nonatomic) BOOL isAppAttributionRequired; // ivar: _isAppAttributionRequired
@property (nonatomic) BOOL isAppCorrection; // ivar: _isAppCorrection
@property (nonatomic) int nlConfidenceLevel; // ivar: _nlConfidenceLevel
@property (nonatomic) float nlConfidenceScore; // ivar: _nlConfidenceScore
@property (retain, nonatomic) _INPBAppIdentifier *proxiedThirdPartyAppInfo; // ivar: _proxiedThirdPartyAppInfo
@property (retain, nonatomic) _INPBString *resolvedSharedUserID; // ivar: _resolvedSharedUserID
@property (retain, nonatomic) _INPBSpeakerIDInfo *speakerIDInfo; // ivar: _speakerIDInfo
@property (readonly) Class superclass;
@property (nonatomic) BOOL useDialogMemoryForAttribution; // ivar: _useDialogMemoryForAttribution
@property (retain, nonatomic) _INPBWholeHouseAudioMetadata *wholeHouseAudioMetadata; // ivar: _wholeHouseAudioMetadata


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)asrConfidenceLevelAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)nlConfidenceLevelAsString:(int)arg0 ;
-(int)StringAsAsrConfidenceLevel:(id)arg0 ;
-(int)StringAsNlConfidenceLevel:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif