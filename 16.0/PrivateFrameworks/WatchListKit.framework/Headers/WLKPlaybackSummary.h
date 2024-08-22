// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKPLAYBACKSUMMARY_H
#define WLKPLAYBACKSUMMARY_H

@class NSString, NSNumber, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WLKPlaybackSummary : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, nonatomic) NSNumber *accountIDAsNumber;
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *channelID; // ivar: _channelID
@property (readonly, nonatomic) NSInteger completionState; // ivar: _completionState
@property (readonly, nonatomic) NSString *contentID; // ivar: _contentID
@property (readonly, nonatomic) NSDate *currentPlaybackDate; // ivar: _currentPlaybackDate
@property (readonly, nonatomic) NSNumber *duration; // ivar: _duration
@property (readonly, nonatomic) NSNumber *elapsedTime; // ivar: _elapsedTime
@property (readonly, nonatomic) NSString *externalProfileID; // ivar: _externalProfileID
@property (readonly, nonatomic) NSNumber *featureDuration; // ivar: _featureDuration
@property (readonly, nonatomic) NSNumber *featureElapsedTime; // ivar: _featureElapsedTime
@property (nonatomic, getter=isFromActivePlayerPath) BOOL fromActivePlayerPath; // ivar: _fromActivePlayerPath
@property (nonatomic) BOOL isAlwaysLive; // ivar: _isAlwaysLive
@property (nonatomic) BOOL isTimerDerived; // ivar: _isTimerDerived
@property (readonly, nonatomic) NSNumber *playbackRate; // ivar: _playbackRate
@property (readonly, nonatomic) NSInteger playbackState; // ivar: _playbackState
@property (readonly, nonatomic) NSInteger playbackType; // ivar: _playbackType
@property (readonly, nonatomic) NSString *serviceID; // ivar: _serviceID
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(CGFloat)playedThresholdTimeForDuration:(CGFloat)arg0 ;
+(NSInteger)completionStateForDuration:(CGFloat)arg0 elapsedTime:(CGFloat)arg1 ;
+(id)EBSSummaryWithBundleID:(id)arg0 channelID:(id)arg1 contentID:(id)arg2 accountID:(id)arg3 externalProfileID:(id)arg4 timestamp:(id)arg5 playbackState:(NSInteger)arg6 playbackRate:(id)arg7 currentPlaybackDate:(id)arg8 ;
+(id)VODSummaryWithBundleID:(id)arg0 channelID:(id)arg1 contentID:(id)arg2 accountID:(id)arg3 externalProfileID:(id)arg4 timestamp:(id)arg5 duration:(id)arg6 elapsedTime:(id)arg7 featureDuration:(id)arg8 featureElapsedTime:(id)arg9 playbackState:(NSInteger)arg10 playbackRate:(id)arg11 completionState:(NSInteger)arg12 ;
+(id)VODSummaryWithBundleID:(id)arg0 channelID:(id)arg1 contentID:(id)arg2 accountID:(id)arg3 externalProfileID:(id)arg4 timestamp:(id)arg5 duration:(id)arg6 elapsedTime:(id)arg7 playbackState:(NSInteger)arg8 playbackRate:(id)arg9 completionState:(NSInteger)arg10 ;
+(id)_debugStringForPlaybackType:(NSInteger)arg0 ;
+(id)debugStringForCompletionState:(NSInteger)arg0 ;
+(id)debugStringForPlaybackState:(NSInteger)arg0 ;
+(id)liveSummaryWithBundleID:(id)arg0 channelID:(id)arg1 serviceID:(id)arg2 accountID:(id)arg3 externalProfileID:(id)arg4 timestamp:(id)arg5 playbackState:(NSInteger)arg6 playbackRate:(id)arg7 currentPlaybackDate:(id)arg8 ;
-(BOOL)_compareOptional:(id)arg0 with:(id)arg1 ;
-(BOOL)_compareOptionalTemporalValue:(id)arg0 with:(id)arg1 fuzzy:(BOOL)arg2 ;
-(BOOL)_isValid;
-(BOOL)_validate:(id)arg0 identifier:(id)arg1 expectedClass:(Class)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSummary:(id)arg0 ;
-(BOOL)isEquivalentToSummaryExcludingCursor:(id)arg0 ;
-(BOOL)isEquivalentToSummaryExcludingTimestamp:(id)arg0 ;
-(BOOL)isLiveType;
-(BOOL)isSameContent:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONRepresentation;
-(id)description;
-(id)dictionaryRepresentation;
-(id)elapsedTimeSummaryWithPlaybackState:(NSInteger)arg0 timerDerived:(BOOL)arg1 ;
-(id)initWithBundleID:(id)arg0 timestamp:(id)arg1 duration:(id)arg2 elapsedTime:(id)arg3 featureDuration:(id)arg4 featureElapsedTime:(id)arg5 externalProfileID:(id)arg6 contentID:(id)arg7 accountID:(id)arg8 playbackState:(NSInteger)arg9 playbackRate:(id)arg10 completionState:(NSInteger)arg11 isAlwaysLive:(BOOL)arg12 serviceID:(id)arg13 currentPlaybackDate:(id)arg14 playbackType:(NSInteger)arg15 isTimerDerived:(BOOL)arg16 isFromActivePlayerPath:(BOOL)arg17 channelID:(id)arg18 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaRemoteDictionary:(id)arg0 bundleID:(id)arg1 accountID:(id)arg2 isFromActivePlayerPath:(BOOL)arg3 ;
-(id)sanitizedCopy;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resolveChannelID:(id)arg0 ;


@end


#endif