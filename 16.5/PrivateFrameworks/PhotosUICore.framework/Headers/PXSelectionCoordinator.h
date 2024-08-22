// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSELECTIONCOORDINATOR_H
#define PXSELECTIONCOORDINATOR_H

@class NSString, NSMutableOrderedSet, NSOrderedSet, NSNumber, NSMapTable;
@protocol PXChangeObserver, PXSectionedSelectionManagerSnapshotValidator, PXSelectionCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "PXSectionedSelectionManager.h"

@interface PXSelectionCoordinator : NSObject <PXChangeObserver, PXSectionedSelectionManagerSnapshotValidator>

 {
    PXSectionedSelectionManager *_currentlyMutatingSelectionManager;
    NSInteger _currentlyMutatingObservationCount;
    ? _delegateRespondsTo;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXSelectionCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableOrderedSet *mutableSelectedObjectIDs; // ivar: _mutableSelectedObjectIDs
@property (readonly, nonatomic) NSOrderedSet *selectedObjectIDs;
@property (retain, nonatomic) NSNumber *selectionCountLimit; // ivar: _selectionCountLimit
@property (nonatomic) BOOL selectionLimitReached; // ivar: _selectionLimitReached
@property (readonly, nonatomic) NSMapTable *stateByManager; // ivar: _stateByManager
@property (readonly) Class superclass;


-(BOOL)modifySelectionWithRemovedOIDs:(id)arg0 insertedOIDs:(id)arg1 ;
-(BOOL)selectionManagerShouldAvoidEmptySelection:(id)arg0 ;
-(BOOL)test_validateInternalState;
-(id)checkOutSelectionManagerForDataSourceManager:(id)arg0 ;
-(id)init;
-(id)initWithSelectedOIDs:(id)arg0 ;
-(id)selectionManager:(id)arg0 validateSnapshot:(id)arg1 ;
-(void)_handleDataSourceChangeToSelectionManager:(id)arg0 state:(id)arg1 ;
-(void)_handleSelectionChangeToSelectionManager:(id)arg0 state:(id)arg1 ;
-(void)_modifySelectionWithRemovedOIDs:(id)arg0 insertedOIDs:(id)arg1 originatingSelectionManager:(id)arg2 ;
-(void)_performChangesToCoordinatedSelectionManagersWithRemovedOIDs:(id)arg0 insertedOIDs:(id)arg1 originatingSelectionManager:(id)arg2 ;
-(void)_startMutatingSelectionManager:(id)arg0 ;
-(void)_stopMutatingSelectionManager:(id)arg0 ;
-(void)_updateSelectionLimitReached;
-(void)_updateSelectionManagerToGlobalState:(id)arg0 managerState:(id)arg1 ;
-(void)checkInSelectionManager:(id)arg0 ;
-(void)modifySelectionWithOrder:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif