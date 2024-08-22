// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRCOMMANDINFOPROTOBUF_H
#define _MRCOMMANDINFOPROTOBUF_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface _MRCommandInfoProtobuf : PBCodable <NSCopying>

 {
    ? _preferredIntervals;
    ? _supportedInsertionPositions;
    ? _supportedPlaybackQueueTypes;
    ? _supportedQueueEndActions;
    ? _supportedRates;
    int _canScrub;
    int _command;
    NSMutableArray *_currentPlaybackSessionTypes;
    int _currentQueueEndAction;
    int _disabledReason;
    NSString *_localizedShortTitle;
    NSString *_localizedTitle;
    float _maximumRating;
    float _minimumRating;
    int _numAvailableSkips;
    NSString *_playbackSessionIdentifier;
    float _preferredPlaybackRate;
    int _presentationStyle;
    int _repeatMode;
    int _shuffleMode;
    int _skipFrequency;
    int _skipInterval;
    NSMutableArray *_supportedCustomQueueIdentifiers;
    NSMutableArray *_supportedPlaybackSessionIdentifiers;
    NSMutableArray *_supportedPlaybackSessionTypes;
    int _upNextItemCount;
    BOOL _active;
    BOOL _enabled;
    BOOL _supportsSharedQueue;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif