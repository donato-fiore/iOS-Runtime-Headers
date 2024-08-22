// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKDEBUGRADARARGONERRORREPORTERQUEUE_H
#define NTKDEBUGRADARARGONERRORREPORTERQUEUE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NTKFirstUnlockQueue.h"

@interface NTKDebugRadarArgonErrorReporterQueue : NSObject

@property (nonatomic) BOOL canSubmitReports; // ivar: _canSubmitReports
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSString *queueDirectoryPath; // ivar: _queueDirectoryPath
@property (readonly, nonatomic) NTKFirstUnlockQueue *unlockQueue; // ivar: _unlockQueue


-(id)initWithQueueDirectoryPath:(id)arg0 ;
-(void)enqueueReportWithTitle:(id)arg0 description:(id)arg1 attachmentURLs:(id)arg2 ;
-(void)queue_enqueueReportWithTitle:(id)arg0 description:(id)arg1 attachmentURLs:(id)arg2 ;


@end


#endif