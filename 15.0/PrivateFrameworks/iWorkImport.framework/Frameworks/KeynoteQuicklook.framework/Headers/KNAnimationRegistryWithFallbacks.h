// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNANIMATIONREGISTRYWITHFALLBACKS_H
#define KNANIMATIONREGISTRYWITHFALLBACKS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "KNAnimationRegistry.h"

@interface KNAnimationRegistryWithFallbacks : NSObject {
    KNAnimationRegistry *_registry;
    NSMutableDictionary *_fallbacks;
}




-(id)animationInfoForEffectIdentifier:(id)arg0 animationType:(NSInteger)arg1 ;
-(id)init;
-(void)registerFallbackEffectIdentifer:(id)arg0 forEffectIdentifer:(id)arg1 ;


@end


#endif