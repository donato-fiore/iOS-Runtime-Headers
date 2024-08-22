// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RUITABLEVIEW_H
#define RUITABLEVIEW_H

@class UITableView, UIDatePicker, _UIBackdropView, NSIndexPath, NSDate, UIView<RUIHeader>, UITraitCollection, NSString, NSDictionary, NSMutableArray, UIPickerView;
@protocol UITableViewDataSource, UITableViewDelegate, RUITableViewRowDelegate, RUITopLevelPageElement, RUIWebViewDelegate;


#import "RUIElement.h"
#import "RUIBarButtonItem.h"
#import "RUITableViewRow.h"
#import "RUIFooterElement.h"
#import "RUIHeaderElement.h"
#import "RUIObjectModel.h"
#import "RUIPage.h"
#import "RUISubHeaderElement.h"

@interface RUITableView : RUIElement <UITableViewDataSource, UITableViewDelegate, RUITableViewRowDelegate, RUITopLevelPageElement, RUIWebViewDelegate>

 {
    UITableView *_tableView;
    BOOL _showSelectPicker;
    UIDatePicker *_datePicker;
    BOOL _showDatePicker;
    _UIBackdropView *_pickerBackdrop;
    NSIndexPath *_pickerRowIndexPath;
    NSIndexPath *_embeddedPickerRowIndexPath;
    BOOL _registeredForNotifications;
    float _lastLayoutWidth;
    float _fullscreenCellHeight;
    BOOL _showingPickerNavBarButtons;
    RUIBarButtonItem *_oldLeftBarButtonItemForPicker;
    RUIBarButtonItem *_oldRightBarButtonItemForPicker;
    NSDate *_oldPickerDate;
    UIView<RUIHeader> *_headerView;
    UITraitCollection *_currentTraitCollection;
    BOOL _sectionContentInsetInitialized;
    BOOL _showingLeftLabelNavBarButtons;
    RUIBarButtonItem *_oldLeftBarButtonItemForLabel;
    BOOL _showingRightLabelNavBarButtons;
    RUIBarButtonItem *_oldRightBarButtonItemForLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) RUITableViewRow *defaultFirstResponderRow; // ivar: _defaultFirstResponderRow
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) RUIFooterElement *footer; // ivar: _footer
@property (retain, nonatomic) NSDictionary *footerViewAttributes;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIHeaderElement *header; // ivar: _header
@property (retain, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (readonly, nonatomic) UIView<RUIHeader> *headerView;
@property (readonly, nonatomic) NSDictionary *headerViewAttributes;
@property (weak, nonatomic) RUIObjectModel *objectModel; // ivar: _objectModel
@property (weak, nonatomic) RUIPage *page; // ivar: _page
@property (readonly, nonatomic) NSMutableArray *sections; // ivar: _sections
@property (retain, nonatomic) UIPickerView *selectPicker; // ivar: _selectPicker
@property (readonly, nonatomic, getter=isShowingPicker) BOOL showingPicker;
@property (retain, nonatomic) RUISubHeaderElement *subHeader; // ivar: _subHeader
@property (retain, nonatomic) NSString *subHeaderTitle; // ivar: _subHeaderTitle
@property (readonly) Class superclass;


+(void)_enableTestMode;
-(BOOL)_becomeFirstResponderAtIndexPath:(id)arg0 ;
-(BOOL)_isRegularWidth;
-(BOOL)tableView:(id)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldShowMenuForRowAtIndexPath:(id)arg1 ;
-(BOOL)webViewOM:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(NSInteger)arg2 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(Class)tableCellClassForTableViewRow:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 titleAlignmentForFooterInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 titleAlignmentForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)tableViewStyle;
-(id)_objectModelIndexPathForIndexPath:(id)arg0 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg0 ;
-(id)indexPathForRow:(id)arg0 ;
-(id)initWithAttributes:(id)arg0 parent:(id)arg1 ;
-(id)objectModelRowForIndexPath:(id)arg0 ;
-(id)rowWithIdentifier:(id)arg0 ;
-(id)sourceURL;
-(id)sourceURLForRUITableViewRow;
-(id)staticValues;
-(id)subElementWithID:(id)arg0 ;
-(id)subElementsWithName:(id)arg0 ;
-(id)tableView;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)textFieldRow:(id)arg0 changeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(id)titleLabel;
-(id)view;
-(id)viewForElementIdentifier:(id)arg0 ;
-(struct CGSize )_tableHeaderSizeForHeader:(id)arg0 ;
-(void)_clearPickers;
-(void)_datePickerRevert;
-(void)_enumerateRowsUsingBlock:(id)arg0 ;
-(void)_hideDatePickerNavBarButtonsIfNeeded;
-(void)_hideLeftBarButtonItemForLabel;
-(void)_hideRightBarButtonItemForLabel;
-(void)_loadHeaderView;
-(void)_registerForNotifications:(BOOL)arg0 ;
-(void)_setBottomInset:(float)arg0 ;
-(void)_showDatePickerNavBarButtonsIfNeededForRow:(id)arg0 ;
-(void)_showLeftBarButtonItemForLabel;
-(void)_showRightBarButtonItemForLabel;
-(void)_textChanged:(id)arg0 ;
-(void)_updateSectionContentInsetForSettingsWithAnimation:(BOOL)arg0 ;
-(void)activateRowAtIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)automaticKeyboardDidHide:(id)arg0 ;
-(void)automaticKeyboardDidShow:(id)arg0 ;
-(void)datePickerCancel:(id)arg0 ;
-(void)datePickerDone:(id)arg0 ;
-(void)dealloc;
-(void)hidePickerViewAnimated:(BOOL)arg0 ;
-(void)insertRow:(id)arg0 atIndexPath:(id)arg1 ;
-(void)leftLabelDone:(id)arg0 ;
-(void)performAction:(int)arg0 forElement:(id)arg1 completion:(id)arg2 ;
-(void)populatePostbackDictionary:(id)arg0 ;
-(void)reloadHeadersAndFootersForSection:(id)arg0 ;
-(void)removeRowAtIndexPath:(id)arg0 ;
-(void)rightLabelDone:(id)arg0 ;
-(void)rowDidChange:(id)arg0 action:(int)arg1 ;
-(void)rowDidEndEditing:(id)arg0 ;
-(void)rowIsFirstResponder:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setAttributes:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setImageAlignment:(int)arg0 ;
-(void)setImageSize:(struct CGSize )arg0 ;
-(void)setSelectedRadioGroupRow:(id)arg0 ;
-(void)showPickerViewForRow:(id)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)tableView:(id)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)textFieldStartedEditing:(id)arg0 ;
-(void)traitCollectionDidChangeFrom:(id)arg0 toTraitCollection:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayout;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif