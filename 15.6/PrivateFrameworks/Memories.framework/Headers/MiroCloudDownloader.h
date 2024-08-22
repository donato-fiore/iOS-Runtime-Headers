// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROCLOUDDOWNLOADER_H
#define MIROCLOUDDOWNLOADER_H

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MiroCloudDownloader : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *cancellationQueueFor26820423;
@property (copy, nonatomic) id *itemCompletedBlock; // ivar: _itemCompletedBlock
@property (readonly, nonatomic) NSArray *localAssets;
@property (readonly, nonatomic) NSUInteger nonLocalCount;
@property (readonly, nonatomic) float progress; // ivar: _progress
@property (copy, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (retain, nonatomic) NSMutableArray *requests; // ivar: _requests
@property (nonatomic) CGFloat totalInitialDownloadSize; // ivar: _totalInitialDownloadSize


+(id)cloudDownloaderWithAssets:(id)arg0 ;
-(id)initWithAssets:(id)arg0 ;
-(void)cancelDownloads;
-(void)startDownloadsWithCompletionHandler:(id)arg0 ;


@end


#endif