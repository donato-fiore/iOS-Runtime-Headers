// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMACTIONSETBUILDER_H
#define _HMACTIONSETBUILDER_H

@class HMAutomationBuilder, NSString, NSMutableArray, NSSet, NSUUID;
@protocol HMActionSetBuilderInternal;


#import "HMApplicationData.h"
#import "HMHome.h"

@interface _HMActionSetBuilder : HMAutomationBuilder <HMActionSetBuilderInternal>

 {
    NSString *_type;
    NSString *_name;
    NSMutableArray *_actions;
    HMApplicationData *_applicationData;
}


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


+(void)initialize;
-(BOOL)isExecuting;
-(Class)class;
-(id)copyAsBuilder;
-(id)initWithActionSet:(id)arg0 ;
-(id)initWithType:(id)arg0 context:(id)arg1 home:(id)arg2 ;
-(id)lastExecutionDate;
-(void)addAction:(id)arg0 ;
-(void)addAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAction:(id)arg0 ;
-(void)removeAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateApplicationData:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateName:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif