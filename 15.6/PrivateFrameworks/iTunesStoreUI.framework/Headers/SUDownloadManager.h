// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUDOWNLOADMANAGER_H
#define SUDOWNLOADMANAGER_H

@class NSArray, SSDownloadManager, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SUClientInterface.h"

@interface SUDownloadManager : NSObject {
    NSArray *_cachedDownloads;
    SUClientInterface *_clientInterface;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSDownloadManager *_downloadManager;
    NSMutableDictionary *_downloadsByID;
}


@property (readonly, nonatomic) SSDownloadManager *downloadManager;
@property (readonly, nonatomic) NSArray *downloads;


-(BOOL)deleteDownload:(id)arg0 ;
-(id)downloadForDownloadIdentifier:(NSInteger)arg0 ;
-(id)initWithDownloadManager:(id)arg0 ;
-(id)initWithDownloadManager:(id)arg0 clientInterface:(id)arg1 ;
-(void)_finishPreflightWithCompletionBlock:(id)arg0 ;
-(void)_reloadDownloadManager;
-(void)_removeObject:(id)arg0 fromArray:(*id)arg1 ;
-(void)dealloc;
-(void)preflightWithCompletionBlock:(id)arg0 ;
-(void)reloadDownloadManager;


@end


#endif