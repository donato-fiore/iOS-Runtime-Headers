// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CFXEFFECTCOMPOSITION_H
#define CFXEFFECTCOMPOSITION_H

@class NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CFXEffectComposition : NSObject

@property (retain, nonatomic) NSMutableArray *animojis; // ivar: _animojis
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // ivar: _concurrentQueue
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSArray *effects;
@property (retain, nonatomic) NSMutableArray *filters; // ivar: _filters
@property (readonly, nonatomic) BOOL hasFaceTrackedOverlays;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSArray *jtEffects;
@property (retain, nonatomic) NSMutableArray *overlays; // ivar: _overlays
@property (readonly, nonatomic) BOOL requiresFaceTracking;


-(BOOL)hasEffectOfType:(id)arg0 ;
-(NSUInteger)indexOfEffect:(id)arg0 ;
-(id)CFX_effectsForJettyType:(int)arg0 ;
-(id)init;
-(id)jtEffectsForType:(int)arg0 ;
-(void)addEffect:(id)arg0 completion:(id)arg1 ;
-(void)insertEffectAtIndex:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeAllEffects:(id)arg0 ;
-(void)removeAllEffectsOfType:(id)arg0 completion:(id)arg1 ;
-(void)removeAllOverlayEffects:(id)arg0 ;
-(void)removeEffect:(id)arg0 completion:(id)arg1 ;


@end


#endif