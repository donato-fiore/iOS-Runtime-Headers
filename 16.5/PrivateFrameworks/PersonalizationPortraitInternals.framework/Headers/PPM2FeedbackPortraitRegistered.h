// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPM2FEEDBACKPORTRAITREGISTERED_H
#define PPM2FEEDBACKPORTRAITREGISTERED_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface PPM2FeedbackPortraitRegistered : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *activeTreatments; // ivar: _activeTreatments
@property (retain, nonatomic) NSString *clientId; // ivar: _clientId
@property (nonatomic) int domain; // ivar: _domain
@property (nonatomic) int feedbackDomainStatus; // ivar: _feedbackDomainStatus
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (readonly, nonatomic) BOOL hasClientId;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) BOOL hasFeedbackDomainStatus;
@property (readonly, nonatomic) BOOL hasMappingId;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *mappingId; // ivar: _mappingId
@property (retain, nonatomic) NSMutableArray *records; // ivar: _records
@property (nonatomic) int type; // ivar: _type


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)domainAsString:(int)arg0 ;
-(id)feedbackDomainStatusAsString:(int)arg0 ;
-(id)recordsAtIndex:(NSUInteger)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsDomain:(id)arg0 ;
-(int)StringAsFeedbackDomainStatus:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)addRecords:(id)arg0 ;
-(void)clearRecords;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif