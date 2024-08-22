// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUVIEWMODEL_H
#define PUVIEWMODEL_H

@class NSMutableArray, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PUViewModelChange.h"

@interface PUViewModel : NSObject {
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSInteger _nestedChanges;
    NSMutableArray *_pendingChangeBlocks;
    NSInteger _numAppliedPendingChanges;
    PUViewModelChange *_currentChange;
}


@property (readonly, nonatomic) NSHashTable *_changeObservers; // ivar: __changeObservers
@property (nonatomic, getter=_isPublishingChanges, setter=_setPublishingChanges:) BOOL _publishingChanges; // ivar: __publishingChanges
@property (readonly, nonatomic) PUViewModelChange *currentChange;
@property (readonly, nonatomic) PUViewModelChange *currentChangeIfExists;


-(id)debugDetailedDescription;
-(id)init;
-(id)newViewModelChange;
-(void)_applyPendingChanges;
-(void)_didChange;
-(void)_publishChanges;
-(void)_willChange;
-(void)assertInsideChangesBlock;
-(void)didPerformChanges;
-(void)didPublishChanges;
-(void)performChanges:(id)arg0 ;
-(void)registerChangeObserver:(id)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 ;
-(void)willPublishChanges;


@end


#endif