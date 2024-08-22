// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICONTEXTMENUCOMMITANIMATION_H
#define _UICONTEXTMENUCOMMITANIMATION_H


#import <Foundation/Foundation.h>

#import "_UIContextMenuCommitContainerView.h"
#import "UIView.h"
#import "_UIPortalView.h"

@interface _UIContextMenuCommitAnimation : NSObject

@property (retain, nonatomic) _UIContextMenuCommitContainerView *animationContainer; // ivar: _animationContainer
@property (nonatomic) NSUInteger animationCount; // ivar: _animationCount
@property (retain, nonatomic) UIView *container; // ivar: _container
@property (retain, nonatomic) UIView *destination; // ivar: _destination
@property (retain, nonatomic) _UIPortalView *destinationContentPortalView; // ivar: _destinationContentPortalView
@property (nonatomic) CGFloat destinationRadius; // ivar: _destinationRadius
@property (retain, nonatomic) UIView *destinationTransformView; // ivar: _destinationTransformView
@property (retain, nonatomic) UIView *morphContainer; // ivar: _morphContainer
@property (retain, nonatomic) UIView *originalContentSnapshotView; // ivar: _originalContentSnapshotView
@property (retain, nonatomic) UIView *source; // ivar: _source
@property (nonatomic) CGFloat sourceRadius; // ivar: _sourceRadius
@property (retain, nonatomic) UIView *sourceSnapshotView; // ivar: _sourceSnapshotView
@property (retain, nonatomic) UIView *sourceTransformView; // ivar: _sourceTransformView


-(id)initWithSource:(id)arg0 container:(id)arg1 ;
-(void)_prepareAnimationViews;
-(void)_prepareSnapshots;
// -(void)animateWithAlongsideActions:(id)arg0 completion:(unk)arg1  ;


@end


#endif