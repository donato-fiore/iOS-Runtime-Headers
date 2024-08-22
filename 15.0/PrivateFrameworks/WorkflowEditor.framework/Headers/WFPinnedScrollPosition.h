// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPINNEDSCROLLPOSITION_H
#define WFPINNEDSCROLLPOSITION_H

@class UIView;

#import <Foundation/Foundation.h>

#import "WFScrollPositionPinningCollectionView.h"

@interface WFPinnedScrollPosition : NSObject

@property (readonly, nonatomic) CGPoint center; // ivar: _center
@property (readonly, weak, nonatomic) WFScrollPositionPinningCollectionView *scrollView; // ivar: _scrollView
@property (readonly, nonatomic) UIView *view; // ivar: _view


-(id)initWithScrollView:(id)arg0 view:(id)arg1 ;
-(struct CGRect )adjustedBounds:(struct CGRect )arg0 contentSize:(struct CGSize )arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif