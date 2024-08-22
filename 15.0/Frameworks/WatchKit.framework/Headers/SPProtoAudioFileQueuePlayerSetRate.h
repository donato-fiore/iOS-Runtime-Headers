// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPPROTOAUDIOFILEQUEUEPLAYERSETRATE_H
#define SPPROTOAUDIOFILEQUEUEPLAYERSETRATE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SPProtoAudioFileQueuePlayerSetRate : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) float rate; // ivar: _rate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sockPuppetMessage;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif