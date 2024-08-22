// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIUSERACTIONDISAMBIGUATIONMODELFINALIZER_H
#define CNUIUSERACTIONDISAMBIGUATIONMODELFINALIZER_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "CNUIUserActionItem.h"

@interface CNUIUserActionDisambiguationModelFinalizer : NSObject

@property (retain, nonatomic) NSMutableArray *actions; // ivar: _actions
@property (retain, nonatomic) CNUIUserActionItem *defaultAction; // ivar: _defaultAction
@property (retain, nonatomic) NSArray *directoryServiceActions; // ivar: _directoryServiceActions
@property (retain, nonatomic) NSArray *foundOnDeviceActions; // ivar: _foundOnDeviceActions
@property (retain, nonatomic) NSArray *recentActions; // ivar: _recentActions


+(id)modelWithDefaultAction:(id)arg0 actions:(id)arg1 recentActions:(id)arg2 directoryServiceActions:(id)arg3 foundOnDeviceActions:(id)arg4 ;
-(id)initWithDefaultAction:(id)arg0 actions:(id)arg1 recentActions:(id)arg2 directoryServiceActions:(id)arg3 foundOnDeviceActions:(id)arg4 ;
-(id)model;
-(void)promoteLoneActionToBeDefault;
-(void)promoteLoneManagedCallProviderActionToBeDefault;
-(void)removeDefaultActionFromListOfActions;
-(void)removeDiscoveredActionsAlreadyCurated;
-(void)removeDuplicateIntentActionsFromSameProvider;
-(void)removeUninterestingItentActions;


@end


#endif