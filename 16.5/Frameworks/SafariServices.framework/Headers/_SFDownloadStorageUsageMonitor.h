// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFDOWNLOADSTORAGEUSAGEMONITOR_H
#define _SFDOWNLOADSTORAGEUSAGEMONITOR_H

@class NSMutableDictionary;
@protocol SFDownloadFileDelegate, SFDownloadStorageUsageMonitorEntryDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFDownloadFile.h"

@interface _SFDownloadStorageUsageMonitor : NSObject <SFDownloadFileDelegate, SFDownloadStorageUsageMonitorEntryDelegate>

 {
    NSMutableDictionary *_entries;
    SFDownloadFile *_historyFile;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) NSInteger usage;


-(id)init;
-(void)_reloadDownloadHistory;
-(void)downloadFileContentsDidChange:(id)arg0 ;
-(void)downloadFileDidChangeURL:(id)arg0 ;
-(void)downloadFileWillBeDeleted:(id)arg0 ;
-(void)entryDidChangeUsage:(id)arg0 ;


@end


#endif