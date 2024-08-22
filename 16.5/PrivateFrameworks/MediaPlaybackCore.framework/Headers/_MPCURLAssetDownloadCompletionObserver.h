// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCURLASSETDOWNLOADCOMPLETIONOBSERVER_H
#define _MPCURLASSETDOWNLOADCOMPLETIONOBSERVER_H

@class AVURLAsset;

#import <Foundation/Foundation.h>


@interface _MPCURLAssetDownloadCompletionObserver : NSObject

@property (readonly, weak, nonatomic) AVURLAsset *asset; // ivar: _asset
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


-(id)initWithAsset:(id)arg0 ;
-(void)_downloadCompleteFailedNotification:(id)arg0 ;
-(void)_downloadCompleteSuccessNotification:(id)arg0 ;
-(void)_notifyCompletionHandlerWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)dealloc;


@end


#endif