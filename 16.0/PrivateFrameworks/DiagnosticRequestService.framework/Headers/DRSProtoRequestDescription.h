// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DRSPROTOREQUESTDESCRIPTION_H
#define DRSPROTOREQUESTDESCRIPTION_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface DRSProtoRequestDescription : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *build; // ivar: _build
@property (retain, nonatomic) NSData *contextDictionaryData; // ivar: _contextDictionaryData
@property (readonly, nonatomic) BOOL hasBuild;
@property (readonly, nonatomic) BOOL hasContextDictionaryData;
@property (readonly, nonatomic) BOOL hasIssueCategory;
@property (nonatomic) BOOL hasRequestTime;
@property (readonly, nonatomic) BOOL hasTeamId;
@property (retain, nonatomic) NSString *issueCategory; // ivar: _issueCategory
@property (nonatomic) NSUInteger requestTime; // ivar: _requestTime
@property (retain, nonatomic) NSString *teamId; // ivar: _teamId


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