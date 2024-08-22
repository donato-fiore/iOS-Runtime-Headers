// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPLISTPOSITION_H
#define CKDPLISTPOSITION_H

@class PBCodable;
@protocol NSCopying;



@interface CKDPListPosition : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIndex;
@property (nonatomic) BOOL hasIsReversed;
@property (nonatomic) int index; // ivar: _index
@property (nonatomic) BOOL isReversed; // ivar: _isReversed


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)_CKLogToFileHandle:(id)arg0 atDepth:(int)arg1 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif