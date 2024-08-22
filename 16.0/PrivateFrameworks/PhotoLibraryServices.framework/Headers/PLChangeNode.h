// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCHANGENODE_H
#define PLCHANGENODE_H

@class NSURL, NSString;
@protocol PLChangePublisher;

#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"
#import "PLUpdatedOrderKeys.h"
#import "PLCoreDataChangeMerger.h"
#import "PLDelayedSaveActionsProcessor.h"

@interface PLChangeNode : NSObject {
    NSURL *_libraryUrl;
    PLLibraryServicesManager *_libraryServicesManager;
    unsigned char _nodeUUID;
    NSString *_nodeUUIDShortString;
    PLUpdatedOrderKeys *_updatedOrderKeys;
    PLCoreDataChangeMerger *_changeMerger;
    id<PLChangePublisher> *_changePublisher;
    PLDelayedSaveActionsProcessor *_delayedSaveActionsProcessor;
}




-(BOOL)_isInvalidRemoteChangeEvent:(id)arg0 reply:(id)arg1 ;
-(id)initWithLibraryURL:(id)arg0 changeMerger:(id)arg1 changePublisher:(id)arg2 libraryServicesManager:(id)arg3 ;
-(void)connectManagedObjectContext:(id)arg0 ;
-(void)dealloc;
-(void)disconnectManagedObjectContext:(id)arg0 ;
-(void)distributeRemoteContextDidSaveEvent:(id)arg0 delayedSaveActionsDetail:(id)arg1 transaction:(id)arg2 ;
-(void)invalidate;
-(void)publishChangesForDidSaveObjectIDsNotification:(id)arg0 ;
-(void)publishRemoteChangeEvent:(id)arg0 delayedSaveActionsDetail:(id)arg1 reply:(id)arg2 ;


@end


#endif