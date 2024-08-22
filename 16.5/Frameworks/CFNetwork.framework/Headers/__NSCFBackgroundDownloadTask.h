// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSCFBACKGROUNDDOWNLOADTASK_H
#define __NSCFBACKGROUNDDOWNLOADTASK_H

@class NSCFBackgroundSessionTask;



@interface __NSCFBackgroundDownloadTask : NSCFBackgroundSessionTask



-(BOOL)isKindOfClass:(Class)arg0 ;
-(void)_onqueue_didFinishWithError:(id)arg0 ;
-(void)_onqueue_didReceiveResponse:(id)arg0 ;
-(void)cancelByProducingResumeData:(id)arg0 ;


@end


#endif