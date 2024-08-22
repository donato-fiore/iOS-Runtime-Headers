// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTCARDFIELDPICKER_H
#define CNCONTACTCARDFIELDPICKER_H

@class UIViewController, NSArray, NSString, UITableView, UIBarButtonItem;
@protocol UITableViewDelegate, CNContactCardFieldPickerDelegate;


#import "CNContactCardFieldPickerDataSource.h"

@interface CNContactCardFieldPicker : UIViewController <UITableViewDelegate>



@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<CNContactCardFieldPickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNContactCardFieldPickerDataSource *fieldPickerDataSource; // ivar: _fieldPickerDataSource
@property (retain, nonatomic) NSArray *filteredContacts; // ivar: _filteredContacts
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) UIBarButtonItem *toggleSelectAllFieldsButton; // ivar: _toggleSelectAllFieldsButton


+(id)imageProperties;
-(BOOL)allFieldsSelected;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(id)initWithContact:(id)arg0 ;
-(id)initWithContacts:(id)arg0 ;
-(id)initWithContacts:(id)arg0 filteredContacts:(id)arg1 ;
-(id)titleForSelectAllFieldsButton;
-(void)configureNavigationItems;
-(void)deselectAllFields;
-(void)done:(id)arg0 ;
-(void)saveFilteredContacts;
-(void)selectAllFields;
-(void)setPhotoFromContact:(id)arg0 onFilteredContact:(id)arg1 ;
-(void)setUpTableView;
-(void)setUpToggleSelectAllFieldsButton;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)toggleSelectionOfFields:(id)arg0 ;
-(void)updateToggleSelectAllFieldsButtonTitle;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif