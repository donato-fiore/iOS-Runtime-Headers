// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYMEMORYFEEDACTIONPERFORMER_H
#define PXSTORYMEMORYFEEDACTIONPERFORMER_H

@class NSString;
@protocol PXFeedActionPerformer;

#import <Foundation/Foundation.h>


@interface PXStoryMemoryFeedActionPerformer : NSObject <PXFeedActionPerformer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) id *viewControllerSetupBlock; // ivar: _viewControllerSetupBlock


-(BOOL)handlePrimaryActionOnItemAtIndexPath:(struct PXSimpleIndexPath )arg0 inDataSource:(id)arg1 fromViewController:(id)arg2 ;
// -(BOOL)navigateToObjectReference:(id)arg0 originalSource:(id)arg1 fromViewController:(id)arg2 animated:(BOOL)arg3 willPresentHandler:(id)arg4 completionHandler:(unk)arg5  ;
-(id)init;
-(id)initWithViewControllerSetupBlock:(id)arg0 ;
-(void)_presentViewController:(id)arg0 contentViewController:(id)arg1 fromViewController:(id)arg2 animated:(BOOL)arg3 completion:(id)arg4 ;
-(void)deleteItemsInSelection:(id)arg0 undoManager:(id)arg1 ;


@end


#endif