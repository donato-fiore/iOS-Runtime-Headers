// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBREQUESTFORCONTEXTUALACTIONSUGGESTIONS_H
#define ATXPBREQUESTFORCONTEXTUALACTIONSUGGESTIONS_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface ATXPBRequestForContextualActionSuggestions : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *caxPredictionContext; // ivar: _caxPredictionContext
@property (retain, nonatomic) NSString *consumerSubTypeString; // ivar: _consumerSubTypeString
@property (readonly, nonatomic) BOOL hasCaxPredictionContext;
@property (readonly, nonatomic) BOOL hasConsumerSubTypeString;
@property (nonatomic) BOOL hasMaxSuggestions;
@property (readonly, nonatomic) BOOL hasOriginatorId;
@property (nonatomic) BOOL hasTimeout;
@property (readonly, nonatomic) BOOL hasUuidString;
@property (nonatomic) int maxSuggestions; // ivar: _maxSuggestions
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