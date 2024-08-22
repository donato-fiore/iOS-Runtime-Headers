// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKEDITINGCONTEXTGROUP_H
#define CUIKEDITINGCONTEXTGROUP_H

@class NSMutableArray, NSString, NSNumber, EKEventStore, NSSet;
@protocol CUIKEditingContextObserver;

#import <Foundation/Foundation.h>

#import "CUIKObjectGroup.h"

@interface CUIKEditingContextGroup : NSObject <CUIKEditingContextObserver>



@property (retain) NSMutableArray *additionalObjectGroups; // ivar: _additionalObjectGroups
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSNumber *earlyCommitDecisionAsNumber; // ivar: _earlyCommitDecisionAsNumber
@property (weak) EKEventStore *eventStore; // ivar: _eventStore
@property (readonly) NSUInteger hash;
@property (retain) CUIKObjectGroup *objectGroup; // ivar: _objectGroup
@property (retain) NSSet *openContexts; // ivar: _openContexts
@property (retain) NSNumber *spanDecisionAsNumber; // ivar: _spanDecisionAsNumber
@property (readonly) Class superclass;


-(BOOL)earlyCommitDecisionForGroupIsSet;
-(BOOL)isTestObserver;
-(BOOL)spanDecisionForGroupIsSet;
-(NSUInteger)earlyCommitDecisionForGroup;
-(NSUInteger)spanDecisionForGroup;
-(id)activeEditingContexts;
-(id)activeEditingContextsExcludingContext:(id)arg0 ;
-(id)initWithObjectGroup:(id)arg0 ;
-(id)newIdentifierForIdentifier:(id)arg0 ;
-(id)objectsToCommit;
-(id)oldObject:(id)arg0 didUpdateTo:(id)arg1 ;
-(id)originalObjects;
-(id)trackedObjects;
-(void)addAdditionalObjects:(id)arg0 ;
-(void)addContext:(id)arg0 ;
-(void)removeContext:(id)arg0 ;
-(void)specifyEarlyCommitDecisionForGroup:(NSUInteger)arg0 ;
-(void)specifySpanDecisionForGroup:(NSUInteger)arg0 ;
-(void)unspecifyEarlyCommitDecisionForGroup;
-(void)unspecifySpanDecisionForGroup;


@end


#endif