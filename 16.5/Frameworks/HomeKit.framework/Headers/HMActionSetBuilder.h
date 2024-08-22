// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACTIONSETBUILDER_H
#define HMACTIONSETBUILDER_H

@class NSString, NSSet, NSUUID;
@protocol HMActionSetBuilderInternal, HMActionSetBuilderPrivate, HMActionSetBuilder;


#import "HMActionSet.h"
#import "HMApplicationData.h"
#import "HMHome.h"

@interface HMActionSetBuilder : HMActionSet <HMActionSetBuilderInternal, HMActionSetBuilderPrivate, HMActionSetBuilder>



@property (readonly, copy, nonatomic) NSString *actionSetType;
@property (copy, nonatomic) NSSet *actions;
@property (readonly, nonatomic) HMApplicationData *applicationData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home;
@property (copy, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;


+(id)alloc;


@end


#endif