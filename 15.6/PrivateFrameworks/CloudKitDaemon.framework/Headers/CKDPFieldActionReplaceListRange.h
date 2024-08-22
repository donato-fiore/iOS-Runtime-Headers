// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPFIELDACTIONREPLACELISTRANGE_H
#define CKDPFIELDACTIONREPLACELISTRANGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "CKDPListRange.h"

@interface CKDPFieldActionReplaceListRange : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasRange;
@property (retain, nonatomic) CKDPListRange *range; // ivar: _range
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