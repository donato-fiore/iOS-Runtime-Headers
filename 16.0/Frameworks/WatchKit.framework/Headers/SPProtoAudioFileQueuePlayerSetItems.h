// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPPROTOAUDIOFILEQUEUEPLAYERSETITEMS_H
#define SPPROTOAUDIOFILEQUEUEPLAYERSETITEMS_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface SPProtoAudioFileQueuePlayerSetItems : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSMutableArray *playerItemIdentifiers; // ivar: _playerItemIdentifiers


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)playerItemIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)sockPuppetMessage;
-(void)addPlayerItemIdentifiers:(id)arg0 ;
-(void)clearPlayerItemIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif