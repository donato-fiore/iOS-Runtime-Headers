// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSLEGACYASSERTIONSYNCMANAGER_H
#define DNDSLEGACYASSERTIONSYNCMANAGER_H

@class NPSManager, NPSDomainAccessor, NSString;
@protocol DNDSAssertionSyncManager, OS_dispatch_queue, DNDSLegacyAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate;

#import <Foundation/Foundation.h>

#import "DNDSClientDetailsProvider.h"

@interface DNDSLegacyAssertionSyncManager : NSObject <DNDSAssertionSyncManager>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NPSManager *_npsManager;
    NPSDomainAccessor *_accessor;
    DNDSClientDetailsProvider *_clientDetailsProvider;
}


@property (weak, nonatomic) NSObject<DNDSLegacyAssertionSyncManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSAssertionSyncManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)cleanupState;
-(BOOL)_queue_updateCompanionToggleSyncForGizmoUpdateDate:(id)arg0 modeAssertionUpdateContext:(id)arg1 ;
-(id)_queue_gizmoUpdateDate;
-(id)initWithClientDetailsProvider:(id)arg0 pairedDevice:(id)arg1 ;
-(void)_beginMonitoringForChanges;
-(void)_endMonitoringForChanges;
-(void)_queue_updateCompanionAssertionMirroringForState:(id)arg0 ;
-(void)_queue_updateGizmoAssertionSyncWithModeAssertionUpdateContext:(id)arg0 ;
-(void)_queue_updateGizmoToggleSyncForState:(id)arg0 companionUpdateDate:(id)arg1 reason:(NSUInteger)arg2 ;
-(void)_queue_updateToggleSyncForReason:(NSUInteger)arg0 ;
-(void)_updateForReason:(NSUInteger)arg0 ;
-(void)_updateGizmoAssertionSync;
-(void)dealloc;
-(void)resume;
-(void)updateForStateUpdate:(id)arg0 ;


@end


#endif