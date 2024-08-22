// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPRESPONSEOPERATIONRESULTERRORCLIENT_H
#define CKDPRESPONSEOPERATIONRESULTERRORCLIENT_H

@class PBCodable;
@protocol NSCopying;


#import "CKDPMoveOplockFailure.h"
#import "CKDPOplockFailure.h"
#import "CKDPUniqueFieldFailure.h"

@interface CKDPResponseOperationResultErrorClient : PBCodable <NSCopying>

 {
    CKDPMoveOplockFailure *_moveOplockFailure;
    CKDPOplockFailure *_oplockFailure;
    CKDPUniqueFieldFailure *_uniqueFieldFailure;
    ? _has;
}


@property (readonly, nonatomic) BOOL hasMoveOplockFailure;
@property (readonly, nonatomic) BOOL hasOplockFailure;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUniqueFieldFailure;
@property (retain, nonatomic) CKDPMoveOplockFailure *moveOplockFailure;
@property (retain, nonatomic) CKDPOplockFailure *oplockFailure;
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) CKDPUniqueFieldFailure *uniqueFieldFailure;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif