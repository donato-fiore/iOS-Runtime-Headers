// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKACTION_H
#define SKACTION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKAction : NSObject <NSCopying, NSSecureCoding>

 {
    *SKCAction _caction;
}


@property (nonatomic) CGFloat duration;
@property (nonatomic) BOOL finished;
@property (nonatomic) CGFloat speed;
@property (copy, nonatomic) id *timingFunction;
@property (nonatomic) NSInteger timingMode;


+(BOOL)supportsSecureCoding;
+(Class)unarchiver:(id)arg0 cannotDecodeObjectOfClassName:(id)arg1 originalClasses:(id)arg2 ;
+(id)actionNamed:(id)arg0 ;
+(id)actionNamed:(id)arg0 duration:(CGFloat)arg1 ;
+(id)actionNamed:(id)arg0 fromURL:(id)arg1 ;
+(id)actionNamed:(id)arg0 fromURL:(id)arg1 duration:(CGFloat)arg2 ;
+(id)animateWithNormalTextures:(id)arg0 timePerFrame:(CGFloat)arg1 ;
+(id)animateWithNormalTextures:(id)arg0 timePerFrame:(CGFloat)arg1 resize:(BOOL)arg2 restore:(BOOL)arg3 ;
+(id)animateWithTextures:(id)arg0 timePerFrame:(CGFloat)arg1 ;
+(id)animateWithTextures:(id)arg0 timePerFrame:(CGFloat)arg1 resize:(BOOL)arg2 restore:(BOOL)arg3 ;
+(id)animateWithWarps:(id)arg0 times:(id)arg1 ;
+(id)animateWithWarps:(id)arg0 times:(id)arg1 restore:(BOOL)arg2 ;
+(id)applyAngularImpulse:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)applyForce:(struct CGVector )arg0 atPoint:(struct CGPoint )arg1 duration:(CGFloat)arg2 ;
+(id)applyForce:(struct CGVector )arg0 duration:(CGFloat)arg1 ;
+(id)applyImpulse:(struct CGVector )arg0 atPoint:(struct CGPoint )arg1 duration:(CGFloat)arg2 ;
+(id)applyImpulse:(struct CGVector )arg0 duration:(CGFloat)arg1 ;
+(id)applyTorque:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)changeChargeBy:(float)arg0 duration:(CGFloat)arg1 ;
+(id)changeChargeTo:(float)arg0 duration:(CGFloat)arg1 ;
+(id)changeMassBy:(float)arg0 duration:(CGFloat)arg1 ;
+(id)changeMassTo:(float)arg0 duration:(CGFloat)arg1 ;
+(id)changeObstructionBy:(float)arg0 duration:(CGFloat)arg1 ;
+(id)changeObstructionTo:(float)arg0 duration:(CGFloat)arg1 ;
+(id)changeOcclusionBy:(float)arg0 duration:(CGFloat)arg1 ;
+(id)changeOcclusionTo:(float)arg0 duration:(CGFloat)arg1 ;
+(id)changePlaybackRateBy:(float)arg0 duration:(CGFloat)arg1 ;
+(id)changePlaybackRateTo:(float)arg0 duration:(CGFloat)arg1 ;
+(id)changeReverbBy:(float)arg0 duration:(CGFloat)arg1 ;
+(id)changeReverbTo:(float)arg0 duration:(CGFloat)arg1 ;
+(id)changeVolumeBy:(float)arg0 duration:(CGFloat)arg1 ;
+(id)changeVolumeTo:(float)arg0 duration:(CGFloat)arg1 ;
+(id)colorizeWithColor:(id)arg0 colorBlendFactor:(CGFloat)arg1 duration:(CGFloat)arg2 ;
+(id)colorizeWithColorBlendFactor:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)customActionWithDuration:(CGFloat)arg0 actionBlock:(id)arg1 ;
+(id)fadeAlphaBy:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)fadeAlphaTo:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)fadeInWithDuration:(CGFloat)arg0 ;
+(id)fadeOutWithDuration:(CGFloat)arg0 ;
+(id)falloffBy:(float)arg0 duration:(CGFloat)arg1 ;
+(id)falloffTo:(float)arg0 duration:(CGFloat)arg1 ;
+(id)findNamedActionInBundle:(id)arg0 ;
+(id)followPath:(struct CGPath *)arg0 asOffset:(BOOL)arg1 orientToPath:(BOOL)arg2 duration:(CGFloat)arg3 ;
+(id)followPath:(struct CGPath *)arg0 asOffset:(BOOL)arg1 orientToPath:(BOOL)arg2 speed:(CGFloat)arg3 ;
+(id)followPath:(struct CGPath *)arg0 duration:(CGFloat)arg1 ;
+(id)followPath:(struct CGPath *)arg0 speed:(CGFloat)arg1 ;
+(id)group:(id)arg0 ;
+(id)hide;
+(id)javaScriptActionWithDuration:(CGFloat)arg0 script:(id)arg1 ;
+(id)moveBY:(struct CGVector )arg0 duration:(CGFloat)arg1 ;
+(id)moveBy:(struct CGVector )arg0 duration:(CGFloat)arg1 ;
+(id)moveByX:(CGFloat)arg0 y:(CGFloat)arg1 duration:(CGFloat)arg2 ;
+(id)moveTo:(struct CGPoint )arg0 duration:(CGFloat)arg1 ;
+(id)moveToX:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)moveToY:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)pause;
+(id)performSelector:(SEL)arg0 onTarget:(id)arg1 ;
+(id)play;
+(id)playSoundFileNamed:(id)arg0 ;
+(id)playSoundFileNamed:(id)arg0 atPosition:(struct CGPoint )arg1 waitForCompletion:(BOOL)arg2 ;
+(id)playSoundFileNamed:(id)arg0 waitForCompletion:(BOOL)arg1 ;
+(id)reachTo:(struct CGPoint )arg0 rootNode:(id)arg1 duration:(CGFloat)arg2 ;
+(id)reachTo:(struct CGPoint )arg0 rootNode:(id)arg1 velocity:(CGFloat)arg2 ;
+(id)reachToNode:(id)arg0 rootNode:(id)arg1 duration:(CGFloat)arg2 ;
+(id)reachToNode:(id)arg0 rootNode:(id)arg1 velocity:(CGFloat)arg2 ;
+(id)recursivePathsForResourcesOfType:(id)arg0 inDirectory:(id)arg1 ;
+(id)removeFromParent;
+(id)repeatAction:(id)arg0 count:(NSUInteger)arg1 ;
+(id)repeatActionForever:(id)arg0 ;
+(id)resizeByWidth:(CGFloat)arg0 height:(CGFloat)arg1 duration:(CGFloat)arg2 ;
+(id)resizeToHeight:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)resizeToWidth:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)resizeToWidth:(CGFloat)arg0 height:(CGFloat)arg1 duration:(CGFloat)arg2 ;
+(id)rotateByAngle:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)rotateToAngle:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)rotateToAngle:(CGFloat)arg0 duration:(CGFloat)arg1 shortestUnitArc:(BOOL)arg2 ;
+(id)runAction:(id)arg0 onChildWithName:(id)arg1 ;
+(id)runBlock:(id)arg0 ;
// +(id)runBlock:(id)arg0 queue:(unk)arg1  ;
+(id)scaleBy:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)scaleTo:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)scaleToSize:(struct CGSize )arg0 duration:(CGFloat)arg1 ;
+(id)scaleXBy:(CGFloat)arg0 y:(CGFloat)arg1 duration:(CGFloat)arg2 ;
+(id)scaleXTo:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)scaleXTo:(CGFloat)arg0 y:(CGFloat)arg1 duration:(CGFloat)arg2 ;
+(id)scaleYTo:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)sequence:(id)arg0 ;
+(id)setNormalTexture:(id)arg0 ;
+(id)setNormalTexture:(id)arg0 resize:(BOOL)arg1 ;
+(id)setTexture:(id)arg0 ;
+(id)setTexture:(id)arg0 resize:(BOOL)arg1 ;
+(id)speedBy:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)speedTo:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)stereoPanBy:(float)arg0 duration:(CGFloat)arg1 ;
+(id)stereoPanTo:(float)arg0 duration:(CGFloat)arg1 ;
+(id)stop;
+(id)strengthBy:(float)arg0 duration:(CGFloat)arg1 ;
+(id)strengthTo:(float)arg0 duration:(CGFloat)arg1 ;
+(id)unhide;
+(id)waitForDuration:(CGFloat)arg0 ;
+(id)waitForDuration:(CGFloat)arg0 withRange:(CGFloat)arg1 ;
+(id)warpTo:(id)arg0 duration:(CGFloat)arg1 ;
+(void)addActionsToCachedActionTable:(id)arg0 ;
+(void)clearActionTableCache;
+(void)convertAction:(id)arg0 toDuration:(CGFloat)arg1 ;
-(BOOL)isEqualToAction:(id)arg0 ;
-(CGFloat)ratioForTime:(CGFloat)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(id)subactions;
-(struct SKCAction *)caction;
-(void)commonInit;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCppAction:(*void)arg0 ;
-(void)updateWithTarget:(id)arg0 forTime:(CGFloat)arg1 ;
-(void)wasAddedToTarget:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)wasPausedWithTarget:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)wasRemovedFromTarget:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)willResumeWithTarget:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)willStartWithTarget:(id)arg0 atTime:(CGFloat)arg1 ;


@end


#endif