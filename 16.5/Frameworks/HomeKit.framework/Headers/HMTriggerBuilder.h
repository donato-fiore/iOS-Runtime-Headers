// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMTRIGGERBUILDER_H
#define HMTRIGGERBUILDER_H

@class NSArray, NSString, NSUUID;
@protocol HMTriggerBuilderInternal, HMTriggerBuilderPrivate, HMTriggerBuilder;


#import "HMTrigger.h"
#import "HMHome.h"
#import "HMTriggerPolicy.h"
#import "HMActionSetBuilder.h"

@interface HMTriggerBuilder : HMTrigger <HMTriggerBuilderInternal, HMTriggerBuilderPrivate, HMTriggerBuilder>



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


+(id)alloc;


@end


#endif