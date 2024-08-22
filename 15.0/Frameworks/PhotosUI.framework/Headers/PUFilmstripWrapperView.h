// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUFILMSTRIPWRAPPERVIEW_H
#define PUFILMSTRIPWRAPPERVIEW_H

@class UIView, NSNumber;


#import "PUFilmstripView.h"

@interface PUFilmstripWrapperView : UIView

@property (copy, nonatomic) NSNumber *anchoredLeft; // ivar: _anchoredLeft
@property (nonatomic, setter=setExpandedSize:) CGSize expandedSize; // ivar: _expandedSize
@property (retain, nonatomic) PUFilmstripView *filmstripView; // ivar: _filmstripView
@property (nonatomic, setter=setAnimating:) BOOL isAnimating; // ivar: _isAnimating
@property (nonatomic, setter=setExpanded:) BOOL isExpanded; // ivar: _isExpanded
@property (nonatomic) CGRect visibleRect; // ivar: _visibleRect


-(void)layoutSubviews;


@end


#endif