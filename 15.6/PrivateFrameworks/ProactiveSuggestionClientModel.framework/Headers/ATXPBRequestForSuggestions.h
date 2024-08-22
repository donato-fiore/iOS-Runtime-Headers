// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBREQUESTFORSUGGESTIONS_H
#define ATXPBREQUESTFORSUGGESTIONS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXPBRequestForSuggestions : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *consumerSubTypeString; // ivar: _consumerSubTypeString
@property (readonly, nonatomic) BOOL hasConsumerSubTypeString;
@property (readonly, nonatomic) BOOL hasOriginatorId;
@property (nonatomic) BOOL hasTimeout;
@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *originatorId; // ivar: _originatorId
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (retain, nonatomic) NSString *uuidString; // ivar: _uuidString


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