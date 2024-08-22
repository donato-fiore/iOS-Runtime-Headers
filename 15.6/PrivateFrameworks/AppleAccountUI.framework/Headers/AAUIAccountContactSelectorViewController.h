// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUIACCOUNTCONTACTSELECTORVIEWCONTROLLER_H
#define AAUIACCOUNTCONTACTSELECTORVIEWCONTROLLER_H

@class NSArray, AALocalContactInfo, UIBarButtonItem, NSString;
@protocol UITableViewDelegate, UITableViewDataSource, AAUIAccountContactSelectorDelegate;


#import "AAUIOBTableWelcomeController.h"
#import "AAUIProfilePictureStore.h"

@interface AAUIAccountContactSelectorViewController : AAUIOBTableWelcomeController <UITableViewDelegate, UITableViewDataSource>

 {
    NSArray *_suggestedContacts;
    AALocalContactInfo *_selectedContact;
    AAUIProfilePictureStore *_pictureStore;
    UIBarButtonItem *_continueButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIAccountContactSelectorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isOtherContactRowForIndexPath:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_otherContactCellForTableView:(id)arg0 ;
-(id)_pictureStore;
-(id)_suggestedContactCellForTableView:(id)arg0 atRow:(NSInteger)arg1 ;
-(id)initWithViewModel:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_selectContact;
-(void)_setupTableView;
-(void)dealloc;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif