// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYINFOPROTOMEDIASTATEEVENT_H
#define HMACCESSORYINFOPROTOMEDIASTATEEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HMAccessoryInfoProtoMediaStateEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasMediaIdentifier;
@property (nonatomic) BOOL hasPlaybackState;
@property (nonatomic) BOOL hasRepeatState;
@property (nonatomic) BOOL hasShuffleState;
@property (nonatomic) BOOL hasVolume;
@property (retain, nonatomic) NSString *mediaIdentifier; // ivar: _mediaIdentifier
@property (nonatomic) NSInteger playbackState; // ivar: _playbackState
@property (nonatomic) NSInteger repeatState; // ivar: _repeatState
@property (nonatomic) NSInteger shuffleState; // ivar: _shuffleState
@property (nonatomic) CGFloat volume; // ivar: _volume


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