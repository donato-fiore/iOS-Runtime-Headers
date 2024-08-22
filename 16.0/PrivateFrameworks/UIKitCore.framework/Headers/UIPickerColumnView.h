// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPICKERCOLUMNVIEW_H
#define UIPICKERCOLUMNVIEW_H

@class NSString;
@protocol _UIPickerColumn, UIPickerTableViewContainerDelegate, UITableViewDataSource;


#import "UIView.h"
#import "UIPickerTableView.h"
#import "UIPickerView.h"
#import "UIColor.h"

@interface UIPickerColumnView : UIView <_UIPickerColumn, UIPickerTableViewContainerDelegate, UITableViewDataSource>

 {
    UIPickerTableView *_topTable;
    UIPickerTableView *_middleTable;
    UIPickerTableView *_bottomTable;
    UIView *_topContainerView;
    UIView *_middleContainerView;
    UIView *_bottomContainerView;
    CGFloat _middleBarHeight;
    UIPickerView *_pickerView;
    CGRect _tableFrame;
}


@property (retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor; // ivar: __textColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *highlightedRegion;
@property (nonatomic) BOOL isNoLongerInUse; // ivar: _isNoLongerInUse
@property (nonatomic) CGFloat leftHitTestExtension; // ivar: _leftHitTestExtension
@property (nonatomic) CATransform3D perspectiveTransform; // ivar: _perspectiveTransform
@property (nonatomic) CGFloat rightHitTestExtension; // ivar: _rightHitTestExtension
@property (nonatomic) CGFloat rowHeight; // ivar: _rowHeight
@property (nonatomic) CGRect selectionBarRect;
@property (readonly, nonatomic) NSInteger selectionBarRow;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(BOOL)_containsTable:(id)arg0 ;
-(BOOL)_pointLiesWithinEffectiveTableBounds:(struct CGPoint )arg0 ;
-(BOOL)_scrollRowAtIndexPathToSelectionBar:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)_soundsEnabled;
-(BOOL)_usesCheckSelection;
-(BOOL)canBecomeFocused;
-(BOOL)isRowChecked:(NSInteger)arg0 ;
-(BOOL)selectRow:(NSInteger)arg0 animated:(BOOL)arg1 notify:(BOOL)arg2 ;
-(BOOL)selectRow:(NSInteger)arg0 animated:(BOOL)arg1 notify:(BOOL)arg2 updateChecked:(BOOL)arg3 ;
-(CGFloat)_horizontalBiasForEndTables;
-(NSInteger)numberOfRowsInSection:(NSInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_allVisibleCells;
-(id)_createContainerViewWithFrame:(struct CGRect )arg0 ;
-(id)_createTableViewWithFrame:(struct CGRect )arg0 containingFrame:(struct CGRect )arg1 ;
-(id)_defaultFocusEffect;
-(id)_preferredTable;
-(id)_systemDefaultFocusGroupIdentifier;
-(id)_visibleCellClosestToPoint:(struct CGPoint )arg0 inView:(id)arg1 ;
-(id)cellForRowAtIndexPath:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 tableFrame:(struct CGRect )arg1 middleBarHeight:(CGFloat)arg2 rowHeight:(CGFloat)arg3 pickerView:(id)arg4 transform:(struct CATransform3D )arg5 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CATransform3D )_transformForTableWithPerspectiveTranslationX:(CGFloat)arg0 ;
-(struct CATransform3D )_transformForTableWithTranslationX:(CGFloat)arg0 ;
-(struct CGRect )_defaultFocusRegionFrame;
-(struct CGRect )_tableFrame;
-(struct CGRect )accessibilityFrame;
-(struct _NSRange )_visibleGlobalRows;
-(void)_centerTableInContainer:(id)arg0 ;
-(void)_moveTableViewIfNecessary:(id)arg0 toContentOffset:(struct CGPoint )arg1 ;
-(void)_pickerTableViewDidChangeContentOffset:(id)arg0 ;
-(void)_sendCheckedRow:(NSInteger)arg0 inTableView:(id)arg1 checked:(BOOL)arg2 ;
-(void)beginUpdates;
-(void)endUpdates;
-(void)markAsNoLongerInUse;
-(void)pickerTableView:(id)arg0 didChangeSelectionBarRowFrom:(NSInteger)arg1 to:(NSInteger)arg2 ;
-(void)reloadData;
-(void)setAllowsMultipleSelection:(BOOL)arg0 ;


@end


#endif