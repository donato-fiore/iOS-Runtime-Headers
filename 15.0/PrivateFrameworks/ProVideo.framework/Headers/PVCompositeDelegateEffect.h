// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVCOMPOSITEDELEGATEEFFECT_H
#define PVCOMPOSITEDELEGATEEFFECT_H

@protocol PVCompositeDelegate;


#import "PVEffect.h"

@interface PVCompositeDelegateEffect : PVEffect {
    atomic<int> _loaded;
}


@property (retain, nonatomic) NSObject<PVCompositeDelegate> *renderDelegate; // ivar: _renderDelegate
@property (retain, nonatomic) id *userContext; // ivar: _userContext


+(void)registerEffects;
-(BOOL)loadEffect;
-(id)initWithEffectID:(id)arg0 ;
-(void)releaseEffect;


@end


#endif