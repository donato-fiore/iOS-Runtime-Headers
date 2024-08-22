// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPLISTRANGE_H
#define CKDPLISTRANGE_H

@class PBCodable;
@protocol NSCopying;


#import "CKDPListPosition.h"

@interface CKDPListRange : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasLeft;
@property (readonly, nonatomic) BOOL hasRight;
@property (retain, nonatomic) CKDPListPosition *left; // ivar: _left
@property (retain, nonatomic) CKDPListPosition *right; // ivar: _right


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