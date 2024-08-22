// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNACTION_H
#define SCNACTION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCNAction : NSObject <NSCopying, NSSecureCoding>

 {
    *SCNCAction _caction;
}


@property (nonatomic) CGFloat duration;
@property (nonatomic) CGFloat speed;
@property (nonatomic) id *timingFunction;
@property (nonatomic) NSInteger timingMode;


+(BOOL)editingModeEnabled;
+(BOOL)supportsSecureCoding;
+(id)actionNamed:(id)arg0 ;
+(id)customActionWithDuration:(CGFloat)arg0 actionBlock:(id)arg1 ;
+(id)fadeInWithDuration:(CGFloat)arg0 ;
+(id)fadeOpacityBy:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)fadeOpacityTo:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)fadeOutWithDuration:(CGFloat)arg0 ;
+(id)group:(id)arg0 ;
+(id)hide;
+(id)javaScriptActionWithScript:(id)arg0 duration:(CGFloat)arg1 ;
+(id)moveBy:(struct SCNVector3 )arg0 duration:(CGFloat)arg1 ;
+(id)moveByX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 duration:(CGFloat)arg3 ;
+(id)moveTo:(struct SCNVector3 )arg0 duration:(CGFloat)arg1 ;
+(id)performSelector:(SEL)arg0 onTarget:(id)arg1 ;
+(id)playAudioSource:(id)arg0 waitForCompletion:(BOOL)arg1 ;
+(id)removeFromParentNode;
+(id)repeatAction:(id)arg0 count:(NSUInteger)arg1 ;
+(id)repeatActionForever:(id)arg0 ;
+(id)rotateByAngle:(CGFloat)arg0 aroundAxis:(struct SCNVector3 )arg1 duration:(CGFloat)arg2 ;
+(id)rotateByX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 duration:(CGFloat)arg3 ;
+(id)rotateToAxisAngle:(struct SCNVector4 )arg0 duration:(CGFloat)arg1 ;
+(id)rotateToX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 duration:(CGFloat)arg3 ;
+(id)rotateToX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 duration:(CGFloat)arg3 shortestUnitArc:(BOOL)arg4 ;
+(id)runAction:(id)arg0 onChildNodeWithName:(id)arg1 ;
+(id)runBlock:(id)arg0 ;
// +(id)runBlock:(id)arg0 queue:(unk)arg1  ;
+(id)scaleBy:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)scaleTo:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)sequence:(id)arg0 ;
+(id)unhide;
+(id)waitForDuration:(CGFloat)arg0 ;
+(id)waitForDuration:(CGFloat)arg0 withRange:(CGFloat)arg1 ;
+(void)setEditingModeEnabled:(BOOL)arg0 ;
-(BOOL)finished;
-(BOOL)isCustom;
-(BOOL)isRelative;
-(CGFloat)ratioForTime:(CGFloat)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)parameters;
-(id)reversedAction;
-(struct SCNCAction *)caction;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCompletionBlock:(id)arg0 ;
-(void)setCppAction:(*void)arg0 ;
-(void)setFinished:(BOOL)arg0 ;
-(void)setKey:(id)arg0 ;
-(void)timeJumpWithTarget:(id)arg0 timeOffset:(CGFloat)arg1 ;
-(void)updateWithTarget:(id)arg0 forTime:(CGFloat)arg1 ;
-(void)wasAddedToTarget:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)wasPausedWithTarget:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)wasRemovedFromTarget:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)willResumeWithTarget:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)willStartWithTarget:(id)arg0 atTime:(CGFloat)arg1 ;


@end


#endif