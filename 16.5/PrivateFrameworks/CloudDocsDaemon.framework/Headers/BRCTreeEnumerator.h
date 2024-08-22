// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCTREEENUMERATOR_H
#define BRCTREEENUMERATOR_H

@class NSMutableIndexSet;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "BRCAccountSession.h"
#import "BRCItemID.h"
#import "BRCAppLibrary.h"
#import "brc_task_tracker.h"

@interface BRCTreeEnumerator : NSObject {
    BRCAccountSession *_session;
    id *_handler;
    BRCItemID *_parentID;
    BRCAppLibrary *_appLibrary;
    NSUInteger _rowID;
    NSMutableIndexSet *_seen;
    NSMutableIndexSet *_toVisit;
    brc_task_tracker *_tracker;
    NSObject<OS_dispatch_group> *_group;
    id *_strongSelf;
    BOOL _isCancelled;
    BOOL _isRecursive;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


-(BOOL)_visitNewParent;
-(BOOL)finishIfCancelled;
-(NSUInteger)__iterate:(NSUInteger)arg0 ;
-(id)initWithSession:(id)arg0 ;
-(id)initWithSession:(id)arg0 group:(id)arg1 ;
-(id)initWithSession:(id)arg0 tracker:(id)arg1 ;
-(void)_doneWithError:(id)arg0 ;
-(void)_iterate:(NSUInteger)arg0 ;
-(void)_scheduleAsync;
-(void)cancel;
-(void)enumerateBelow:(id)arg0 appLibrary:(id)arg1 recursively:(BOOL)arg2 handler:(id)arg3 ;


@end


#endif