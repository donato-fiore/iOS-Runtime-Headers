// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSCFBACKGROUNDAVAGGREGATEASSETDOWNLOADTASKNOCHILDTASK_H
#define __NSCFBACKGROUNDAVAGGREGATEASSETDOWNLOADTASKNOCHILDTASK_H

@class NSCFBackgroundAVAssetDownloadTask;



@interface __NSCFBackgroundAVAggregateAssetDownloadTaskNoChildTask : NSCFBackgroundAVAssetDownloadTask



-(BOOL)isKindOfClass:(Class)arg0 ;
-(id)currentRequest;
-(id)originalRequest;
-(id)response;
-(void)_onqueue_didFinishDownloadforMediaSelectionPropertyList:(id)arg0 ;
-(void)_onqueue_didFinishDownloadingToURL:(id)arg0 ;
-(void)_onqueue_didLoadTimeRange:(id)arg0 totalTimeRangesLoaded:(id)arg1 timeRangeExpectedToLoad:(id)arg2 forMediaSelectionPropertyList:(id)arg3 ;
-(void)_onqueue_didResolveMediaSelectionPropertyList:(id)arg0 ;
-(void)_onqueue_willDownloadToURL:(id)arg0 ;


@end


#endif