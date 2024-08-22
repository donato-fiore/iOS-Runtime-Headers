// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFUISIRITAPPANDISMISSALPOLICYMANAGER_H
#define AFUISIRITAPPANDISMISSALPOLICYMANAGER_H

@protocol AFUISiriTapPanDismissalPolicyManagerDelegate;

#import <Foundation/Foundation.h>


@interface AFUISiriTapPanDismissalPolicyManager : NSObject

@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) NSObject<AFUISiriTapPanDismissalPolicyManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=_dimmingLayerVisible, setter=_setDimmingLayerVisible:) BOOL dimmingLayerVisible; // ivar: _dimmingLayerVisible
@property (nonatomic, getter=_dismissalPolicy, setter=_setDismissalPolicy:) NSInteger dismissalPolicy; // ivar: _dismissalPolicy
@property (nonatomic, getter=_idleAndQuiet, setter=_setIdleAndQuiet:) BOOL idleAndQuiet; // ivar: _idleAndQuiet
@property (nonatomic, getter=_shouldDismissForTapsAndPans, setter=_setShouldDismissForTapsAndPans:) BOOL shouldDismissForTapsAndPans; // ivar: _shouldDismissForTapsAndPans


-(id)initWithPolicy:(NSInteger)arg0 delegate:(id)arg1 ;
-(void)_dismissalPolicyForPassThroughAlways:(BOOL)arg0 forSessionState:(NSInteger)arg1 ;
-(void)_dismissalPolicyForPassThroughUnlessDimmed:(BOOL)arg0 forSessionState:(NSInteger)arg1 ;
-(void)_updateDelegateOfPolicyChange;
-(void)dimmingLayerVisibilityDidChange:(BOOL)arg0 forSessionState:(NSInteger)arg1 ;
-(void)idleAndQuietDidChange:(BOOL)arg0 forSessionState:(NSInteger)arg1 ;
-(void)idleAndQuietDidChange:(BOOL)arg0 forSessionState:(NSInteger)arg1 dimmingLayerVisible:(BOOL)arg2 ;
-(void)invalidate;


@end


#endif