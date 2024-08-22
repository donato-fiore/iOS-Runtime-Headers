// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCFSDOWNLOADERBATCHENUMERATOR_H
#define BRCFSDOWNLOADERBATCHENUMERATOR_H

@class PQLResultSet;

#import <Foundation/Foundation.h>

#import "BRCSyncContext.h"

@interface BRCFSDownloaderBatchEnumerator : NSObject {
    NSInteger _now;
    *NSInteger _retryQueueKick;
    PQLResultSet *_rs;
}


@property (readonly, nonatomic) BRCSyncContext *syncContext; // ivar: _syncContext


-(NSInteger)completedUnitCount;
-(NSInteger)transferQOS;
-(NSInteger)transferSize;
-(id)etag;
-(id)initWithSyncContext:(id)arg0 kind:(int)arg1 now:(NSInteger)arg2 retryQueueKick:(*NSInteger)arg3 ;
-(id)nextDocumentItem;
-(id)stageID;
-(void)close;


@end


#endif