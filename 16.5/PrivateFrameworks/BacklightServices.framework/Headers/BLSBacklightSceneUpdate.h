// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSBACKLIGHTSCENEUPDATE_H
#define BLSBACKLIGHTSCENEUPDATE_H


#import <Foundation/Foundation.h>

#import "BLSBacklightSceneUpdateContext.h"

@interface BLSBacklightSceneUpdate : NSObject {
    id *_sceneContentsUpdatedBlock;
    id *_performBacklightRampBlock;
    id *_sceneContentsAnimationCompleteBlock;
    os_unfair_lock_s _lock;
    BOOL _lock_sceneContentsUpdated;
    BOOL _lock_didStartBacklightRamp;
    BOOL _lock_animationComplete;
}


@property (readonly, nonatomic, getter=isAnimationComplete) BOOL animationComplete;
@property (readonly, nonatomic) BLSBacklightSceneUpdateContext *context; // ivar: _context
@property (readonly, nonatomic) BOOL didStartBacklightRamp;
@property (readonly, nonatomic) BOOL isUpdateToDateSpecifier; // ivar: _isUpdateToDateSpecifier
@property (readonly, nonatomic, getter=areSceneContentsUpdated) BOOL sceneContentsUpdated;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
// -(id)initWithVisualState:(id)arg0 previousVisualState:(id)arg1 frameSpecifier:(id)arg2 animated:(BOOL)arg3 triggerEvent:(id)arg4 touchTargetable:(BOOL)arg5 isUpdateToDateSpecifier:(BOOL)arg6 sceneContentsUpdated:(id)arg7 performBacklightRamp:(unk)arg8 sceneContentsAnimationComplete:(id)arg9  ;
-(void)performBacklightRampWithDuration:(CGFloat)arg0 ;
-(void)sceneContentsAnimationDidComplete;
-(void)sceneContentsDidUpdate;
-(void)setReplacedSceneUpdate:(id)arg0 ;


@end


#endif