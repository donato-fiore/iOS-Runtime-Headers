// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCMEDIANEGOTIATIONFACETIMESETTINGS_H
#define VCMEDIANEGOTIATIONFACETIMESETTINGS_H

@class PBCodable;
@protocol NSCopying;



@interface VCMediaNegotiationFaceTimeSettings : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int capabilities; // ivar: _capabilities
@property (nonatomic) BOOL hasCapabilities;
@property (nonatomic) BOOL hasLinkProbingCapabilityVersion;
@property (nonatomic) BOOL hasMediaControlInfoSubVersion;
@property (nonatomic) BOOL hasOneToOneModeSupported;
@property (nonatomic) BOOL hasSwitches;
@property (nonatomic) unsigned int linkProbingCapabilityVersion; // ivar: _linkProbingCapabilityVersion
@property (nonatomic) unsigned int mediaControlInfoSubVersion; // ivar: _mediaControlInfoSubVersion
@property (nonatomic) BOOL oneToOneModeSupported; // ivar: _oneToOneModeSupported
@property (nonatomic) unsigned int switches; // ivar: _switches


-(BOOL)SIPDisabled;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(BOOL)secureMessagingRequired;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned char)mediaControlInfoFECFeedbackVersion;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif