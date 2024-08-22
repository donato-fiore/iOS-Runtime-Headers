// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMDATAACCESSBEHAVIORMANAGER_H
#define REMDATAACCESSBEHAVIORMANAGER_H


#import <Foundation/Foundation.h>

#import "REMXPCDaemonController.h"

@interface REMDataAccessBehaviorManager : NSObject

@property (retain, nonatomic) REMXPCDaemonController *daemonController; // ivar: _daemonController


-(BOOL)_getBoolForKey:(id)arg0 withDefaultValue:(BOOL)arg1 ;
-(BOOL)isBabySitterEnabled;
-(BOOL)isDataAccessEnabled;
-(NSInteger)_getIntegerForKey:(id)arg0 withDefaultValue:(NSInteger)arg1 ;
-(NSInteger)changeTrackingBehaviors;
-(id)_debugPerformerWithReason:(id)arg0 errorHandler:(id)arg1 ;
-(id)fetchStatusReportsWithError:(*id)arg0 ;
-(id)init;
-(id)initWithDaemonController:(id)arg0 ;
-(void)_crashDaemonWithMessage:(id)arg0 ;
-(void)_setBoolValue:(BOOL)arg0 forBehaviorKey:(id)arg1 ;
-(void)_setIntegerValue:(NSInteger)arg0 forBehaviorKey:(id)arg1 ;
-(void)applyChangeTrackingBehavior:(NSInteger)arg0 ;
-(void)disableBabySitter;
-(void)disableDataAccess;
-(void)enableBabySitter;
-(void)enableDataAccess;
-(void)unapplyChangeTrackingBehavior:(NSInteger)arg0 ;


@end


#endif