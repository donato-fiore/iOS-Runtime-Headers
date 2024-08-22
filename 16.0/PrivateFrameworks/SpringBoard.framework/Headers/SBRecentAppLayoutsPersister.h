// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBRECENTAPPLAYOUTSPERSISTER_H
#define SBRECENTAPPLAYOUTSPERSISTER_H

@class NSURL, NSTimer, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBRecentAppLayoutsPersister : NSObject {
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSURL *_persistenceURL;
    NSTimer *_persistTimer;
    BOOL _initializedNewStoreOnDisk;
}


@property (readonly, nonatomic) BOOL initializedNewStoreOnDisk;
@property (retain, nonatomic) NSArray *recents; // ivar: _recents


-(id)_scheduledPersistTimer;
-(id)initWithPersistenceURL:(id)arg0 ;
-(void)_enqueueDiskWrite;
-(void)_loadRecents;
-(void)_persistTimerExpired:(id)arg0 ;
-(void)_queue_writeCompressedProtobufRepresentationToDisk:(id)arg0 ;
-(void)syncToDiskSoonIfDirty;
-(void)syncToDiskSynchronously;


@end


#endif