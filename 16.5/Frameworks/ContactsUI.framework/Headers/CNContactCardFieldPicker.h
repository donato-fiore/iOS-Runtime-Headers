// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldSelectDefaultFields; // ivar: _shouldSelectDefaultFields
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) UIBarButtonItem *toggleSelectAllFieldsButton; // ivar: _toggleSelectAllFieldsButton


+(id)imageProperties;
+(id)privateCardPropertiesForContacts:(id)arg0 ;
-(BOOL)allFieldsSelected;
-(BOOL)isInActivityController;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(id)initWithContact:(id)arg0 ;
-(id)initWithContacts:(id)arg0 ;
-(id)titleForSelectAllFieldsButton;
-(void)deselectAllFields;
-(void)done:(id)arg0 ;
-(void)saveFilteredContacts;
-(void)selectAllFields;
-(void)selectDefaultFields;
-(void)setPhotoFromContact:(id)arg0 onFilteredContact:(id)arg1 ;
-(void)setUpDoneButton;
-(void)setUpTableView;
-(void)setUpToggleSelectAllFieldsButton;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)toggleSelectionOfFields:(id)arg0 ;
-(void)updateToggleSelectAllFieldsButtonTitle;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif