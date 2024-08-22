// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
    ? _has;
}


@property (nonatomic) BOOL active; // ivar: _active
@property (nonatomic) int canScrub; // ivar: _canScrub
@property (nonatomic) int command; // ivar: _command
@property (retain, nonatomic) NSMutableArray *currentPlaybackSessionTypes; // ivar: _currentPlaybackSessionTypes
@property (nonatomic) int currentQueueEndAction; // ivar: _currentQueueEndAction
@property (nonatomic) int disabledReason; // ivar: _disabledReason
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL hasActive;
@property (nonatomic) BOOL hasCanScrub;
@property (nonatomic) BOOL hasCommand;
@property (nonatomic) BOOL hasCurrentQueueEndAction;
@property (nonatomic) BOOL hasDisabledReason;
@property (nonatomic) BOOL hasEnabled;
@property (readonly, nonatomic) BOOL hasLocalizedShortTitle;
@property (readonly, nonatomic) BOOL hasLocalizedTitle;
@property (nonatomic) BOOL hasMaximumRating;
@property (nonatomic) BOOL hasMinimumRating;
@property (nonatomic) BOOL hasNumAvailableSkips;
@property (readonly, nonatomic) BOOL hasPlaybackSessionIdentifier;
@property (nonatomic) BOOL hasPreferredPlaybackRate;
@property (nonatomic) BOOL hasPresentationStyle;
@property (nonatomic) BOOL hasRepeatMode;
@property (nonatomic) BOOL hasShuffleMode;
@property (nonatomic) BOOL hasSkipFrequency;
@property (nonatomic) BOOL hasSkipInterval;
@property (nonatomic) BOOL hasSupportsSharedQueue;
@property (nonatomic) BOOL hasUpNextItemCount;
@property (retain, nonatomic) NSString *localizedShortTitle; // ivar: _localizedShortTitle
@property (retain, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (nonatomic) float maximumRating; // ivar: _maximumRating
@property (nonatomic) float minimumRating; // ivar: _minimumRating
@property (nonatomic) int numAvailableSkips; // ivar: _numAvailableSkips
@property (retain, nonatomic) NSString *playbackSessionIdentifier; // ivar: _playbackSessionIdentifier
@property (readonly, nonatomic) *CGFloat preferredIntervals;
@property (readonly, nonatomic) NSUInteger preferredIntervalsCount;
@property (nonatomic) float preferredPlaybackRate; // ivar: _preferredPlaybackRate
@property (nonatomic) int presentationStyle; // ivar: _presentationStyle
@property (nonatomic) int repeatMode; // ivar: _repeatMode
@property (nonatomic) int shuffleMode; // ivar: _shuffleMode
@property (nonatomic) int skipFrequency; // ivar: _skipFrequency
@property (nonatomic) int skipInterval; // ivar: _skipInterval
@property (retain, nonatomic) NSMutableArray *supportedCustomQueueIdentifiers; // ivar: _supportedCustomQueueIdentifiers
@property (readonly, nonatomic) *int supportedInsertionPositions;
@property (readonly, nonatomic) NSUInteger supportedInsertionPositionsCount;
@property (readonly, nonatomic) *int supportedPlaybackQueueTypes;
@property (readonly, nonatomic) NSUInteger supportedPlaybackQueueTypesCount;
@property (retain, nonatomic) NSMutableArray *supportedPlaybackSessionIdentifiers; // ivar: _supportedPlaybackSessionIdentifiers
@property (retain, nonatomic) NSMutableArray *supportedPlaybackSessionTypes; // ivar: _supportedPlaybackSessionTypes
@property (readonly, nonatomic) *int supportedQueueEndActions;
@property (readonly, nonatomic) NSUInteger supportedQueueEndActionsCount;
@property (readonly, nonatomic) *float supportedRates;
@property (readonly, nonatomic) NSUInteger supportedRatesCount;
@property (nonatomic) BOOL supportsSharedQueue; // ivar: _supportsSharedQueue
@property (nonatomic) int upNextItemCount; // ivar: _upNextItemCount


+(Class)supportedCustomQueueIdentifierType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)preferredIntervalAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(float)supportedRateAtIndex:(NSUInteger)arg0 ;
-(id)commandAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentPlaybackSessionTypesAtIndex:(NSUInteger)arg0 ;
-(id)currentQueueEndActionAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)disabledReasonAsString:(int)arg0 ;
-(id)repeatModeAsString:(int)arg0 ;
-(id)shuffleModeAsString:(int)arg0 ;
-(id)supportedCustomQueueIdentifierAtIndex:(NSUInteger)arg0 ;
-(id)supportedPlaybackSessionIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)supportedPlaybackSessionTypesAtIndex:(NSUInteger)arg0 ;
-(id)supportedQueueEndActionsAsString:(int)arg0 ;
-(int)StringAsCommand:(id)arg0 ;
-(int)StringAsCurrentQueueEndAction:(id)arg0 ;
-(int)StringAsDisabledReason:(id)arg0 ;
-(int)StringAsRepeatMode:(id)arg0 ;
-(int)StringAsShuffleMode:(id)arg0 ;
-(int)StringAsSupportedQueueEndActions:(id)arg0 ;
-(int)supportedInsertionPositionsAtIndex:(NSUInteger)arg0 ;
-(int)supportedPlaybackQueueTypesAtIndex:(NSUInteger)arg0 ;
-(int)supportedQueueEndActionsAtIndex:(NSUInteger)arg0 ;
-(void)addCurrentPlaybackSessionTypes:(id)arg0 ;
-(void)addPreferredInterval:(CGFloat)arg0 ;
-(void)addSupportedCustomQueueIdentifier:(id)arg0 ;
-(void)addSupportedInsertionPositions:(int)arg0 ;
-(void)addSupportedPlaybackQueueTypes:(int)arg0 ;
-(void)addSupportedPlaybackSessionIdentifiers:(id)arg0 ;
-(void)addSupportedPlaybackSessionTypes:(id)arg0 ;
-(void)addSupportedQueueEndActions:(int)arg0 ;
-(void)addSupportedRate:(float)arg0 ;
-(void)clearCurrentPlaybackSessionTypes;
-(void)clearPreferredIntervals;
-(void)clearSupportedCustomQueueIdentifiers;
-(void)clearSupportedInsertionPositions;
-(void)clearSupportedPlaybackQueueTypes;
-(void)clearSupportedPlaybackSessionIdentifiers;
-(void)clearSupportedPlaybackSessionTypes;
-(void)clearSupportedQueueEndActions;
-(void)clearSupportedRates;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif