// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMTRIGGERBUILDER_H
#define _HMTRIGGERBUILDER_H

@class HMAutomationBuilder, NSString, NSMutableArray, NSArray, NSUUID;
@protocol HMTriggerBuilderInternal;


#import "HMTriggerPolicy.h"
#import "HMHome.h"
#import "HMActionSetBuilder.h"

@interface _HMTriggerBuilder : HMAutomationBuilder <HMTriggerBuilderInternal>

 {
    NSString *_name;
    BOOL _nameIsConfigured;
    BOOL _enabled;
    HMTriggerPolicy *_policy;
    NSMutableArray *_actionSets;
}


@property (copy, nonatomic) NSArray *actionSets;
@property (readonly, copy, nonatomic) NSString *configuredName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL nameIsConfigured;
@property (retain, nonatomic) HMTriggerPolicy *policy;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMActionSetBuilder *triggerOwnedActionSet;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;


+(void)initialize;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(Class)class;
-(id)creator;
-(id)creatorDevice;
-(id)initWithContext:(id)arg0 home:(id)arg1 ;
-(id)lastFireDate;
-(void)addActionSet:(id)arg0 ;
-(void)addActionSet:(id)arg0 completionHandler:(id)arg1 ;
-(void)addActionSetOfType:(id)arg0 completionHandler:(id)arg1 ;
-(void)addActionSetWithCompletionHandler:(id)arg0 ;
-(void)enable:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)removeActionSet:(id)arg0 ;
-(void)removeActionSet:(id)arg0 completionHandler:(id)arg1 ;
-(void)removePolicy:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateName:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateName:(id)arg0 configuredName:(id)arg1 completionHandler:(id)arg2 ;
-(void)updatePolicy:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif