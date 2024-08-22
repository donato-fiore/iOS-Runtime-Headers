// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUFACERECOGNITIONLIBRARYLISTVIEWCONTROLLER_H
#define HUFACERECOGNITIONLIBRARYLISTVIEWCONTROLLER_H

@class NSString;
@protocol UITextViewDelegate, HUTappableTextViewDelegate, HUSwitchCellDelegate, HUFaceRecognitionPersonEditorViewControllerDelegate;


#import "HUItemTableViewController.h"
#import "HUFaceRecognitionLibraryListItemManager.h"

@interface HUFaceRecognitionLibraryListViewController : HUItemTableViewController <UITextViewDelegate, HUTappableTextViewDelegate, HUSwitchCellDelegate, HUFaceRecognitionPersonEditorViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUFaceRecognitionLibraryListItemManager *listItemManager; // ivar: _listItemManager
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSUInteger)automaticDisablingReasonsForItem:(id)arg0 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)presentFaceRecognitionAddPersonSettingsForUnknownPersonEvent:(id)arg0 animated:(BOOL)arg1 ;
-(id)presentFaceRecognitionPersonSettingsForPerson:(id)arg0 personManager:(id)arg1 animated:(BOOL)arg2 ;
-(id)trailingSwipeActionsForItem:(id)arg0 ;
-(void)dealloc;
-(void)dismissTextViewController;
-(void)personEditorViewController:(id)arg0 didUpdateItem:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif