// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPPBDISPOSITIONENTRY_H
#define TPPBDISPOSITIONENTRY_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "TPPBDisposition.h"

@interface TPPBDispositionEntry : PBCodable <NSCopying>



@property (retain, nonatomic) TPPBDisposition *disposition; // ivar: _disposition
@property (readonly, nonatomic) BOOL hasDisposition;
@property (readonly, nonatomic) BOOL hasPeerID;
@property (retain, nonatomic) NSString *peerID; // ivar: _peerID


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