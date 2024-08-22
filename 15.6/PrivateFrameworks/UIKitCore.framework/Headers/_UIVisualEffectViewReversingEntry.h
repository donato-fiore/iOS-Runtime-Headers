// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVISUALEFFECTVIEWREVERSINGENTRY_H
#define _UIVISUALEFFECTVIEWREVERSINGENTRY_H

@class UIVisualEffectViewEntry;


#import "_UIVisualEffectViewEntry.h"

@interface _UIVisualEffectViewReversingEntry : UIVisualEffectViewEntry {
    _UIVisualEffectViewEntry *_sourceEntry;
}




-(BOOL)canTransitionToEffect:(id)arg0 ;
-(BOOL)isSameTypeOfEffect:(id)arg0 ;
-(BOOL)shouldAnimateProperty:(id)arg0 ;
-(id)copyForTransitionOut;
-(id)copyForTransitionToEffect:(id)arg0 ;
-(id)description;
-(id)initWithViewEntry:(id)arg0 ;
-(void)addEffectToView:(id)arg0 ;
-(void)applyIdentityEffectToView:(id)arg0 ;
-(void)applyRequestedEffectToView:(id)arg0 ;
-(void)removeEffectFromView:(id)arg0 ;


@end


#endif