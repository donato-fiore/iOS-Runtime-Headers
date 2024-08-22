// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPSHAREDECLINEREQUEST_H
#define CKDPSHAREDECLINEREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "CKDPShareIdentifier.h"

@interface CKDPShareDeclineRequest : PBRequest <NSCopying>



@property (readonly, nonatomic) BOOL hasParticipantId;
@property (readonly, nonatomic) BOOL hasShareId;
@property (retain, nonatomic) NSString *participantId; // ivar: _participantId
@property (retain, nonatomic) CKDPShareIdentifier *shareId; // ivar: _shareId


+(id)options;
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