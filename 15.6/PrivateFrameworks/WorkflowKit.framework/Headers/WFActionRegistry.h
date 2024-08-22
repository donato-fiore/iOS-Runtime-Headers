// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFACTIONREGISTRY_H
#define WFACTIONREGISTRY_H

@class NSArray, NSSet, NSMapTable, NSDictionary, NSString;
@protocol WFActionProviderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFActionRegistry : NSObject <WFActionProviderDelegate>



@property (readonly, nonatomic) NSArray *actionProvidersForFilling; // ivar: _actionProvidersForFilling
@property (readonly, nonatomic) NSArray *actionProvidersForLoading; // ivar: _actionProvidersForLoading
@property (readonly, nonatomic) NSSet *actions;
@property (readonly, nonatomic) NSMapTable *actionsByActionProvider; // ivar: _actionsByActionProvider
@property (readonly, nonatomic) NSDictionary *actionsByCategory; // ivar: _actionsByCategory
@property (readonly, nonatomic) NSDictionary *actionsByIdentifier; // ivar: _actionsByIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheUpdateAndFillQueue; // ivar: _cacheUpdateAndFillQueue
@property (readonly, nonatomic) NSSet *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *identifiersOfActionsDisabledOnWatch;
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue; // ivar: _stateAccessQueue
@property (readonly) Class superclass;


+(id)sharedRegistry;
+(id)supportedContentItemClassesForContentSelection;
-(id)actionsBySpecializingActions:(id)arg0 forHomes:(id)arg1 ;
-(id)actionsForAppWithIdentifier:(id)arg0 ;
-(id)actionsForCategory:(id)arg0 ;
-(id)createActionForSelectingContentOfType:(Class)arg0 serializedParameters:(id)arg1 ;
-(id)createActionWithDonation:(id)arg0 ;
-(id)createActionWithIdentifier:(id)arg0 serializedParameters:(id)arg1 ;
-(id)createActionWithShortcut:(id)arg0 error:(*id)arg1 ;
-(id)createActionsForSelectingContentOfTypes:(id)arg0 serializedParameterArray:(id)arg1 ;
-(id)createActionsWithIdentifiers:(id)arg0 serializedParameterArray:(id)arg1 ;
-(id)defaultSerializedParametersForActionSelectingContentOfType:(Class)arg0 ;
-(id)handleIntentActionForDonatedIntent:(id)arg0 ;
-(id)init;
-(id)replacementActionForActionIdentifier:(id)arg0 serializedParameters:(id)arg1 ;
-(id)residentBasedActionsForHome:(id)arg0 residentCompatible:(BOOL)arg1 ;
-(id)residentCompatibleActionsForCategory:(id)arg0 home:(id)arg1 ;
-(id)residentCompatibleActionsForHome:(id)arg0 ;
-(id)residentCompatibleActionsFromActions:(id)arg0 inHome:(id)arg1 ;
-(id)suggestionsForHome:(id)arg0 includingRelatedActions:(BOOL)arg1 ;
-(id)updatedActionForResidentCompatibility:(id)arg0 inHome:(id)arg1 ;
-(void)actionProviderDidChange:(id)arg0 updatedActions:(id)arg1 removedActions:(id)arg2 addedActions:(id)arg3 ;
-(void)actionsBySpecializingActions:(id)arg0 forHomes:(id)arg1 completionBlock:(id)arg2 ;
-(void)addActions:(id)arg0 fromActionProvider:(id)arg1 ;
-(void)fill;
-(void)fillActionProviders:(id)arg0 ;
-(void)removeActionsWithIdentifiers:(id)arg0 fromActionProvider:(id)arg1 ;
-(void)updateCacheWithCompletion:(id)arg0 ;
-(void)updateCachesAndFill;


@end


#endif