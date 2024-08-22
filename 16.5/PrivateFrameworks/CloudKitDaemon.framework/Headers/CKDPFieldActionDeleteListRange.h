// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPFIELDACTIONDELETELISTRANGE_H
#define CKDPFIELDACTIONDELETELISTRANGE_H

@class PBCodable;
@protocol NSCopying;


#import "CKDPListRange.h"

@interface CKDPFieldActionDeleteListRange : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasRange;
@property (retain, nonatomic) CKDPListRange *range; // ivar: _range


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