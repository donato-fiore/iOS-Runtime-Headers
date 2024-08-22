// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDPAIREDSYNCMANAGER_H
#define HDPAIREDSYNCMANAGER_H

@class PSYSyncCoordinator, NSHashTable, NSString;
@protocol PSYSyncCoordinatorDelegate, HDDiagnosticObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDPairedSyncManager : NSObject <PSYSyncCoordinatorDelegate, HDDiagnosticObject>

 {
    PSYSyncCoordinator *_pairedSyncCoordinator;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_unfinishedSyncSessions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) PSYSyncCoordinator *syncCoordinator;


+(id)syncCoordinatorWithServiceName:(id)arg0 ;
-(BOOL)permitSynchronization;
-(id)diagnosticDescription;
-(id)initWithProfile:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)syncCoordinator:(id)arg0 beginSyncSession:(id)arg1 ;
-(void)syncCoordinator:(id)arg0 didInvalidateSyncSession:(id)arg1 ;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg0 ;


@end


#endif