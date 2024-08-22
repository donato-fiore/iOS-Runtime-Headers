// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBZSTACKRESOLVERTESTRECIPE_H
#define SBZSTACKRESOLVERTESTRECIPE_H

@class NSString, SBFZStackParticipant;
@protocol SBFZStackParticipantDelegate, SBTestRecipe;

#import <Foundation/Foundation.h>

#import "SBWindowScene.h"

@interface SBZStackResolverTestRecipe : NSObject <SBFZStackParticipantDelegate, SBTestRecipe>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBFZStackParticipant *participant; // ivar: _participant
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsHomeGesture; // ivar: _wantsHomeGesture
@property (weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


-(id)title;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;
-(void)windowSceneDidUpdate:(id)arg0 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif