// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSWIPESELECTIONMANAGER_H
#define PUSWIPESELECTIONMANAGER_H

@class NSMutableDictionary, NSIndexPath, PXUIAutoScroller;
@protocol PUSwipeSelectionManagerDataSource, PUSwipeSelectionManagerDelegate;

#import <Foundation/Foundation.h>

#import "PUPhotoSelectionManager.h"

@interface PUSwipeSelectionManager : NSObject {
    NSMutableDictionary *_oldIndexesPaths;
}


@property (retain, nonatomic, setter=_setPausingChangesToken:) id *_pausingChangesToken; // ivar: __pausingChangesToken
@property (retain, nonatomic, setter=_setRestorePhotoSelectionManager:) PUPhotoSelectionManager *_restorePhotoSelectionManager; // ivar: __restorePhotoSelectionManager
@property (nonatomic, setter=_setSelectionMode:) NSInteger _selectionMode; // ivar: __selectionMode
@property (copy, nonatomic, setter=_setStartingIndexPath:) NSIndexPath *_startingIndexPath; // ivar: __startingIndexPath
@property (weak, nonatomic) NSObject<PUSwipeSelectionManagerDataSource> *datasource; // ivar: _datasource
@property (weak, nonatomic) NSObject<PUSwipeSelectionManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGPoint screenTouchLocation; // ivar: _screenTouchLocation
@property (retain, nonatomic) PXUIAutoScroller *selectionAutoScroller; // ivar: _selectionAutoScroller


-(NSInteger)_selectionModeForRestoringStateOfIndexPath:(id)arg0 ;
-(id)_indexesPathsRangeForIndexPath:(id)arg0 ;
-(id)init;
-(id)initWithSelectionMode:(NSInteger)arg0 photoSelectionManager:(id)arg1 ;
-(void)beginSelectionFromIndexPath:(id)arg0 ;
-(void)dealloc;
-(void)endSelection;
-(void)updateSelectionWithCurrentIndexPath:(id)arg0 leftClosestIndexPath:(id)arg1 aboveClosestIndexPath:(id)arg2 ;


@end


#endif