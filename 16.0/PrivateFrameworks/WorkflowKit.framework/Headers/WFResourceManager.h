// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFRESOURCEMANAGER_H
#define WFRESOURCEMANAGER_H

@class NSSet, NSString, NSArray, NSMapTable, NSOrderedSet, NSMutableOrderedSet;
@protocol WFResourceNodeDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFResourceManager : NSObject <WFResourceNodeDelegate>



@property (readonly, nonatomic) NSSet *accessResources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didEvaluateAvailabilityOfNodes; // ivar: _didEvaluateAvailabilityOfNodes
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *resourceNodes; // ivar: _resourceNodes
@property (nonatomic) BOOL resourcesAvailable; // ivar: _resourcesAvailable
@property (nonatomic) BOOL resourcesRequiredForDisplayAvailable; // ivar: _resourcesRequiredForDisplayAvailable
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue; // ivar: _stateAccessQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMapTable *targetSelectorTable; // ivar: _targetSelectorTable
@property (retain, nonatomic) NSOrderedSet *unavailableResourceErrors; // ivar: _unavailableResourceErrors
@property (retain, nonatomic) NSMutableOrderedSet *unavailableResources; // ivar: _unavailableResources


-(BOOL)currentlyRequiresResourceOfClass:(Class)arg0 ;
-(BOOL)currentlyRequiresResourceOfClasses:(id)arg0 ;
-(BOOL)nodeIsAvailable:(id)arg0 error:(*id)arg1 ;
-(BOOL)nodeIsRelevant:(id)arg0 ;
-(id)currentlyRequiredResourcesOfClass:(Class)arg0 ;
-(id)initWithDefinitions:(id)arg0 ;
-(id)relevantNodes;
-(id)resourceObjectsConformingToProtocol:(id)arg0 ;
-(id)resourceObjectsOfClass:(Class)arg0 ;
-(id)resourceObjectsOfClasses:(id)arg0 ;
-(id)selectorSetForTarget:(id)arg0 ;
-(void)addResource:(id)arg0 ;
-(void)addResourceNodes:(id)arg0 ;
-(void)addResourceObjectsOfClassesOrProtocols:(id)arg0 withinNode:(id)arg1 toSet:(id)arg2 ;
-(void)addTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)evaluateAvailabilityOfNodesIfNeeded;
-(void)evaluateAvailabilityOfNodesWithChangedNode:(id)arg0 ;
-(void)makeAccessResourcesAvailableWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;
-(void)notifyTargets;
-(void)refreshAvailabilityOfRequiredResourcesOfClasses:(id)arg0 ;
-(void)removeResourceNodes:(id)arg0 ;
-(void)removeTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)resourceNodeAvailabilityChanged:(id)arg0 ;


@end


#endif