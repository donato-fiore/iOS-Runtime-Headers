// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVEFFECTCOMPONENT_H
#define PVEFFECTCOMPONENT_H

@class NSString;
@protocol PVEffectLoadDelegate, PVEffectPropertyDelegate;

#import <Foundation/Foundation.h>

#import "PVEffect.h"

@interface PVEffectComponent : NSObject <PVEffectLoadDelegate, PVEffectPropertyDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) PVEffect *effect; // ivar: _effect
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithEffect:(id)arg0 ;
-(void)effect:(id)arg0 updateProperties:(id)arg1 allProperties:(id)arg2 ;
-(void)effectDidLoad:(id)arg0 isReady:(BOOL)arg1 ;
-(void)effectDidUnload:(id)arg0 ;


@end


#endif