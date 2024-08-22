// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSANALYTICSSAFARIAUTOFILLAUTHENTICATIONEVENT_H
#define WBSANALYTICSSAFARIAUTOFILLAUTHENTICATIONEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WBSAnalyticsSafariAutoFillAuthenticationEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int category; // ivar: _category
@property (nonatomic) int client; // ivar: _client
@property (copy, nonatomic) NSString *errorCode; // ivar: _errorCode
@property (copy, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) BOOL hasClient;
@property (readonly, nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (nonatomic) BOOL hasOnPageLoad;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL onPageLoad; // ivar: _onPageLoad
@property (nonatomic) int status; // ivar: _status
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)categoryAsString:(int)arg0 ;
-(id)clientAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsCategory:(id)arg0 ;
-(int)StringAsClient:(id)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif