// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUFACERECOGNITIONPERSONEDITORVIEWCONTROLLER_H
#define HUFACERECOGNITIONPERSONEDITORVIEWCONTROLLER_H

@class NSString;
@protocol HUSwitchCellDelegate, HUFaceRecognitionAddPersonViewControllerDelegate, HUFaceRecognitionPersonEditorViewControllerDelegate;


#import "HUItemTableViewController.h"
#import "HUFaceRecognitionPersonEditorItemManager.h"

@interface HUFaceRecognitionPersonEditorViewController : HUItemTableViewController <HUSwitchCellDelegate, HUFaceRecognitionAddPersonViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUFaceRecognitionPersonEditorViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUFaceRecognitionPersonEditorItemManager *personItemManager; // ivar: _personItemManager
@property (nonatomic) BOOL shouldUpdateDelegate; // ivar: _shouldUpdateDelegate
@property (readonly) Class superclass;


-(BOOL)automaticallyUpdatesViewControllerTitle;
-(BOOL)shouldManageTextFieldForItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSUInteger)automaticDisablingReasonsForItem:(id)arg0 ;
-(id)initWithPerson:(id)arg0 personManager:(id)arg1 home:(id)arg2 ;
-(id)initWithPersonLikeItem:(id)arg0 ;
-(id)presentFaceRecognitionAddPersonSettingsForUnknownPersonEvent:(id)arg0 animated:(BOOL)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_deletePerson;
-(void)_presentAddPersonViewController;
-(void)addPersonViewControllerDidFinish:(id)arg0 ;
-(void)itemManager:(id)arg0 didUpdateResultsForSourceItem:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif