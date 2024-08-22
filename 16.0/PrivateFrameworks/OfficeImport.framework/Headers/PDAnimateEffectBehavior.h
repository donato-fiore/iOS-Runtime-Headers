// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDANIMATEEFFECTBEHAVIOR_H
#define PDANIMATEEFFECTBEHAVIOR_H

@class NSMutableDictionary;


#import "PDAnimateBehavior.h"

@interface PDAnimateEffectBehavior : PDAnimateBehavior {
    BOOL mHasTransition;
    int mTransition;
}


@property (retain, nonatomic) NSMutableDictionary *propertyMap; // ivar: mPropertyMap


-(BOOL)hasProperties;
-(BOOL)hasTransition;
-(id)init;
-(int)transition;
-(void)setTransition:(int)arg0 ;


@end


#endif