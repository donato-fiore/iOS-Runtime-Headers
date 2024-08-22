// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPPROBLEMRESPONSE_H
#define GEORPPROBLEMRESPONSE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEORPProblemResponse : PBCodable <NSCopying>

 {
    NSString *_problemId;
    int _statusCode;
    BOOL _isNotificationSupported;
    ? _flags;
}


@property (nonatomic) BOOL hasIsNotificationSupported;
@property (readonly, nonatomic) BOOL hasProblemId;
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) BOOL isNotificationSupported;
@property (retain, nonatomic) NSString *problemId;
@property (nonatomic) int statusCode;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)statusCodeAsString:(int)arg0 ;
-(int)StringAsStatusCode:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif