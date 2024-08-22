// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NMRCOMMANDINFOPROTOBUF_H
#define _NMRCOMMANDINFOPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _NMRCommandInfoProtobuf : PBCodable <NSCopying>

 {
    ? _preferredIntervals;
    ? _supportedPlaybackRates;
    ? _supportedQueueEndActions;
    ? _has;
}


@property (nonatomic) BOOL active; // ivar: _active
@property (nonatomic) int command; // ivar: _command
@property (nonatomic) int currentQueueEndAction; // ivar: _currentQueueEndAction
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL hasActive;
@property (nonatomic) BOOL hasCommand;
@property (nonatomic) BOOL hasCurrentQueueEndAction;
@property (nonatomic) BOOL hasEnabled;
@property (readonly, nonatomic) BOOL hasLocalizedShortTitle;
@property (readonly, nonatomic) BOOL hasLocalizedTitle;
@property (nonatomic) BOOL hasMaximumRating;
@property (nonatomic) BOOL hasMinimumRating;
@property (nonatomic) BOOL hasPreferredPlaybackRate;
@property (nonatomic) BOOL hasPresentationStyle;
@property (nonatomic) BOOL hasRepeatMode;
@property (nonatomic) BOOL hasShuffleMode;
@property (retain, nonatomic) NSString *localizedShortTitle; // ivar: _localizedShortTitle
@property (retain, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (nonatomic) float maximumRating; // ivar: _maximumRating
@property (nonatomic) float minimumRating; // ivar: _minimumRating
@property (readonly, nonatomic) *CGFloat preferredIntervals;
@property (readonly, nonatomic) NSUInteger preferredIntervalsCount;
@property (nonatomic) float preferredPlaybackRate; // ivar: _preferredPlaybackRate
@property (nonatomic) int presentationStyle; // ivar: _presentationStyle
@property (nonatomic) int repeatMode; // ivar: _repeatMode
@property (nonatomic) int shuffleMode; // ivar: _shuffleMode
@property (readonly, nonatomic) *float supportedPlaybackRates;
@property (readonly, nonatomic) NSUInteger supportedPlaybackRatesCount;
@property (readonly, nonatomic) *int supportedQueueEndActions;
@property (readonly, nonatomic) NSUInteger supportedQueueEndActionsCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)preferredIntervalAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(float)supportedPlaybackRateAtIndex:(NSUInteger)arg0 ;
-(id)commandAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentQueueEndActionAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)repeatModeAsString:(int)arg0 ;
-(id)shuffleModeAsString:(int)arg0 ;
-(id)supportedQueueEndActionsAsString:(int)arg0 ;
-(int)StringAsCommand:(id)arg0 ;
-(int)StringAsCurrentQueueEndAction:(id)arg0 ;
-(int)StringAsRepeatMode:(id)arg0 ;
-(int)StringAsShuffleMode:(id)arg0 ;
-(int)StringAsSupportedQueueEndActions:(id)arg0 ;
-(int)supportedQueueEndActionAtIndex:(NSUInteger)arg0 ;
-(void)addPreferredInterval:(CGFloat)arg0 ;
-(void)addSupportedPlaybackRate:(float)arg0 ;
-(void)addSupportedQueueEndAction:(int)arg0 ;
-(void)clearPreferredIntervals;
-(void)clearSupportedPlaybackRates;
-(void)clearSupportedQueueEndActions;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif