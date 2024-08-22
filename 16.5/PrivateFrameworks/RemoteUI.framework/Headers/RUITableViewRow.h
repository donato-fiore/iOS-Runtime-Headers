// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RUITABLEVIEWROW_H
#define RUITABLEVIEWROW_H

@class NSMutableArray, UISwitch, NSDateFormatter, UIControl, NSString, NSData, NSDate, NSDictionary, UIView, NSMutableSet;
@protocol RUIWebContainerViewDelegate, UIPickerViewDelegate, UITextFieldDelegate, RUITableViewRowDelegate, RUITextFieldChangeObserver;


#import "RUIElement.h"
#import "RemoteUITableViewCell.h"
#import "RUIDetailButtonElement.h"
#import "RUIPage.h"
#import "RUITableViewSection.h"
#import "RUITableView.h"

@interface RUITableViewRow : RUIElement <RUIWebContainerViewDelegate, UIPickerViewDelegate, UITextFieldDelegate>

 {
    RemoteUITableViewCell *_tableCell;
    NSMutableArray *_selectOptions;
    UISwitch *_switchControl;
    BOOL _switchValue;
    float _cachedHeight;
    NSDateFormatter *_datePickerFormatter;
}


@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (nonatomic) BOOL configured; // ivar: _configured
@property (readonly, nonatomic) UIControl *control;
@property (readonly, nonatomic) NSString *copyText;
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSDate *dateMax; // ivar: _dateMax
@property (retain, nonatomic) NSDate *dateMin; // ivar: _dateMin
@property (readonly, nonatomic) NSInteger datePickerMode; // ivar: _datePickerMode
@property (readonly, nonatomic) NSInteger datePickerStyle; // ivar: _datePickerStyle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RUITableViewRowDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDictionary *deleteAction; // ivar: _deleteAction
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) RUIDetailButtonElement *detailButton; // ivar: _detailButton
@property (nonatomic, getter=isFocused) BOOL focused; // ivar: _focused
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat height; // ivar: _height
@property (readonly, nonatomic) BOOL indentWhileEditing;
@property (readonly, nonatomic) BOOL isCopyable;
@property (readonly, nonatomic) BOOL isEditingEnabled;
@property (weak, nonatomic) RUIPage *linkedPage; // ivar: _linkedPage
@property (retain, nonatomic) UIView *pickerView; // ivar: _pickerView
@property (nonatomic) BOOL rowInvalid; // ivar: _rowInvalid
@property (retain, nonatomic) NSMutableSet *searchTerms; // ivar: _searchTerms
@property (weak, nonatomic) RUITableViewSection *section; // ivar: _section
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) NSInteger selectedRow; // ivar: _selectedRow
@property (nonatomic, getter=isShowingProgressIndicator) BOOL showingProgressIndicator; // ivar: _showingProgressIndicator
@property (readonly) Class superclass;
@property (weak, nonatomic) RUITableView *tableView; // ivar: _tableView
@property (weak, nonatomic) NSObject<RUITextFieldChangeObserver> *textFieldChangeObserver; // ivar: _textFieldChangeObserver


+(id)_formatterForDateYMD;
+(id)_formatterForMonthAndDay;
+(id)_formatterForShortDate;
+(id)_formatterForYearAndMonth;
+(id)_timeZoneAdjustedDateFromDate:(id)arg0 ;
+(void)initialize;
+(void)resetLocale;
-(BOOL)_matchesSearchTermComponent:(id)arg0 ;
-(BOOL)loadAccessoryImage;
-(BOOL)matchesSearchTerm:(id)arg0 ;
-(BOOL)rowSupportsLoadingIndicator;
-(BOOL)setSelectPageRowValue:(id)arg0 ;
-(BOOL)supportsAutomaticSelection;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(BOOL)wantsInlineActivityIndicator;
-(Class)tableCellClass;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(NSInteger)tableCellStyle;
-(float)rowHeightWithMax:(float)arg0 peggedHeight:(float)arg1 tableView:(id)arg2 indexPath:(id)arg3 ;
-(id)_cellSelectionStyleNumber;
-(id)_checkmarkAccessoryViewWithSelected:(BOOL)arg0 ;
-(id)newConfiguredDatePicker;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(id)radioGroupSelectedColor;
-(id)selectOptions;
-(id)tableCell;
-(id)textColorForAttributeName:(id)arg0 ;
-(id)textColorForAttributeName:(id)arg0 defaultColorString:(id)arg1 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)_addDoneButtonToTextField:(id)arg0 ;
-(void)_datePickerChanged:(id)arg0 ;
-(void)_doneButtonTapped;
-(void)_drawCustomImage:(BOOL)arg0 ;
-(void)_setBackgroundColor;
-(void)_switchFlipped:(id)arg0 ;
-(void)accessoryImageLoaded;
-(void)activateDatePicker;
-(void)clearCachedHeight;
-(void)dealloc;
-(void)detailLabelActivatedLinkFromCell:(id)arg0 completion:(id)arg1 ;
-(void)didBecomeDeselected;
-(void)didBecomeSelected;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)populatePostbackDictionary:(id)arg0 ;
-(void)setAttributes:(id)arg0 ;
-(void)setDetailAndPlaceholderText;
-(void)setEditableTextFieldValue:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setImageSize:(struct CGSize )arg0 ;
-(void)setSelectRowValue:(id)arg0 ;
-(void)setValueFromString:(id)arg0 ;
-(void)setValueFromString:(id)arg0 notify:(BOOL)arg1 ;
-(void)setupDatePickerWithCell:(id)arg0 ;
-(void)startActivityIndicator;
-(void)stopActivityIndicator;
-(void)switchCanceled;
-(void)textFieldEditingDidEnd:(id)arg0 ;
-(void)webContainerView:(id)arg0 didClickLinkWithURL:(id)arg1 ;


@end


#endif