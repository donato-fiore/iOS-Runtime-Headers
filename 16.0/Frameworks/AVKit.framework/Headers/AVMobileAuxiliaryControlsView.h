// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMOBILEAUXILIARYCONTROLSVIEW_H
#define AVMOBILEAUXILIARYCONTROLSVIEW_H

@class NSArray, NSString;
@protocol AVMobileAuxiliaryControlDelegate, AVControlOverflowButtonDelegate, AVMobileAuxiliaryControlsViewDelegate;


#import "AVView.h"
#import "AVControlOverflowButton.h"

@interface AVMobileAuxiliaryControlsView : AVView <AVMobileAuxiliaryControlDelegate, AVControlOverflowButtonDelegate>

 {
    AVControlOverflowButton *_overflowControl;
    NSArray *_controlsInPriorityOrder;
}


@property (nonatomic) CGFloat controlSpacing; // ivar: _controlSpacing
@property (retain, nonatomic) NSArray *controls; // ivar: _controls
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVMobileAuxiliaryControlsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasOverflowOnlyControl; // ivar: _hasOverflowOnlyControl
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_requiresOverflowControl;
-(id)_overflowControl;
-(id)init;
-(id)overflowMenuItemsForControlOverflowButton:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeFittingControls:(id)arg0 ;
-(void)_updateHasOverflowOnlyControl;
-(void)_updateOverflowControlContextMenu;
-(void)_updatePriorityOrderControlsList;
-(void)auxiliaryControlDidChangeState:(id)arg0 ;
-(void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)arg0 ;
-(void)layoutSubviews;
-(void)overflowButtonDidHideContextMenu:(id)arg0 ;
-(void)overflowButtonWillShowContextMenu:(id)arg0 ;
-(void)updateOverflowMenu;


@end


#endif