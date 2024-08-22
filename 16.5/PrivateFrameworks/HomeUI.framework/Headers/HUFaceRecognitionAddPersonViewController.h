// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUFACERECOGNITIONADDPERSONVIEWCONTROLLER_H
#define HUFACERECOGNITIONADDPERSONVIEWCONTROLLER_H

@class UIBarButtonItem;
@protocol HUFaceRecognitionAddPersonViewControllerDelegate;


#import "HUSearchableItemTableViewController.h"
#import "HUFaceRecognitionAddPersonItemManager.h"

@interface HUFaceRecognitionAddPersonViewController : HUSearchableItemTableViewController

@property (readonly, nonatomic) HUFaceRecognitionAddPersonItemManager *addPersonItemManager; // ivar: _addPersonItemManager
@property (weak, nonatomic) NSObject<HUFaceRecognitionAddPersonViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIBarButtonItem *doneButton; // ivar: _doneButton


-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSUInteger)automaticDisablingReasonsForItem:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 searchBar:(id)arg2 searchBarPosition:(NSUInteger)arg3 ;
-(id)initWithSignificantEvent:(id)arg0 home:(id)arg1 ;
-(void)_donePressed:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateForSearch;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif