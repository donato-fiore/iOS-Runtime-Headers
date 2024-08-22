// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPSTOREDOWNLOADBLOCKOBSERVER_H
#define _MPSTOREDOWNLOADBLOCKOBSERVER_H

@class NSString;
@protocol MPStoreDownloadManagerObserver;

#import <Foundation/Foundation.h>

#import "MPStoreDownload.h"

@interface _MPStoreDownloadBlockObserver : NSObject <MPStoreDownloadManagerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didFinishDownloadHandler; // ivar: _didFinishDownloadHandler
@property (copy, nonatomic) id *didFinishPurchaseHandler; // ivar: _didFinishPurchaseHandler
@property (readonly, nonatomic) MPStoreDownload *download; // ivar: _download
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDownload:(id)arg0 ;
-(void)downloadManager:(id)arg0 downloadDidFinish:(id)arg1 ;
-(void)downloadManager:(id)arg0 downloadPurchaseDidFinish:(id)arg1 ;


@end


#endif