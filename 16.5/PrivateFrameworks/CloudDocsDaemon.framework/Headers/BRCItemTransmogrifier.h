// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCITEMTRANSMOGRIFIER_H
#define BRCITEMTRANSMOGRIFIER_H

@class NSMutableArray, NSOperationQueue, NSMutableDictionary;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "BRCAccountSession.h"

@interface BRCItemTransmogrifier : NSObject {
    BRCAccountSession *_session;
    NSObject<OS_dispatch_source> *_pendingRenamesTimer;
    NSMutableArray *_pendingRenames;
    NSOperationQueue *_queue;
    NSMutableDictionary *_pendingTransmogirifcations;
}




-(BOOL)addOperation:(id)arg0 forItem:(id)arg1 ;
-(CGFloat)_renameDelayForZone:(id)arg0 ;
-(CGFloat)_renameItem:(id)arg0 ;
-(id)initWithSession:(id)arg0 ;
-(id)queue;
-(void)_finishDirectoryToPackageTransmogrification:(id)arg0 relpath:(id)arg1 ;
-(void)_renameItems;
-(void)_scheduleRenameAfter:(CGFloat)arg0 onQueue:(id)arg1 ;
-(void)removeOperationsForItemGlobalID:(id)arg0 ;
-(void)scheduleBouncedDirectoryRename:(id)arg0 ;
-(void)scheduleDirectoryToPackageTransmogrification:(id)arg0 absolutePath:(id)arg1 ;


@end


#endif