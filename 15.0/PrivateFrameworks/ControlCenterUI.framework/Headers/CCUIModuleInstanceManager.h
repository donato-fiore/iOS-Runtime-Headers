// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCUIMODULEINSTANCEMANAGER_H
#define CCUIMODULEINSTANCEMANAGER_H

@class CCSModuleRepository, NSMutableDictionary, NSHashTable, NSString, NSSet, NSArray;
@protocol CCSModuleRepositoryObserver, CCUIContentModuleContextDelegate, OS_dispatch_queue, CCUIControlCenterSystemAgent;

#import <Foundation/Foundation.h>


@interface CCUIModuleInstanceManager : NSObject <CCSModuleRepositoryObserver, CCUIContentModuleContextDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<CCUIControlCenterSystemAgent> *_systemAgent;
    CCSModuleRepository *_repository;
    NSMutableDictionary *_moduleInstanceByIdentifier;
    NSHashTable *_observers;
}


@property (weak, nonatomic) NSObject<CCUIContentModuleContextDelegate> *contextDelegate; // ivar: _contextDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSSet *enabledModuleIdentifiers; // ivar: _enabledModuleIdentifiers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *moduleInstances;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)initialize;
+(void)setupSharedInstanceWithSystemAgent:(id)arg0 ;
-(BOOL)loadModuleWithBundleIdentifier:(id)arg0 ;
-(id)_initWithSystemAgent:(id)arg0 repository:(id)arg1 ;
-(id)_instantiateModuleWithMetadata:(id)arg0 ;
-(id)_loadBundlesForModuleMetadata:(id)arg0 ;
-(id)contentModuleContext:(id)arg0 requestsSensorActivityDataForActiveSensorType:(NSUInteger)arg1 ;
-(struct CCUIModuleLayoutSize )moduleLayoutSizeForContentModuleContext:(id)arg0 forOrientation:(NSInteger)arg1 ;
-(void)_loadBundlesForModuleMetadata:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_runBlockOnObservers:(id)arg0 ;
-(void)_updateModuleInstances;
-(void)addObserver:(id)arg0 ;
-(void)contentModuleContext:(id)arg0 didUpdateHomeGestureDismissalAllowed:(BOOL)arg1 ;
-(void)contentModuleContext:(id)arg0 enqueueStatusUpdate:(id)arg1 ;
-(void)dismissControlCenterForContentModuleContext:(id)arg0 ;
-(void)dismissExpandedViewForContentModuleContext:(id)arg0 ;
-(void)loadableModulesChangedForModuleRepository:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)requestExpandModuleForContentModuleContext:(id)arg0 ;
-(void)requestModuleLayoutSizeUpdateForContentModuleContext:(id)arg0 ;


@end


#endif