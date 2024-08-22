// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMPUBLISHACTIONPERFORMER_H
#define PXCMMPUBLISHACTIONPERFORMER_H

@class NSURL;


#import "PXCMMActionPerformer.h"

@interface PXCMMPublishActionPerformer : PXCMMActionPerformer

@property (retain, nonatomic) NSURL *publishedURL; // ivar: _publishedURL


-(BOOL)isCancellable;
-(id)createActionProgress;
-(id)performPublishActionWithSession:(id)arg0 shareOrigin:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)_completePublishActionWithSuccess:(BOOL)arg0 error:(id)arg1 shareOrigin:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)cancelActionWithCompletionHandler:(id)arg0 ;


@end


#endif