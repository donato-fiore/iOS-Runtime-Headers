// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTRIGGERMANAGER_H
#define WFTRIGGERMANAGER_H


#import <Foundation/Foundation.h>

#import "WFDatabase.h"

@interface WFTriggerManager : NSObject

@property (readonly, nonatomic) WFDatabase *database; // ivar: _database


-(id)allConfiguredTriggers;
-(id)configuredTriggerWithID:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 ;
-(void)deleteTriggerWithIdentifier:(id)arg0 notifyDaemon:(BOOL)arg1 completion:(id)arg2 ;
-(void)saveNewConfiguredTrigger:(id)arg0 workflow:(id)arg1 notifyDaemon:(BOOL)arg2 completion:(id)arg3 ;
-(void)saveNewConfiguredTrigger:(id)arg0 workflowReference:(id)arg1 notifyDaemon:(BOOL)arg2 completion:(id)arg3 ;
-(void)updateConfiguredTrigger:(id)arg0 triggerID:(id)arg1 notifyDaemon:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif