// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PERSONLINKINGLINKEDPAIREVENT_H
#define PERSONLINKINGLINKEDPAIREVENT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface PersonLinkingLinkedPairEvent : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasUserID;
@property (retain, nonatomic) NSMutableArray *pairs; // ivar: _pairs
@property (retain, nonatomic) NSString *userID; // ivar: _userID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)pairsAtIndex:(NSUInteger)arg0 ;
-(void)addPairs:(id)arg0 ;
-(void)clearPairs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif