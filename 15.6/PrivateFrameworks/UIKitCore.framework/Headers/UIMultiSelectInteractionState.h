// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIMULTISELECTINTERACTIONSTATE_H
#define UIMULTISELECTINTERACTIONSTATE_H

@class NSArray, NSIndexPath;

#import <Foundation/Foundation.h>


@interface UIMultiSelectInteractionState : NSObject {
    NSUInteger _ignoringSelectionChangedNotificationsCounter;
    NSUInteger _multiselectInteractionCounter;
}


@property (copy, nonatomic) NSArray *allSelectedIndexPaths; // ivar: _allSelectedIndexPaths
@property (retain, nonatomic) NSIndexPath *endIndexPath; // ivar: _endIndexPath
@property (readonly, nonatomic) BOOL ignoringSelectionChangedNotifications;
@property (readonly, nonatomic, getter=isInMultiselectInteraction) BOOL inMultiselectInteraction;
@property (copy, nonatomic) NSArray *originallySelectedIndexPaths; // ivar: _originallySelectedIndexPaths
@property (nonatomic, getter=isSelecting) BOOL selecting; // ivar: _selecting
@property (retain, nonatomic) NSIndexPath *startIndexPath; // ivar: _startIndexPath
@property (nonatomic) CGPoint startPoint; // ivar: _startPoint


-(BOOL)stillValidForSelectedIndexPaths:(id)arg0 ;
-(id)initWithCurrentSelection:(id)arg0 ;
-(id)pathsToDeselectForInterpolatedIndexPaths:(id)arg0 currentlySelectedIndexPaths:(id)arg1 ;
-(id)pathsToSelectForInterpolatedIndexPaths:(id)arg0 ;
-(void)beginMultiselectInteraction;
-(void)beginSelectingWithStartingIndexPath:(id)arg0 otherSelectedIndexPaths:(id)arg1 keepCurrentSelection:(BOOL)arg2 ;
-(void)endMultiselectInteraction;
-(void)ignoreSelectionChangedNotificationsWithBlock:(id)arg0 ;
-(void)updateStateWithDifferenceFromCurrentSelection:(id)arg0 ;
-(void)updateStateWithStartingIndexPath:(id)arg0 otherSelectedIndexPaths:(id)arg1 ;


@end


#endif