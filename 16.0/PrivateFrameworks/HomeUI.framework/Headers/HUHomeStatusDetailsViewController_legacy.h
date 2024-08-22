// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUHOMESTATUSDETAILSVIEWCONTROLLER_LEGACY_H
#define HUHOMESTATUSDETAILSVIEWCONTROLLER_LEGACY_H

@class NSString, NSMutableDictionary;
@protocol HUAboutResidentDeviceViewControllerDelegate, UITextViewDelegate, HUHomeStatusDetailsViewControllerDelegate_legacy;


#import "HUServiceGridViewController.h"
#import "HUHomeStatusDetailsItemManager.h"
#import "HUStatusDetailsTitleDescriptionCell.h"

@interface HUHomeStatusDetailsViewController_legacy : HUServiceGridViewController <HUAboutResidentDeviceViewControllerDelegate, UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUHomeStatusDetailsViewControllerDelegate_legacy> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUHomeStatusDetailsItemManager *itemManager;
@property (retain, nonatomic) NSMutableDictionary *sizingCellForClassString; // ivar: _sizingCellForClassString
@property (readonly, nonatomic) HUStatusDetailsTitleDescriptionCell *sizingTitleDescriptionCell; // ivar: _sizingTitleDescriptionCell
@property (readonly) Class superclass;


-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint )arg1 view:(id)arg2 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 statusItem:(id)arg1 ;
-(id)initWithItemManager:(id)arg0 ;
-(id)layoutOptionsForSection:(NSInteger)arg0 ;
-(id)prepareToPerformToggleActionForItem:(id)arg0 sourceItem:(id)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)aboutResidentDeviceViewControllerDidFinish:(id)arg0 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)doneButtonPressed:(id)arg0 ;
-(void)layoutOptionsDidChange;
-(void)presentationCoordinator:(id)arg0 willBeginPresentationWithContext:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif