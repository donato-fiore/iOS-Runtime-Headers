// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUICORONAANIMATIONCONTROLLER_H
#define SBUICORONAANIMATIONCONTROLLER_H

@class NSHashTable, UIViewPropertyAnimator;

#import <Foundation/Foundation.h>


@interface SBUICoronaAnimationController : NSObject {
    NSHashTable *_participants;
}


@property (retain, nonatomic, getter=_propertyAnimator, setter=_setPropertyAnimator:) UIViewPropertyAnimator *propertyAnimator; // ivar: _propertyAnimator


+(id)animationSettingsForTransitionToStyle:(NSInteger)arg0 ;
-(id)_configurePropertyAnimatorIfNecessaryForChangeToUserInterfaceStyle:(NSInteger)arg0 ;
-(void)addParticipant:(id)arg0 ;
-(void)coronaDidChange:(NSInteger)arg0 ;
-(void)removeParticipant:(id)arg0 ;


@end


#endif