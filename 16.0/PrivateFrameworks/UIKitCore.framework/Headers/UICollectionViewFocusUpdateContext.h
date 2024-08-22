// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICOLLECTIONVIEWFOCUSUPDATECONTEXT_H
#define UICOLLECTIONVIEWFOCUSUPDATECONTEXT_H

@class NSIndexPath;


#import "UIFocusUpdateContext.h"
#import "UICollectionView.h"

@interface UICollectionViewFocusUpdateContext : UIFocusUpdateContext {
    BOOL _didSetPreviouslyFocusedIndexPath;
    BOOL _didSetNextFocusedIndexPath;
}


@property (readonly, weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, nonatomic) NSIndexPath *nextFocusedIndexPath; // ivar: _nextFocusedIndexPath
@property (readonly, nonatomic) NSIndexPath *previouslyFocusedIndexPath; // ivar: _previouslyFocusedIndexPath


+(id)_contextWithContext:(id)arg0 collectionView:(id)arg1 ;
+(id)_contextWithContext:(id)arg0 collectionView:(id)arg1 cachedPreviouslyFocusedIndexPath:(id)arg2 ;
-(id)_initWithContext:(id)arg0 collectionView:(id)arg1 cachedPreviouslyFocusedIndexPath:(id)arg2 ;


@end


#endif