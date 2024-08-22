// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPROPERTYEDITINGCELL_H
#define CNPROPERTYEDITINGCELL_H

@class NSString, UIButton;
@protocol CNPickerControllerDelegate;


#import "CNPropertyCell.h"
#import "CNRepeatingGradientSeparatorView.h"

@interface CNPropertyEditingCell : CNPropertyCell <CNPickerControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIButton *labelButton; // ivar: _labelButton
@property (readonly) Class superclass;
@property (retain, nonatomic) CNRepeatingGradientSeparatorView *vseparator; // ivar: _vseparator


+(BOOL)wantsChevron;
+(BOOL)wantsStandardConstraints;
-(CGFloat)effectiveLabelWidth;
-(CGFloat)leftValueMargin;
-(CGFloat)minCellHeight;
-(id)constantConstraints;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)labelView;
-(id)valueString;
-(id)variableConstraints;
-(void)dealloc;
-(void)labelButtonClicked:(id)arg0 ;
-(void)picker:(id)arg0 didDeleteItem:(id)arg1 ;
-(void)picker:(id)arg0 didPickItem:(id)arg1 ;
-(void)pickerDidCancel:(id)arg0 ;
-(void)regainFocus;
-(void)setValueTextAttributes:(id)arg0 ;
-(void)updateWithPropertyItem:(id)arg0 ;


@end


#endif