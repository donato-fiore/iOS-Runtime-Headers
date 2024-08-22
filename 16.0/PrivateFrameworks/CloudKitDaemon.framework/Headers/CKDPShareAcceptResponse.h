// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPSHAREACCEPTRESPONSE_H
#define CKDPSHAREACCEPTRESPONSE_H

@class PBCodable;
@protocol NSCopying;


#import "CKDPShare.h"

@interface CKDPShareAcceptResponse : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasShare;
@property (retain, nonatomic) CKDPShare *share; // ivar: _share


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