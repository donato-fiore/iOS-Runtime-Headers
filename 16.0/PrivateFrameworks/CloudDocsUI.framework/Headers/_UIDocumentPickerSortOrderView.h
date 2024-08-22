// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDOCUMENTPICKERSORTORDERVIEW_H
#define _UIDOCUMENTPICKERSORTORDERVIEW_H

@class UIControl, NSArray, UIButton, UISegmentedControl;
@protocol _UIDocumentPickerViewServiceViewController;



@interface _UIDocumentPickerSortOrderView : UIControl

@property (copy, nonatomic) NSArray *centeredConstraints; // ivar: _centeredConstraints
@property (copy, nonatomic) NSArray *leftAlignedConstraints; // ivar: _leftAlignedConstraints
@property (nonatomic) NSInteger listMode; // ivar: _listMode
@property (retain, nonatomic) UIButton *listModeToggle; // ivar: _listModeToggle
@property (nonatomic) BOOL listModeToggleHidden; // ivar: _listModeToggleHidden
@property (nonatomic) NSObject<_UIDocumentPickerViewServiceViewController> *serviceViewController; // ivar: _serviceViewController
@property (retain, nonatomic) UISegmentedControl *sortOrder; // ivar: _sortOrder
@property (nonatomic) int value;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_toggleListMode:(id)arg0 ;
-(void)layoutSubviews;
-(void)setNeedsLayout;
-(void)updateForListMode;
-(void)valueChanged:(id)arg0 ;


@end


#endif