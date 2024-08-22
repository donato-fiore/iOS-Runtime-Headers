// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPROPERTYGEMINIEDITINGCELL_H
#define CNPROPERTYGEMINIEDITINGCELL_H

@class NSString;
@protocol CNPickerControllerDelegate, CNUIGeminiDataSourceDelegate;


#import "CNPropertySimpleCell.h"
#import "CNGeminiPickerController.h"

@interface CNPropertyGeminiEditingCell : CNPropertySimpleCell <CNPickerControllerDelegate, CNUIGeminiDataSourceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNGeminiPickerController *geminiPicker; // ivar: _geminiPicker
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldIndentWhileEditing;
+(BOOL)wantsChevron;
+(BOOL)wantsHorizontalLayout;
-(BOOL)shouldPerformDefaultAction;
-(CGFloat)minCellHeight;
-(id)geminiItem;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)variableConstraints;
-(void)geminiDataSourceDidUpdate:(id)arg0 ;
-(void)performDefaultAction;
-(void)picker:(id)arg0 didPickItem:(id)arg1 ;
-(void)pickerDidCancel:(id)arg0 ;


@end


#endif