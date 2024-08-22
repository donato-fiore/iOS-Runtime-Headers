// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPPBPOLICYPROHIBITS_H
#define TPPBPOLICYPROHIBITS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface TPPBPolicyProhibits : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *candidateCategory; // ivar: _candidateCategory
@property (retain, nonatomic) NSString *explanation; // ivar: _explanation
@property (readonly, nonatomic) BOOL hasCandidateCategory;
@property (readonly, nonatomic) BOOL hasExplanation;
@property (nonatomic) BOOL hasPolicyVersion;
@property (readonly, nonatomic) BOOL hasSponsorCategory;
@property (readonly, nonatomic) BOOL hasSponsorId;
@property (nonatomic) NSUInteger policyVersion; // ivar: _policyVersion
@property (retain, nonatomic) NSString *sponsorCategory; // ivar: _sponsorCategory
@property (retain, nonatomic) NSString *sponsorId; // ivar: _sponsorId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif