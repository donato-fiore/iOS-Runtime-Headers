// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DRSPROTODIAGNOSTICREQUESTSTATS_H
#define DRSPROTODIAGNOSTICREQUESTSTATS_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface DRSProtoDiagnosticRequestStats : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *build; // ivar: _build
@property (readonly, nonatomic) BOOL hasBuild;
@property (readonly, nonatomic) BOOL hasIssueCategory;
@property (readonly, nonatomic) BOOL hasIssueDescription;
@property (readonly, nonatomic) BOOL hasTeamId;
@property (retain, nonatomic) NSString *issueCategory; // ivar: _issueCategory
@property (retain, nonatomic) NSString *issueDescription; // ivar: _issueDescription
@property (retain, nonatomic) NSMutableArray *outcomes; // ivar: _outcomes
@property (retain, nonatomic) NSString *teamId; // ivar: _teamId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)outcomesAtIndex:(NSUInteger)arg0 ;
-(void)addOutcomes:(id)arg0 ;
-(void)clearOutcomes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif