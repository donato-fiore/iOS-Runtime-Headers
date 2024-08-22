// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSYSTEMSURFACEWORKFLOWSTATUSUPDATER_H
#define WFSYSTEMSURFACEWORKFLOWSTATUSUPDATER_H

@class WFSystemSurfaceWorkflowStatusRegistry;
@protocol WFDatabaseObjectObserver, WFDatabaseProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFSystemSurfaceWorkflowStatusUpdater : NSObject <WFDatabaseObjectObserver>



@property (readonly, nonatomic) NSObject<WFDatabaseProvider> *databaseProvider; // ivar: _databaseProvider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) WFSystemSurfaceWorkflowStatusRegistry *registry; // ivar: _registry


-(id)initWithDatabaseProvider:(id)arg0 eventHandler:(id)arg1 ;
-(void)databaseDidChange:(id)arg0 modified:(id)arg1 inserted:(id)arg2 removed:(id)arg3 ;
-(void)queue_updateFromDatabase:(id)arg0 ;
-(void)startIfPossible;


@end


#endif