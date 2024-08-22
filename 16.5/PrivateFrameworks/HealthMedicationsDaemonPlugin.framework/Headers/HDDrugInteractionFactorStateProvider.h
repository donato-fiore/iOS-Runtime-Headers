// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDRUGINTERACTIONFACTORSTATEPROVIDER_H
#define HDDRUGINTERACTIONFACTORSTATEPROVIDER_H

@class HKObserverSet<HDDrugInteractionFactorStateObserver>, NSUserDefaults, HDDaemon;
@protocol HDDrugInteractionFactorStateProvider;

#import <Foundation/Foundation.h>


@interface HDDrugInteractionFactorStateProvider : NSObject <HDDrugInteractionFactorStateProvider>

 {
    HKObserverSet<HDDrugInteractionFactorStateObserver> *_observers;
    os_unfair_lock_s _lock;
    NSUserDefaults *_lock_medicationsUserDefaults;
    BOOL _lock_isAlcoholDrugInteractionFactorEnabled;
    BOOL _lock_isMarijuanaDrugInteractionFactorEnabled;
    BOOL _lock_isTobaccoDrugInteractionFactorEnabled;
}


@property (readonly, weak, nonatomic) HDDaemon *daemon; // ivar: _daemon


-(NSInteger)hasDrugInteractionFactorInProfile:(id)arg0 ;
-(id)init;
-(id)initWithDaemon:(id)arg0 ;
-(void)addDrugInteractionFactorStateObserver:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)monitorDrugInteractionFactorsInProfile:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeDrugInteractionFactorStateObserver:(id)arg0 ;


@end


#endif