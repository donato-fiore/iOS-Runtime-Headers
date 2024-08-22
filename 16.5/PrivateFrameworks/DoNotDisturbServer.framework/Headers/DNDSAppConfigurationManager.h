// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSAPPCONFIGURATIONMANAGER_H
#define DNDSAPPCONFIGURATIONMANAGER_H

@class NSMutableDictionary, NSHashTable, NSString;
@protocol DNDSSysdiagnoseDataProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DNDSAppSpecificSettingsManager.h"

@interface DNDSAppConfigurationManager : NSObject <DNDSSysdiagnoseDataProvider>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_predicates;
    DNDSAppSpecificSettingsManager *_appSpecificSettingsManager;
    NSHashTable *_delegates;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;


-(id)appActionForActionIdentifier:(id)arg0 applicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)appActionsForModeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)clearAppActionWithIdentifier:(id)arg0 forApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 ;
-(id)clearSystemActionWithIdentifier:(id)arg0 modeIdentifier:(id)arg1 ;
-(id)initWithAppSpecificSettingsManager:(id)arg0 ;
-(id)predicateForActionIdentifier:(id)arg0 forApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)predicateForApplicationIdentifier:(id)arg0 modeIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)setAppAction:(id)arg0 forApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 ;
-(id)setPredicate:(id)arg0 forActionIdentifier:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3 ;
-(id)setSystemAction:(id)arg0 modeIdentifier:(id)arg1 ;
-(id)setTargetContentIdentifierPrefix:(id)arg0 forActionIdentifier:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3 ;
-(id)sysdiagnoseDataForDate:(id)arg0 redacted:(BOOL)arg1 ;
-(id)systemActionForActionIdentifier:(id)arg0 modeIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)systemActionsForModeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)targetContentIdentifierPrefixForApplicationIdentifier:(id)arg0 modeIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)targetContentIdentifierPrefixesForModeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)updateSystemActionWithReverseAction:(id)arg0 actionIdentifier:(id)arg1 modeIdentifier:(id)arg2 ;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)invalidateAppContextForActionIdentifier:(id)arg0 applicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 ;
-(void)refreshWithAvailableModes:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif