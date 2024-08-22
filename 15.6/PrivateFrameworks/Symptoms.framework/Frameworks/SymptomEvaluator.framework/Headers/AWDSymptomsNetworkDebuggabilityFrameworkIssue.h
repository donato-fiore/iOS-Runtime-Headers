// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDSYMPTOMSNETWORKDEBUGGABILITYFRAMEWORKISSUE_H
#define AWDSYMPTOMSNETWORKDEBUGGABILITYFRAMEWORKISSUE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface AWDSymptomsNetworkDebuggabilityFrameworkIssue : PBCodable <NSCopying>

 {
    ? _ndfAppSymptoms;
    ? _ndfNetworkTypes;
    ? _has;
}


@property (nonatomic) BOOL hasNdfCount;
@property (nonatomic) BOOL hasNdfDampeningFactor;
@property (nonatomic) BOOL hasNdfDuration;
@property (nonatomic) BOOL hasNdfLQM;
@property (nonatomic) BOOL hasNdfSessionType;
@property (nonatomic) BOOL hasNdfSymptomPoint;
@property (nonatomic) BOOL hasNdfTriggerType;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSMutableArray *ndfAppNames; // ivar: _ndfAppNames
@property (readonly, nonatomic) *int ndfAppSymptoms;
@property (readonly, nonatomic) NSUInteger ndfAppSymptomsCount;
@property (nonatomic) NSUInteger ndfCount; // ivar: _ndfCount
@property (nonatomic) NSUInteger ndfDampeningFactor; // ivar: _ndfDampeningFactor
@property (nonatomic) NSUInteger ndfDuration; // ivar: _ndfDuration
@property (nonatomic) NSInteger ndfLQM; // ivar: _ndfLQM
@property (readonly, nonatomic) *int ndfNetworkTypes;
@property (readonly, nonatomic) NSUInteger ndfNetworkTypesCount;
@property (nonatomic) int ndfSessionType; // ivar: _ndfSessionType
@property (retain, nonatomic) NSMutableArray *ndfSignatures; // ivar: _ndfSignatures
@property (nonatomic) NSInteger ndfSymptomPoint; // ivar: _ndfSymptomPoint
@property (nonatomic) int ndfTriggerType; // ivar: _ndfTriggerType
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


+(Class)ndfAppNameType;
+(Class)ndfSignatureType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)ndfAppNameAtIndex:(NSUInteger)arg0 ;
-(id)ndfAppSymptomsAsString:(int)arg0 ;
-(id)ndfNetworkTypesAsString:(int)arg0 ;
-(id)ndfSessionTypeAsString:(int)arg0 ;
-(id)ndfSignatureAtIndex:(NSUInteger)arg0 ;
-(id)ndfTriggerTypeAsString:(int)arg0 ;
-(int)StringAsNdfAppSymptoms:(id)arg0 ;
-(int)StringAsNdfNetworkTypes:(id)arg0 ;
-(int)StringAsNdfSessionType:(id)arg0 ;
-(int)StringAsNdfTriggerType:(id)arg0 ;
-(int)ndfAppSymptomAtIndex:(NSUInteger)arg0 ;
-(int)ndfNetworkTypeAtIndex:(NSUInteger)arg0 ;
-(void)addNdfAppName:(id)arg0 ;
-(void)addNdfAppSymptom:(int)arg0 ;
-(void)addNdfNetworkType:(int)arg0 ;
-(void)addNdfSignature:(id)arg0 ;
-(void)clearNdfAppNames;
-(void)clearNdfAppSymptoms;
-(void)clearNdfNetworkTypes;
-(void)clearNdfSignatures;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif