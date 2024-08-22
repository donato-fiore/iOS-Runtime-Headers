// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYMEMORYFEEDACTIONPERFORMER_H
#define PXSTORYMEMORYFEEDACTIONPERFORMER_H

@class NSString;
@protocol PXStoryFeedActionPerformer;

#import <Foundation/Foundation.h>


@interface PXStoryMemoryFeedActionPerformer : NSObject <PXStoryFeedActionPerformer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handlePrimaryActionOnItemAtIndexPath:(struct PXSimpleIndexPath )arg0 inDataSource:(id)arg1 fromViewController:(id)arg2 ;
// -(BOOL)navigateToObjectReference:(id)arg0 originalSource:(id)arg1 fromViewController:(id)arg2 animated:(BOOL)arg3 willPresentHandler:(id)arg4 completionHandler:(unk)arg5  ;
-(void)_presentViewController:(id)arg0 contentViewController:(id)arg1 fromViewController:(id)arg2 animated:(BOOL)arg3 completion:(id)arg4 ;


@end


#endif