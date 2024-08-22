// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIGHTHOUSE_BITACORA_PROTOTASKEVENT_H
#define LIGHTHOUSE_BITACORA_PROTOTASKEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface LIGHTHOUSE_BITACORA_PROTOTaskEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (nonatomic) BOOL hasSucceeded;
@property (nonatomic) BOOL succeeded; // ivar: _succeeded


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