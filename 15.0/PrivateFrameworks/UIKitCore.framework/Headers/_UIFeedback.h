// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFEEDBACK_H
#define _UIFEEDBACK_H

@class NSIndexSet, NSString, NSDictionary, NSArray, Protocol, NSMutableArray;
@protocol NSCopying, NSSecureCoding, UICoordinateSpace, _UIFeedbackPlayer;

#import <Foundation/Foundation.h>

#import "_UIFeedbackParameters.h"
#import "_UIFeedbackPattern.h"

@interface _UIFeedback : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=_allEventTypes) NSIndexSet *allEventTypes;
@property (readonly, nonatomic, getter=_allSystemSoundIDs) NSIndexSet *allSystemSoundIDs;
@property (nonatomic) NSInteger audioOutputMode; // ivar: _audioOutputMode
@property (readonly, nonatomic) _UIFeedbackParameters *audioParameters; // ivar: _audioParameters
@property (retain, nonatomic, getter=_category, setter=_setCategory:) NSString *category; // ivar: _category
@property (weak, nonatomic, getter=_coordinateSpace, setter=_setCoordinateSpace:) NSObject<UICoordinateSpace> *coordinateSpace; // ivar: _coordinateSpace
@property (readonly, nonatomic, getter=_debugDictionary) NSDictionary *debugDictionary; // ivar: _debugDictionary
@property (nonatomic, getter=_delay, setter=_setDelay:) CGFloat delay; // ivar: _delay
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic, getter=_effectiveDelay) CGFloat effectiveDelay;
@property (readonly, nonatomic, getter=_effectiveDuration) CGFloat effectiveDuration;
@property (readonly, nonatomic, getter=_effectiveEnabledFeedbackTypes) NSUInteger effectiveEnabledFeedbackTypes;
@property (readonly, nonatomic, getter=_effectiveEventType) NSUInteger effectiveEventType;
@property (readonly, nonatomic, getter=_effectiveFeedbackData) NSArray *effectiveFeedbackData;
@property (readonly, nonatomic, getter=_effectiveFeedbackTypes) NSUInteger effectiveFeedbackTypes;
@property (readonly, nonatomic, getter=_effectivePlayableFeedbackTypes) NSUInteger effectivePlayableFeedbackTypes;
@property (readonly, nonatomic, getter=_effectiveSystemSoundID) unsigned int effectiveSystemSoundID;
@property (nonatomic, getter=_eventToken, setter=_setEventToken:) NSUInteger eventToken; // ivar: _eventToken
@property (nonatomic) NSInteger hapticOutputMode; // ivar: _hapticOutputMode
@property (readonly, nonatomic) _UIFeedbackParameters *hapticParameters; // ivar: _hapticParameters
@property (readonly, nonatomic, getter=_individualFeedbacks) NSArray *individualFeedbacks;
@property (copy, nonatomic, getter=_name, setter=_setName:) NSString *name; // ivar: _name
@property (weak, nonatomic, getter=_parentPattern, setter=_setParentPattern:) _UIFeedbackPattern *parentPattern; // ivar: _parentPattern
@property (readonly, nonatomic, getter=_playableProtocol) Protocol *playableProtocol;
@property (retain, nonatomic, getter=_player, setter=_setPlayer:) NSObject<_UIFeedbackPlayer> *player; // ivar: _player
@property (readonly, nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (nonatomic) float position; // ivar: _position
@property (readonly) NSMutableArray *systemSoundSources;
@property (readonly) NSMutableArray *visualizerSources;
@property (nonatomic, getter=_wantsFullGamut, setter=_setWantsFullGamut:) BOOL wantsFullGamut; // ivar: _wantsFullGamut


+(BOOL)supportsSecureCoding;
+(Class)_parametersClass;
+(Class)classForType:(id)arg0 ;
+(id)feedbackWithDictionaryRepresentation:(id)arg0 ;
+(id)type;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)_playedAtTime:(CGFloat)arg0 engine:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)play;
-(void)stop;


@end


#endif