// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOSGRIDBARSHELPER_H
#define PUPHOTOSGRIDBARSHELPER_H

@class NSString, NSArray;
@protocol PUPhotoSelectionManagerChangeObserver, OS_dispatch_queue, PUPhotosGridBarsHelperDelegate;

#import <Foundation/Foundation.h>

#import "PUPhotoSelectionManager.h"

@interface PUPhotosGridBarsHelper : NSObject <PUPhotoSelectionManagerChangeObserver>

 {
    BOOL _isPerformingUpdates;
    ? _needsUpdateFlags;
}


@property (nonatomic, setter=_setHadSelectionOnLastUpdate:) BOOL _hadSelectionOnLastUpdate; // ivar: __hadSelectionOnLastUpdate
@property (retain, nonatomic, setter=_setPhotoSelectionManager:) PUPhotoSelectionManager *_photoSelectionManager; // ivar: __photoSelectionManager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue; // ivar: __queue
@property (nonatomic, setter=_setShouldUpdateBarItemsLazily:) BOOL _shouldUpdateBarItemsLazily; // ivar: __shouldUpdateBarItemsLazily
@property (nonatomic, setter=_setShouldUpdateItemsWithCount:) BOOL _shouldUpdateItemsWithCount; // ivar: __shouldUpdateItemsWithCount
@property (nonatomic, getter=_isUpdatingItemsWithCount, setter=_setUpdatingItemsWithCount:) BOOL _updatingItemsWithCount; // ivar: __updatingItemsWithCount
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUPhotosGridBarsHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, setter=_setLeftBarButtonItems:) NSArray *leftBarButtonItems; // ivar: _leftBarButtonItems
@property (retain, nonatomic, setter=_setPrompt:) NSString *prompt; // ivar: _prompt
@property (retain, nonatomic, setter=_setRightBarButtonItems:) NSArray *rightBarButtonItems; // ivar: _rightBarButtonItems
@property (nonatomic, setter=_setShouldHideBackButton:) BOOL shouldHideBackButton; // ivar: _shouldHideBackButton
@property (readonly) Class superclass;
@property (nonatomic, getter=isSwipeSelecting) BOOL swipeSelecting; // ivar: _swipeSelecting
@property (retain, nonatomic, setter=_setTitle:) NSString *title; // ivar: _title


-(BOOL)_needsUpdate;
-(id)init;
-(void)_handleItemsWithCountUpdateWithTitle:(id)arg0 shouldReloadAllItems:(BOOL)arg1 ;
-(void)_invalidateBarItems;
-(void)_invalidatePhotoSelectionManager;
-(void)_invalidateShouldUpdateBarItemsLazily;
-(void)_notifyBarItemsDidChange;
-(void)_setNeedsUpdate;
-(void)_startUpdatingItemsWithCountIfNeeded;
-(void)_stopUpdatingItemsWithCount;
-(void)_updateAllBarItems;
-(void)_updateBarItemsIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateItemsWithCountInBackgroundWithDelegate:(id)arg0 photoSelectionManagerSnapshot:(id)arg1 ;
-(void)_updatePhotoSelectionManagerIfNeeded;
-(void)_updateShouldUpdateBarItemsLazilyIfNeeded;
-(void)invalidateNavigationBarItems;
-(void)photoSelectionManagerSelectionDidChange:(id)arg0 ;


@end


#endif