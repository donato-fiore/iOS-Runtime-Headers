// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPFIELDACTIONINSERTINTOLIST_H
#define CKDPFIELDACTIONINSERTINTOLIST_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "CKDPListPosition.h"

@interface CKDPFieldActionInsertIntoList : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasInsertAfter;
@property (readonly, nonatomic) BOOL hasPosition;
@property (nonatomic) BOOL insertAfter; // ivar: _insertAfter
@property (retain, nonatomic) CKDPListPosition *position; // ivar: _position
@property (retain, nonatomic) NSMutableArray *values; // ivar: _values


+(Class)valueType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)valueAtIndex:(NSUInteger)arg0 ;
-(void)addValue:(id)arg0 ;
-(void)clearValues;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif