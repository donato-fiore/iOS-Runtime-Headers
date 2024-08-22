// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSMEDIASYNCSERVICEKEEPLOCALRESPONSE_H
#define NMSMEDIASYNCSERVICEKEEPLOCALRESPONSE_H

@class PBCodable;
@protocol NSCopying;



@interface NMSMediaSyncServiceKeepLocalResponse : PBCodable <NSCopying>

 {
    ? _validatorExceptions;
    ? _has;
}


@property (nonatomic) int errorCode; // ivar: _errorCode
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) *int validatorExceptions;
@property (readonly, nonatomic) NSUInteger validatorExceptionsCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)errorCodeAsString:(int)arg0 ;
-(id)validatorExceptionsAsString:(int)arg0 ;
-(int)StringAsErrorCode:(id)arg0 ;
-(int)StringAsValidatorExceptions:(id)arg0 ;
-(int)validatorExceptionAtIndex:(NSUInteger)arg0 ;
-(void)addValidatorException:(int)arg0 ;
-(void)clearValidatorExceptions;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif