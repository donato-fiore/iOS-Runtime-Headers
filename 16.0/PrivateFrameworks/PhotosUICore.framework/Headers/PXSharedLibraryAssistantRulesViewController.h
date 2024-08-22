// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYASSISTANTRULESVIEWCONTROLLER_H
#define PXSHAREDLIBRARYASSISTANTRULESVIEWCONTROLLER_H

@class OBTableWelcomeController, NSArray, OBBoldTrayButton, NSString;
@protocol PHPickerViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, PXAssistantViewController, PXAssistantViewControllerDelegate;


#import "PXSharedLibraryAssistantViewModel.h"

@interface PXSharedLibraryAssistantRulesViewController : OBTableWelcomeController <PHPickerViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, PXAssistantViewController>

 {
    NSArray *_listViewItems;
    OBBoldTrayButton *_continueButton;
}


@property (weak, nonatomic) NSObject<PXAssistantViewControllerDelegate> *assistantViewControllerDelegate; // ivar: assistantViewControllerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *footerText;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel; // ivar: _viewModel


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithViewModel:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_continueWithPhotosPicker;
-(void)_continueWithPolicy:(NSInteger)arg0 ;
-(void)_handlePickerResults:(id)arg0 ;
-(void)_updateIcon;
-(void)addLaterButtonTapped:(id)arg0 ;
-(void)continueAndSkipMovingItems;
-(void)continueButtonTapped:(id)arg0 ;
-(void)continueWithSelectedRuleType;
-(void)picker:(id)arg0 didFinishPicking:(id)arg1 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif