// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPSHAREVETTINGINITIATERESPONSE_H
#define CKDPSHAREVETTINGINITIATERESPONSE_H

@class PBCodable;
@protocol NSCopying;



@interface CKDPShareVettingInitiateResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasVettingError;
@property (nonatomic) int vettingError; // ivar: _vettingError


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)vettingErrorAsString:(int)arg0 ;
-(int)StringAsVettingError:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif