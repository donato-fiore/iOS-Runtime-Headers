// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSTEXTEDITINGPANE_H
#define PSTEXTEDITINGPANE_H

@class UITableView, UITextField, NSString;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "PSEditingPane.h"
#import "PSTextEditingCell.h"

@interface PSTextEditingPane : PSEditingPane <UITableViewDelegate, UITableViewDataSource>

 {
    UITableView *_table;
    PSTextEditingCell *_cell;
    UITextField *_textField;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)becomeFirstResponder;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferenceValue;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setPreferenceSpecifier:(id)arg0 ;
-(void)setPreferenceValue:(id)arg0 ;


@end


#endif