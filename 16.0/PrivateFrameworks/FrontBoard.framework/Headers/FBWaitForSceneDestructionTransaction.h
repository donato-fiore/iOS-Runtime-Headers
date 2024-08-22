// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBWAITFORSCENEDESTRUCTIONTRANSACTION_H
#define FBWAITFORSCENEDESTRUCTIONTRANSACTION_H

@class NSString;
@protocol FBSceneObserver;


#import "FBTransaction.h"
#import "FBScene.h"

@interface FBWaitForSceneDestructionTransaction : FBTransaction <FBSceneObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FBScene *scene; // ivar: _sceneToWaitForDeath
@property (readonly) Class superclass;


-(BOOL)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(id)initWithScene:(id)arg0 ;
-(void)_begin;
-(void)_didComplete;
-(void)dealloc;
-(void)sceneDidInvalidate:(id)arg0 ;


@end


#endif