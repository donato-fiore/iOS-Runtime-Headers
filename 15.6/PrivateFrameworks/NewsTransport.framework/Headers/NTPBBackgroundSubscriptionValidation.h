// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBBACKGROUNDSUBSCRIPTIONVALIDATION_H
#define NTPBBACKGROUNDSUBSCRIPTIONVALIDATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBBackgroundSubscriptionValidation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (readonly, nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorMessage;
@property (nonatomic) BOOL hasResultType;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) int resultType; // ivar: _resultType
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif