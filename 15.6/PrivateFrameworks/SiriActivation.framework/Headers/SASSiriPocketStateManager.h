// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASSIRIPOCKETSTATEMANAGER_H
#define SASSIRIPOCKETSTATEMANAGER_H

@class NSString, CMPocketStateManager;
@protocol CMPocketStateDelegate;

#import <Foundation/Foundation.h>


@interface SASSiriPocketStateManager : NSObject <CMPocketStateDelegate>



@property (nonatomic, getter=_currentPocketState, setter=_setCurrentPocketState:) NSInteger currentPocketState; // ivar: _currentPocketState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_pocketStateManager, setter=_setPocketStateManager:) CMPocketStateManager *pocketStateManager; // ivar: _pocketStateManager
@property (readonly) Class superclass;


+(id)new;
+(id)sharedManager;
-(BOOL)pocketStateShouldPreventVoiceTrigger;
-(BOOL)pocketStateShouldPreventVoiceTriggerForActivationRequest:(id)arg0 ;
-(id)_init;
-(id)_stringForPocketState:(NSInteger)arg0 ;
-(id)init;
-(void)_updateForPocketState:(NSInteger)arg0 ;
-(void)pocketStateManager:(id)arg0 didUpdateState:(NSInteger)arg1 ;
-(void)queryForPocketStateWithCompletion:(id)arg0 ;


@end


#endif