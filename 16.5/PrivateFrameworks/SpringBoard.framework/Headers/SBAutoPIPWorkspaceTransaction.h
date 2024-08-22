// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAUTOPIPWORKSPACETRANSACTION_H
#define SBAUTOPIPWORKSPACETRANSACTION_H

@class NSString;


#import "SBWorkspaceTransaction.h"
#import "SBPIPControllerCoordinator.h"
#import "SBPIPController.h"
#import "SBApplicationSceneEntity.h"

@interface SBAutoPIPWorkspaceTransaction : SBWorkspaceTransaction {
    int _pidToPIP;
    NSInteger _inferredTransitionStyle;
    SBPIPControllerCoordinator *_pipCoordinator;
    SBPIPController *_pipController;
    NSString *_reason;
    BOOL _startPictureInPictureDidComplete;
}


@property (readonly, copy, nonatomic) SBApplicationSceneEntity *entityToPIP; // ivar: _entityToPIP
@property (nonatomic) NSInteger transitionStyle; // ivar: _transitionStyle


+(BOOL)shouldAutoPIPEnteringBackgroundForRequest:(id)arg0 ;
+(BOOL)shouldAutoPIPEnteringBackgroundForRequest:(id)arg0 foundEntity:(*id)arg1 ;
+(BOOL)shouldAutoPIPEnteringBackgroundForRequest:(id)arg0 foundEntity:(*id)arg1 tetheringMode:(*NSInteger)arg2 transitionStyle:(*NSInteger)arg3 reason:(NSInteger)arg4 ;
+(BOOL)shouldAutoPIPEnteringBackgroundForRequest:(id)arg0 foundEntity:(*id)arg1 transitionStyle:(*NSInteger)arg2 ;
+(BOOL)shouldAutoPIPEnteringBackgroundForRequest:(id)arg0 reason:(NSInteger)arg1 ;
+(BOOL)shouldAutoPIPEnteringBackgroundForRequest:(id)arg0 tetheringMode:(*NSInteger)arg1 reason:(NSInteger)arg2 ;
+(BOOL)shouldAutoPIPEnteringBackgroundForRequest:(id)arg0 transitionStyle:(*NSInteger)arg1 ;
-(BOOL)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(id)initWithTransitionRequest:(id)arg0 ;
-(id)initWithTransitionRequest:(id)arg0 includeActiveAppEntity:(BOOL)arg1 reason:(NSInteger)arg2 ;
-(void)_begin;
-(void)_didComplete;


@end


#endif