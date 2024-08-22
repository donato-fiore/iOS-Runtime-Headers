// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSELECTABLEGRIDACTIONSETLISTVIEWCONTROLLER_H
#define HUSELECTABLEGRIDACTIONSETLISTVIEWCONTROLLER_H

@class HFMutableSetDiff;
@protocol HUSelectableGridActionSetListViewControllerDelegate;


#import "HUGridActionSetListViewController.h"

@interface HUSelectableGridActionSetListViewController : HUGridActionSetListViewController

@property (weak, nonatomic) NSObject<HUSelectableGridActionSetListViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) HFMutableSetDiff *mutableSelectedActionSets; // ivar: _mutableSelectedActionSets


-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint )arg1 ;
-(id)init;
-(id)initWithRoom:(id)arg0 selectedActionSets:(id)arg1 ;
-(void)_selectedItemStateChanged:(id)arg0 isSelected:(BOOL)arg1 accessoryViewCell:(id)arg2 ;
-(void)_updateSelectionState:(BOOL)arg0 forCell:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)selectedActionSetStateChanged:(id)arg0 isSelected:(BOOL)arg1 ;


@end


#endif