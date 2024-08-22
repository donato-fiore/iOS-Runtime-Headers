// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVCOLLECTIONVIEWLOCKUPCELL_H
#define _TVCOLLECTIONVIEWLOCKUPCELL_H

@class UIView<TVAuxiliaryViewSelecting>, NSString;
@protocol TVAuxiliaryViewSelecting, TVCollectionViewLockupCellDelegate;


#import "TVContainerCollectionViewCell.h"

@interface _TVCollectionViewLockupCell : TVContainerCollectionViewCell <TVAuxiliaryViewSelecting>

 {
    BOOL _pressIsAnimating;
    UIView<TVAuxiliaryViewSelecting> *__selectingView;
    BOOL _unpressOnEndAnimating;
    ? _delegateFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVCollectionViewLockupCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_descendantsShouldHighlight;
-(id)_preferredConfigurationForFocusAnimation:(NSInteger)arg0 inContext:(id)arg1 ;
-(id)_selectingView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)layeredImageContainerLayer;
-(id)selectingView;
-(struct UIEdgeInsets )selectionMarginsForSize:(struct CGSize )arg0 ;
-(void)_clearPressState;
-(void)_handleSelect;
-(void)_searchForFocusRegionsInContext:(id)arg0 ;
-(void)_showPressState;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif