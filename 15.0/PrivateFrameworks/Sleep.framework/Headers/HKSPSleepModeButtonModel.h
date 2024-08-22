// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPSLEEPMODEBUTTONMODEL_H
#define HKSPSLEEPMODEBUTTONMODEL_H

@class _HKBehavior, NSString;
@protocol HKSPSleepStorePrivateObserver, HKSPSleepModeButtonModelDelegate;

#import <Foundation/Foundation.h>

#import "HKSPSleepStore.h"

@interface HKSPSleepModeButtonModel : NSObject <HKSPSleepStorePrivateObserver>



@property (readonly, nonatomic) _HKBehavior *behavior; // ivar: _behavior
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HKSPSleepModeButtonModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) NSInteger sleepMode; // ivar: _sleepMode
@property (readonly, nonatomic) HKSPSleepStore *sleepStore; // ivar: _sleepStore
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(id)initWithSleepStore:(id)arg0 delegate:(id)arg1 behavior:(id)arg2 ;
-(void)_checkSleepModeState;
-(void)_launchAppForOnboarding;
-(void)_queue_updateStateWithSleepMode:(NSInteger)arg0 ;
-(void)_updateStateWithSleepMode:(NSInteger)arg0 ;
-(void)sleepStore:(id)arg0 sleepModeOnDidChange:(BOOL)arg1 ;


@end


#endif