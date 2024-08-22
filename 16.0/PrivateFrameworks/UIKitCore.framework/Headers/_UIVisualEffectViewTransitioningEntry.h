// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVISUALEFFECTVIEWTRANSITIONINGENTRY_H
#define _UIVISUALEFFECTVIEWTRANSITIONINGENTRY_H

@class UIVisualEffectViewEntry;


#import "_UIVisualEffectViewEntry.h"

@interface _UIVisualEffectViewTransitioningEntry : UIVisualEffectViewEntry {
    _UIVisualEffectViewEntry *_sourceEntry;
    _UIVisualEffectViewEntry *_destinationEntry;
}




-(BOOL)canTransitionToEffect:(id)arg0 ;
-(BOOL)isSameTypeOfEffect:(id)arg0 ;
-(BOOL)shouldAnimateProperty:(id)arg0 ;
-(id)copyForTransitionOut;
-(id)copyForTransitionToEffect:(id)arg0 ;
-(id)description;
-(id)initWithSourceEntry:(id)arg0 destinationEntry:(id)arg1 ;
-(void)addEffectToView:(id)arg0 ;
-(void)applyIdentityEffectToView:(id)arg0 ;
-(void)applyRequestedEffectToView:(id)arg0 ;
-(void)removeEffectFromView:(id)arg0 ;


@end


#endif