// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPSYNCMANAGER_H
#define MSPSYNCMANAGER_H

@class SYService, NSMutableArray, NSMutableDictionary, NSString;
@protocol SYServiceDelegate, SYSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MSPSyncManager : NSObject <SYServiceDelegate, SYSessionDelegate>

 {
    SYService *_service;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSMutableArray *_pins;
    NSMutableDictionary *_pinsMap;
    BOOL _resetSyncRequested;
    NSMutableArray *_pendingSyncItems;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)service:(id)arg0 startSession:(id)arg1 error:(*id)arg2 ;
-(BOOL)syncSession:(id)arg0 resetDataStoreWithError:(*id)arg1 ;
-(id)_wrapPin:(id)arg0 changeType:(NSInteger)arg1 ;
-(id)init;
-(id)pins;
-(id)readPins;
// -(unsigned int)syncSession:(id)arg0 enqueueChanges:(id)arg1 error:(unk)arg2  ;
-(void)_addPin:(id)arg0 ;
-(void)_applyAddItem:(id)arg0 ;
-(void)_applyDeleteItem:(id)arg0 ;
-(void)_applyUpdateItem:(id)arg0 ;
-(void)_clearAllNanoPersistableData;
-(void)_notifyObservers;
-(void)_removePin:(id)arg0 ;
-(void)_resumeSyncService;
-(void)_setHasChangesAvailable;
-(void)_updateFromDisk;
-(void)_updatePin:(id)arg0 ;
-(void)completedPreparingSync;
-(void)completedSync;
-(void)notifyObservers;
-(void)service:(id)arg0 didSwitchFromPairingID:(id)arg1 toPairingID:(id)arg2 ;
-(void)setDroppedPin:(id)arg0 ;
-(void)setNeedsFullSync;
-(void)syncSession:(id)arg0 applyChanges:(id)arg1 completion:(id)arg2 ;
-(void)syncSession:(id)arg0 didEndWithError:(id)arg1 ;
-(void)writePins:(id)arg0 ;


@end


#endif