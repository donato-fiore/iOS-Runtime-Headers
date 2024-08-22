// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TABSNAPSHOTQUEUEITEM_H
#define TABSNAPSHOTQUEUEITEM_H

@protocol TabSnapshotContentProvider;

#import <Foundation/Foundation.h>

#import "TabSnapshotRequest.h"

@interface TabSnapshotQueueItem : NSObject

@property (readonly, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSObject<TabSnapshotContentProvider> *contentProvider; // ivar: _contentProvider
@property (readonly, nonatomic) TabSnapshotRequest *request; // ivar: _request
@property (nonatomic) BOOL snappshottingIsInProgress; // ivar: _snappshottingIsInProgress


-(id)initWithRequest:(id)arg0 contentProvider:(id)arg1 completionHandler:(id)arg2 ;
-(void)appendCompletionHandler:(id)arg0 ;


@end


#endif