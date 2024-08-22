// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGPLAYBACKSTATE_H
#define PGPLAYBACKSTATE_H

@class NSString, NSDictionary, NSMutableDictionary;
@protocol PGMutablePlaybackStateFaceTimeSupport, PGMutablePlaybackStateSecurityCameraSupport, PGPlaybackStateDiffConsumer, PGMutablePlaybackState, NSCopying;

#import <Foundation/Foundation.h>

#import "PGPlaybackStatePrerollAttributes.h"

@interface PGPlaybackState : NSObject <PGMutablePlaybackStateFaceTimeSupport, PGMutablePlaybackStateSecurityCameraSupport, PGPlaybackStateDiffConsumer, PGMutablePlaybackState, NSCopying>

 {
    PGPlaybackStatePrerollAttributes *_prerollAttributes;
}


@property (readonly, nonatomic) NSInteger backgroundAudioPolicy;
@property (nonatomic, getter=isCameraActive) BOOL cameraActive;
@property (nonatomic) BOOL cameraHasMicrophone;
@property (nonatomic) BOOL canSwitchCamera;
@property (readonly, nonatomic) CGFloat contentDuration;
@property (readonly, nonatomic) NSInteger contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL disablesLayerCloning;
@property (nonatomic) BOOL disablesLayerCloning;
@property (readonly, nonatomic) CGFloat elapsedTime;
@property (readonly, nonatomic) BOOL hasInvalidTiming;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;
@property (readonly, nonatomic) NSMutableDictionary *mutableDictionary; // ivar: _mutableDictionary
@property (readonly, nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) CGFloat normalizedProgress;
@property (readonly, nonatomic) CGFloat playbackRate;
@property (readonly, nonatomic) PGPlaybackStatePrerollAttributes *prerollAttributes;
@property (readonly, nonatomic) BOOL requiresLinearPlayback;
@property (readonly, nonatomic, getter=isRoutingVideoToHostedWindow) BOOL routingVideoToHostedWindow;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsFaceTimeActions;
@property (readonly, nonatomic) BOOL supportsMicroPIP;
@property (readonly, nonatomic) NSInteger timeControlStatus;


+(id)defaultValueForKey:(id)arg0 ;
+(id)keysForEqualityOfNumberValues;
-(BOOL)_boolForKey:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToPlaybackState:(id)arg0 ;
-(CGFloat)_doubleForKey:(NSInteger)arg0 ;
-(CGFloat)anchorContentTime;
-(CGFloat)anchorWallTime;
-(NSInteger)_integerForKey:(NSInteger)arg0 ;
-(id)_dictionaryForKey:(NSInteger)arg0 ;
-(id)_numberForKey:(NSInteger)arg0 ;
-(id)_stringForKey:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)diffFromPlaybackState:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_ensureMutableDictionary;
-(void)_setBool:(BOOL)arg0 forKey:(NSInteger)arg1 ;
-(void)_setDictionaryOrNotFound:(id)arg0 forKey:(NSInteger)arg1 ;
-(void)_setDouble:(CGFloat)arg0 forKey:(NSInteger)arg1 ;
-(void)_setInteger:(NSInteger)arg0 forKey:(NSInteger)arg1 ;
-(void)_setStateValue:(id)arg0 forKey:(NSInteger)arg1 ;
-(void)appendDescriptionForKey:(NSInteger)arg0 value:(id)arg1 toBuilder:(id)arg2 ;
-(void)updatePlaybackStateWithDiff:(id)arg0 ;


@end


#endif