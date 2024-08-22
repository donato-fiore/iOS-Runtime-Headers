// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONVIEWLAYOUTSWIPEVIEWMANIPULATOR_H
#define _UICOLLECTIONVIEWLAYOUTSWIPEVIEWMANIPULATOR_H

@class NSString;
@protocol _UISwipeViewManipulator;

#import <Foundation/Foundation.h>

#import "UICollectionView.h"
#import "_UICollectionViewLayoutSwipeActionsModule.h"

@interface _UICollectionViewLayoutSwipeViewManipulator : NSObject <_UISwipeViewManipulator>

 {
    UICollectionView *_collectionView;
    _UICollectionViewLayoutSwipeActionsModule *_swipeActionsModule;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCollectionView:(id)arg0 swipeActionsModule:(id)arg1 ;
-(struct CGRect )restingFrameForSwipedView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)moveSwipedView:(id)arg0 atIndexPath:(id)arg1 withSwipeInfo:(struct ? )arg2 animator:(id)arg3 ;


@end


#endif