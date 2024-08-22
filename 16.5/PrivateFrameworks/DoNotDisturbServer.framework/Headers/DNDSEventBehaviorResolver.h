// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSEVENTBEHAVIORRESOLVER_H
#define DNDSEVENTBEHAVIORRESOLVER_H

@class CNContactStore, CNFavorites, NSMutableArray, NSString;
@protocol DNDSSysdiagnoseDataProvider, OS_dispatch_queue, DNDSModeRepository, DNDSEventBehaviorResolverDataSource;

#import <Foundation/Foundation.h>

#import "DNDSAuxiliaryStateMonitor.h"

@interface DNDSEventBehaviorResolver : NSObject <DNDSSysdiagnoseDataProvider>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<DNDSModeRepository> *_modeRepository;
    CNContactStore *_contactStore;
    DNDSAuxiliaryStateMonitor *_auxiliaryStateMonitor;
    CNFavorites *_favorites;
    NSMutableArray *_resolutionRecord;
}


@property (weak, nonatomic) NSObject<DNDSEventBehaviorResolverDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;


-(BOOL)_queue_eventSourceIsContact:(id)arg0 ;
-(BOOL)_queue_eventSourceIsContact:(id)arg0 inGroupWithIdentifier:(id)arg1 ;
-(BOOL)_queue_eventSourceIsEmergencyContact:(id)arg0 ;
-(BOOL)_queue_eventSourceIsFavorite:(id)arg0 ;
-(BOOL)_queue_eventSourceIsRepeat:(id)arg0 clientDetails:(id)arg1 date:(id)arg2 ;
-(BOOL)_queue_isBreakthroughAllowedForModeIdentifier:(id)arg0 withConfiguration:(id)arg1 application:(id)arg2 sender:(id)arg3 urgency:(NSUInteger)arg4 eventType:(NSUInteger)arg5 threadIdentifier:(id)arg6 filterCriteria:(id)arg7 notifyAnyway:(BOOL)arg8 reason:(*NSUInteger)arg9 ;
-(BOOL)_queue_isBreakthroughAllowedForSender:(id)arg0 eventType:(NSUInteger)arg1 clientDetails:(id)arg2 date:(id)arg3 reason:(*NSUInteger)arg4 ;
-(BOOL)_queue_shouldAdjustEventBehaviorForMirroring;
-(NSUInteger)_queue_resolveOutcomeForEventSender:(id)arg0 clientDetails:(id)arg1 date:(id)arg2 reason:(*NSUInteger)arg3 ;
-(id)_activeModeConfigurationForBehavior:(NSUInteger)arg0 ;
-(id)_legacyModeConfigurationForModeConfiguration:(id)arg0 ;
-(id)_queue_adjustEventBehaviorResolutionForAuxiliaryState:(id)arg0 ;
-(id)_queue_firstContactForPredicate:(id)arg0 ;
-(id)_queue_resolutionForModeWithConfiguration:(id)arg0 eventDetails:(id)arg1 clientDetails:(id)arg2 state:(id)arg3 date:(id)arg4 error:(*id)arg5 ;
-(id)_queue_resolveBehaviorForEventDetails:(id)arg0 clientDetails:(id)arg1 date:(id)arg2 error:(*id)arg3 ;
-(id)initWithModeRepository:(id)arg0 contactStore:(id)arg1 auxiliaryStateMonitor:(id)arg2 ;
-(id)resolutionForConfiguration:(id)arg0 eventDetails:(id)arg1 clientDetails:(id)arg2 date:(id)arg3 error:(*id)arg4 ;
-(id)resolveBehaviorForEventDetails:(id)arg0 clientDetails:(id)arg1 date:(id)arg2 error:(*id)arg3 ;
-(id)sysdiagnoseDataForDate:(id)arg0 redacted:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif