// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKTEXTATTRIBUTESVIEWCONTROLLER_H
#define AKTEXTATTRIBUTESVIEWCONTROLLER_H

@class UITableViewController, UITableViewCell, UIColor, NSString, NSNumber;
@protocol AKFontChooserUserInterfaceItem, AKTextAttributesUserInterfaceItem;


#import "AKController.h"
#import "AKFontChooserUIItemDelegate.h"
#import "AKFontListController.h"
#import "AKTextAttributesUIItemDelegate.h"

@interface AKTextAttributesViewController : UITableViewController <AKFontChooserUserInterfaceItem, AKTextAttributesUserInterfaceItem>



@property (retain, nonatomic) UITableViewCell *alignmentTableCell; // ivar: _alignmentTableCell
@property (weak, nonatomic) AKController *controller; // ivar: _controller
@property (nonatomic) id *currentAlignment; // ivar: _currentAlignment
@property (retain, nonatomic) UIColor *currentFontColor; // ivar: _currentFontColor
@property (retain, nonatomic) NSString *currentFontFamilyName; // ivar: _currentFontFamilyName
@property (retain, nonatomic) NSNumber *currentFontSize; // ivar: _currentFontSize
@property (nonatomic) id *currentStyle; // ivar: _currentStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AKFontChooserUIItemDelegate *fontUIItemDelegate; // ivar: _fontUIItemDelegate
@property (readonly) NSUInteger hash;
@property NSInteger lastActionID; // ivar: _lastActionID
@property (retain) id *lastActionValue; // ivar: _lastActionValue
@property (retain, nonatomic) AKFontListController *presetFontController; // ivar: _presetFontController
@property (retain, nonatomic) UITableViewCell *sizeTableCell; // ivar: _sizeTableCell
@property (readonly) Class superclass;
@property (retain, nonatomic) AKTextAttributesUIItemDelegate *textAttributesUIItemDelegate; // ivar: _textAttributesUIItemDelegate


+(id)fontSizeNumberFormatter;
-(BOOL)_canShowWhileLocked;
-(BOOL)validateUserInterfaceItems;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)convertFont:(id)arg0 ;
-(id)convertTextAttributes:(id)arg0 ;
-(id)createRowAlignmentCell;
-(id)createRowFontSizeCell;
-(id)initWithController:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_alignmentSegmentChanged:(id)arg0 ;
-(void)_commonInit;
-(void)_sendFontAction;
-(void)_sendTextAttributesAction;
-(void)_sizeStepperValueChanged:(id)arg0 ;
-(void)_styleSegmentChanged:(id)arg0 ;
-(void)didSelectFont:(id)arg0 ;
-(void)syncFontsToUI:(id)arg0 ;
-(void)syncTextAttributesToUI:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif