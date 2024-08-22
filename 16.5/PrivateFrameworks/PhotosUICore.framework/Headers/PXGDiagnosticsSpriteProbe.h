// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGDIAGNOSTICSSPRITEPROBE_H
#define PXGDIAGNOSTICSSPRITEPROBE_H


#import <Foundation/Foundation.h>


@interface PXGDiagnosticsSpriteProbe : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (copy, nonatomic) id *predicate; // ivar: _predicate
@property (copy, nonatomic) id *tagDescriptor; // ivar: _tagDescriptor


+(id)activeSpriteProbes;
+(id)spriteDataStore;
+(void)_recordEventIfNeededWithType:(NSInteger)arg0 layout:(id)arg1 oldState:(struct ? *)arg2 newState:(struct ? *)arg3 userInfo:(id)arg4 ;
+(void)didAdjustSprites:(struct ? )arg0 forAnimation:(id)arg1 appearing:(BOOL)arg2 ;
+(void)layout:(id)arg0 didChangeSprites:(struct ? )arg1 ;
+(void)layout:(id)arg0 didInsertSprites:(struct ? )arg1 ;
+(void)layout:(id)arg0 willChangeSprites:(struct ? )arg1 ;
+(void)layout:(id)arg0 willRemoveSprites:(struct ? )arg1 ;
+(void)shouldUseDoubleSidedAnimationForSprites:(struct ? )arg0 indexes:(id)arg1 animation:(id)arg2 ;
+(void)willAdjustSprites:(struct ? )arg0 forAnimation:(id)arg1 appearing:(BOOL)arg2 ;
+(void)willRequestTextureForSpriteWithGeometry:(struct ? *)arg0 style:(struct ? *)arg1 info:(struct ? *)arg2 inLayout:(id)arg3 textureInfo:(id)arg4 ;
-(id)descriptionForSpriteState:(struct ? *)arg0 ;
-(id)init;
-(void)_recordEventIfNeededWithType:(NSInteger)arg0 layout:(id)arg1 oldState:(struct ? *)arg2 newState:(struct ? *)arg3 userInfo:(id)arg4 ;
-(void)_recordEventWithType:(NSInteger)arg0 oldState:(struct ? *)arg1 newState:(struct ? *)arg2 userInfo:(id)arg3 ;


@end


#endif