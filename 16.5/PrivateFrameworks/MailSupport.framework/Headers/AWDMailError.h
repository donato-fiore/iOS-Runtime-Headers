// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDMAILERROR_H
#define AWDMAILERROR_H

@class PBCodable;
@protocol NSCopying;



@interface AWDMailError : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int errorCode; // ivar: _errorCode
@property (nonatomic) NSInteger genericErrorCode; // ivar: _genericErrorCode
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasGenericErrorCode;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)errorCodeAsString:(int)arg0 ;
-(int)StringAsErrorCode:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif