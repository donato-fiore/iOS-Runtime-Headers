// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABCPBSIGRESPONSE_H
#define ABCPBSIGRESPONSE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ABCPbSigResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int caseCount; // ivar: _caseCount
@property (nonatomic) unsigned int caseCountTarget; // ivar: _caseCountTarget
@property (retain, nonatomic) NSString *caseIdentifier; // ivar: _caseIdentifier
@property (retain, nonatomic) NSString *caseStatus; // ivar: _caseStatus
@property (nonatomic) BOOL decision; // ivar: _decision
@property (nonatomic) BOOL hasCaseCount;
@property (nonatomic) BOOL hasCaseCountTarget;
@property (readonly, nonatomic) BOOL hasCaseIdentifier;
@property (readonly, nonatomic) BOOL hasCaseStatus;
@property (nonatomic) BOOL hasDecision;


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