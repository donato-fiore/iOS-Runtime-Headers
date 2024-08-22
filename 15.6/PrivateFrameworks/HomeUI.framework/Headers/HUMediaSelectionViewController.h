// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUMEDIASELECTIONVIEWCONTROLLER_H
#define HUMEDIASELECTIONVIEWCONTROLLER_H

@class NSString;
@protocol MPMediaPickerControllerDelegatePrivate, HUSwitchCellDelegate, HUSliderValueTableViewCellDelegate, HUMediaSelectionViewControllerDelegate;


#import "HUItemTableViewController.h"
#import "HUMediaSelectionItemManager.h"

@interface HUMediaSelectionViewController : HUItemTableViewController <MPMediaPickerControllerDelegatePrivate, HUSwitchCellDelegate, HUSliderValueTableViewCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUMediaSelectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger lastTargetOptions; // ivar: _lastTargetOptions
@property (retain, nonatomic) HUMediaSelectionItemManager *mediaSelectionItemManager; // ivar: _mediaSelectionItemManager
@property (readonly) Class superclass;


-(BOOL)_allowRowInteractionForIndexPath:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithActionSetBuilder:(id)arg0 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_presentMediaPickerUnavailablePromptWithReason:(NSInteger)arg0 storeKitErrorObject:(id)arg1 ;
-(void)_presentMediaPickerWithOptionsShowsLibraryContent:(BOOL)arg0 pickingForExternalPlayer:(BOOL)arg1 ;
-(void)applyAccessory:(NSInteger)arg0 toItem:(id)arg1 onTableView:(id)arg2 ;
-(void)itemManager:(id)arg0 didUpdateResultsForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)mediaPicker:(id)arg0 didPickPlaybackArchive:(id)arg1 ;
-(void)mediaPickerDidCancel:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)sliderValueTableViewCell:(id)arg0 didChangeValue:(CGFloat)arg1 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;


@end


#endif