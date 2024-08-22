// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSCENESETTINGSUPDATER_H
#define SBSCENESETTINGSUPDATER_H

@class NSString, SBFTraitsParticipant, NSMutableArray, FBSDisplayConfiguration, FBScene;

#import <Foundation/Foundation.h>

#import "SBTraitsSceneParticipantDelegate.h"

@interface SBSceneSettingsUpdater : NSObject {
    NSString *_traitsRole;
    SBFTraitsParticipant *_traitsParticipant;
    NSMutableArray *_observers;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration; // ivar: _displayConfiguration
@property (nonatomic, getter=isForeground) BOOL foreground;
@property (nonatomic) CGFloat level;
@property (readonly, weak, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly, copy, nonatomic) NSString *scenePersistentIdentifier; // ivar: _scenePersistentIdentifier
@property (readonly, nonatomic) SBTraitsSceneParticipantDelegate *sceneTraitsDelegate; // ivar: _sceneTraitsDelegate
@property (retain, nonatomic) NSString *traitsRole;


+(void)__updateSceneInsetAndGeometrySettings:(id)arg0 forDisplayConfiguration:(id)arg1 ;
+(void)__updateSceneInsetSettings:(id)arg0 forDisplayConfiguration:(id)arg1 ;
+(void)safeUpdateScene:(id)arg0 withBlock:(id)arg1 ;
+(void)safeUpdateScene:(id)arg0 withDisplayConfiguration:(id)arg1 ;
+(void)safeUpdateScene:(id)arg0 withSceneLevel:(CGFloat)arg1 ;
+(void)safeUpdateScene:(id)arg0 withUserInterfaceStyle:(NSInteger)arg1 ;
-(id)addObserver:(id)arg0 ;
-(id)initWithScene:(id)arg0 displayConfiguration:(id)arg1 traitsRole:(id)arg2 persistentIdentifier:(id)arg3 level:(CGFloat)arg4 ;
-(void)__setupTraitsParticipantWithRole:(id)arg0 displayIdentity:(id)arg1 ;
-(void)_createTraitsParticipantIfNeededWithRole:(id)arg0 ;
-(void)_setPersistenceIdentifier:(id)arg0 ;
-(void)dealloc;


@end


#endif