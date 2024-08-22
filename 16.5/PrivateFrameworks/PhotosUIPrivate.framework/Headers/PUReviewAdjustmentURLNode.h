// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUREVIEWADJUSTMENTURLNODE_H
#define PUREVIEWADJUSTMENTURLNODE_H

@class PXRunNode, NSURL, PHContentEditingOutput, NSString, NSArray;
@protocol PUAdjustmentURLNode, PXRunNodeDelegate;


#import "PUReviewAsset.h"

@interface PUReviewAdjustmentURLNode : PXRunNode <PUAdjustmentURLNode>



@property (readonly, nonatomic) NSURL *adjustmentURL; // ivar: _adjustmentURL
@property (readonly, getter=isCanceled) BOOL canceled;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, nonatomic) PHContentEditingOutput *contentEditingOutput; // ivar: _contentEditingOutput
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXRunNodeDelegate> *delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *directory; // ivar: _directory
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PUReviewAsset *reviewAsset; // ivar: _reviewAsset
@property (readonly, getter=isRunning) BOOL running;
@property (readonly) NSUInteger state;
@property (readonly) Class superclass;
@property (readonly, getter=isWaiting) BOOL waiting;


-(id)initWithReviewAsset:(id)arg0 directory:(id)arg1 contentEditingOutput:(id)arg2 ;
-(void)run;


@end


#endif