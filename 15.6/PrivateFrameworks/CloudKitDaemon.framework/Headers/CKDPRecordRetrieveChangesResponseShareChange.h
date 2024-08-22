// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPRECORDRETRIEVECHANGESRESPONSESHARECHANGE_H
#define CKDPRECORDRETRIEVECHANGESRESPONSESHARECHANGE_H

@class PBCodable;
@protocol NSCopying;


#import "CKDPShare.h"
#import "CKDPShareIdentifier.h"

@interface CKDPRecordRetrieveChangesResponseShareChange : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int changeType; // ivar: _changeType
@property (nonatomic) BOOL hasChangeType;
@property (readonly, nonatomic) BOOL hasShare;
@property (readonly, nonatomic) BOOL hasShareIdentifier;
@property (retain, nonatomic) CKDPShare *share; // ivar: _share
@property (retain, nonatomic) CKDPShareIdentifier *shareIdentifier; // ivar: _shareIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)changeTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsChangeType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif