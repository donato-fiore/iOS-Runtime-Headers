// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGCOMMAND_H
#define PGCOMMAND_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PGCommand : NSObject

@property (readonly, nonatomic) BOOL associatedBoolValue;
@property (readonly, nonatomic) CGFloat associatedDoubleValue;
@property (readonly, nonatomic) NSInteger associatedIntegerValue;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation; // ivar: _dictionaryRepresentation
@property (readonly, nonatomic) NSInteger faceTimeAction;
@property (readonly, nonatomic) NSInteger playbackAction;
@property (readonly, nonatomic) NSInteger systemAction;
@property (readonly, nonatomic) NSInteger testingAction;


+(id)commandForBeginInterruption;
+(id)commandForCancelPIP;
+(id)commandForEndInterruptionWithShouldResumeSuggestion:(BOOL)arg0 ;
+(id)commandForEndOrLeaveActivityRequested;
+(id)commandForFaceTimeAction:(NSInteger)arg0 ;
+(id)commandForFaceTimeAction:(NSInteger)arg0 associatedBoolValue:(BOOL)arg1 ;
+(id)commandForFaceTimeAction:(NSInteger)arg0 associatedIntegerValue:(NSInteger)arg1 ;
+(id)commandForInvalidateFromProxy;
+(id)commandForMenuItemSelected:(NSInteger)arg0 ;
+(id)commandForPlaybackAction:(NSInteger)arg0 ;
+(id)commandForPlaybackAction:(NSInteger)arg0 associatedBoolValue:(BOOL)arg1 ;
+(id)commandForPlaybackAction:(NSInteger)arg0 associatedDoubleValue:(CGFloat)arg1 ;
+(id)commandForRestoreFromPIP;
+(id)commandForSendActionButtonTapped;
+(id)commandForSetCameraEnabled:(BOOL)arg0 ;
+(id)commandForSetMicrophoneMuted:(BOOL)arg0 ;
+(id)commandForSetMuted:(BOOL)arg0 ;
+(id)commandForSetPlaying:(BOOL)arg0 ;
+(id)commandForSetSuspended:(BOOL)arg0 ;
+(id)commandForShowHUD;
+(id)commandForSkipByInterval:(CGFloat)arg0 ;
+(id)commandForSkipPreroll;
+(id)commandForSkipToLive;
+(id)commandForStartPIP;
+(id)commandForSwitchCamera;
+(id)commandForSystemAction:(NSInteger)arg0 ;
+(id)commandForTestStartPIP;
+(id)commandForTestingAction:(NSInteger)arg0 ;
+(id)commandForToggleControlsVisibility;
+(id)commandForToggleZoom;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)appendDescriptionForKey:(NSInteger)arg0 value:(id)arg1 toBuilder:(id)arg2 ;


@end


#endif