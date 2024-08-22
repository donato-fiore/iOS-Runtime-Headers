// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDPBINTERACTIONEVENTMARKEDMUTETHREAD_H
#define EDPBINTERACTIONEVENTMARKEDMUTETHREAD_H

@class PBCodable;
@protocol EDPBDataSetters, NSCopying;



@interface EDPBInteractionEventMarkedMuteThread : PBCodable <EDPBDataSetters, NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger conversationId; // ivar: _conversationId
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) BOOL value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)withHasher:(id)arg0 setConversationID:(NSInteger)arg1 data:(id)arg2 ;
-(void)writeTo:(id)arg0 ;


@end


#endif