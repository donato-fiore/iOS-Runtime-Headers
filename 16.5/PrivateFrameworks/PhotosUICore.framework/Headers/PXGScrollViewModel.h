// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGSCROLLVIEWMODEL_H
#define PXGSCROLLVIEWMODEL_H

@protocol PXGMutableScrollViewModel;


#import "PXObservable.h"

@interface PXGScrollViewModel : PXObservable <PXGMutableScrollViewModel>



@property (readonly, nonatomic) NSUInteger changesOptions; // ivar: _changesOptions
@property (readonly, nonatomic) BOOL clipsToBounds; // ivar: _clipsToBounds
@property (readonly, nonatomic) CGPoint contentOffset; // ivar: _contentOffset
@property (readonly, nonatomic) CGSize contentSize; // ivar: _contentSize
@property (readonly, nonatomic) BOOL draggingPerformsScroll; // ivar: _draggingPerformsScroll
@property (readonly, nonatomic) NSInteger scrollDecelerationRate; // ivar: _scrollDecelerationRate
@property (readonly, nonatomic) NSInteger scrollRegime; // ivar: _scrollRegime
@property (readonly, nonatomic) BOOL showsHorizontalScrollIndicator; // ivar: _showsHorizontalScrollIndicator
@property (readonly, nonatomic) BOOL showsVerticalScrollIndicator; // ivar: _showsVerticalScrollIndicator


-(id)description;
-(void)didEndChangeHandling;
// -(void)performChanges:(id)arg0 options:(unk)arg1  ;
-(void)stopScrolling;


@end


#endif