// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWORKFLOWMIGRATION_H
#define WFWORKFLOWMIGRATION_H

@class NSString, NSMutableArray, NSMutableSet, NSMutableDictionary;
@protocol WFWorkflowMigration;

#import <Foundation/Foundation.h>


@interface WFWorkflowMigration : NSObject <WFWorkflowMigration>



@property (readonly, nonatomic) NSString *actionIdentifierKey;
@property (readonly, nonatomic) NSString *actionParametersKey;
@property (readonly, nonatomic) NSMutableArray *actions;
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableSet *warnings; // ivar: _warnings
@property (readonly, nonatomic) NSMutableDictionary *workflow; // ivar: _workflow


+(BOOL)workflowNeedsMigration:(id)arg0 fromClientVersion:(id)arg1 ;
+(id)migrationClassDependencies;
-(void)enumerateActionsWithIdentifier:(id)arg0 usingBlock:(id)arg1 ;
-(void)finish;
-(void)migrateWorkflow;
-(void)migrateWorkflowIfNeeded:(id)arg0 completion:(id)arg1 ;


@end


#endif