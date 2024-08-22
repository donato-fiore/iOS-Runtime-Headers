// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBPROACTIVESUGGESTIONCLIENTMODELSPECIFICATION_H
#define ATXPBPROACTIVESUGGESTIONCLIENTMODELSPECIFICATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXPBProactiveSuggestionClientModelSpecification : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (retain, nonatomic) NSString *clientModelVersion; // ivar: _clientModelVersion
@property (nonatomic) int engagementResetPolicy; // ivar: _engagementResetPolicy
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (readonly, nonatomic) BOOL hasClientModelVersion;
@property (nonatomic) BOOL hasEngagementResetPolicy;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)engagementResetPolicyAsString:(int)arg0 ;
-(int)StringAsEngagementResetPolicy:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif