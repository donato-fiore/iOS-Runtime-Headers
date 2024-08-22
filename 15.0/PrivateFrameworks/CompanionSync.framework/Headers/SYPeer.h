// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYPEER_H
#define SYPEER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SYPeer : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *generationID; // ivar: _generationID
@property (readonly, nonatomic) BOOL hasGenerationID;
@property (retain, nonatomic) NSString *peerID; // ivar: _peerID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithPeerID:(id)arg0 generation:(id)arg1 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif