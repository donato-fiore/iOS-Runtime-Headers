// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHPAGEMANAGEMENTCELLDRAGPREVIEW_H
#define SBHPAGEMANAGEMENTCELLDRAGPREVIEW_H

@class UIView, NSHashTable;
@protocol SBIconDragPreview;


#import "SBIcon.h"
#import "SBIconView.h"

@interface SBHPageManagementCellDragPreview : UIView <SBIconDragPreview>

 {
    NSHashTable *_cleanupDelayAssertions;
}


@property (copy, nonatomic) id *cleanUpHandler; // ivar: _cleanupHandler
@property (nonatomic, getter=isDelayingCleanup) BOOL delayingCleanup; // ivar: _delayingCleanup
@property (nonatomic) NSUInteger dragState; // ivar: _dragState
@property (nonatomic, getter=isFlocked) BOOL flocked; // ivar: flocked
@property (retain, nonatomic) SBIcon *icon;
@property (nonatomic) BOOL iconAllowsAccessory; // ivar: iconAllowsAccessory
@property (nonatomic) BOOL iconAllowsLabelArea; // ivar: iconAllowsLabelArea
@property (nonatomic) BOOL iconCanShowCloseBox; // ivar: iconCanShowCloseBox
@property (nonatomic) CGFloat iconContentScale; // ivar: iconContentScale
@property (nonatomic) BOOL iconIsEditing; // ivar: iconIsEditing
@property (retain, nonatomic) SBIconView *iconView; // ivar: _iconView
@property (retain, nonatomic) SBIconView *referenceIconView; // ivar: _referenceIconView


-(id)_pageManagementCellView;
-(id)delayCleanUpForReason:(id)arg0 ;
-(id)initWithReferenceIconView:(id)arg0 ;
-(void)_configureIconViewWithReferenceIconView:(id)arg0 ;
-(void)_removeDelayCleanupAssertion:(id)arg0 ;
-(void)draggingSourceCancelAnimationCompleted;
-(void)draggingSourceDroppedWithOperation:(NSUInteger)arg0 ;
-(void)dropDestinationAnimationCompleted;
-(void)handleCleanup;
-(void)updateDestinationIconLocation:(id)arg0 allowsLabelArea:(BOOL)arg1 animated:(BOOL)arg2 ;


@end


#endif