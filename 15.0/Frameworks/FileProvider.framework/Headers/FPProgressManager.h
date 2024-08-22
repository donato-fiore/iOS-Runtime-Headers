// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPPROGRESSMANAGER_H
#define FPPROGRESSMANAGER_H

@class NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FPProgressManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_downloadProgressPerItemIDs;
    NSMapTable *_uploadProgressPerItemIDs;
    NSMapTable *_copyProgressPerItemIDs;
}




+(id)defaultManager;
-(id)_progressForItem:(id)arg0 usingProgressMap:(id)arg1 ;
-(id)copyProgressForItem:(id)arg0 ;
-(id)downloadProgressForItem:(id)arg0 ;
-(id)init;
-(id)removeCopyProgress:(id)arg0 ;
-(id)uploadProgressForItem:(id)arg0 ;
-(void)attachProgressToItemsIfNeeded:(id)arg0 ;
-(void)registerCopyProgress:(id)arg0 forItemID:(id)arg1 ;
-(void)removeCopyProgressForItemID:(id)arg0 ;
-(void)removeDownloadProgressForItemID:(id)arg0 ;


@end


#endif