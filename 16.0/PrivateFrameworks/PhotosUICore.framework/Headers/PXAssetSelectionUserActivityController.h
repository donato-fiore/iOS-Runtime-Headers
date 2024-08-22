// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXASSETSELECTIONUSERACTIVITYCONTROLLER_H
#define PXASSETSELECTIONUSERACTIVITYCONTROLLER_H

@class NSUserActivity, NSString;
@protocol PXChangeObserver, NSUserActivityDelegate;

#import <Foundation/Foundation.h>

#import "PXSectionedSelectionManager.h"
#import "PXSelectionSnapshot.h"

@interface PXAssetSelectionUserActivityController : NSObject <PXChangeObserver, NSUserActivityDelegate>

 {
    os_unfair_lock_s _snapshotLock;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) NSUserActivity *currentUserActivity; // ivar: _currentUserActivity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasSelection; // ivar: _hasSelection
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXSectionedSelectionManager *selectionManager; // ivar: _selectionManager
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot; // ivar: _selectionSnapshot
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSelectionManager:(id)arg0 ;
-(void)_updateActivity;
-(void)dealloc;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)userActivityWillSave:(id)arg0 ;


@end


#endif