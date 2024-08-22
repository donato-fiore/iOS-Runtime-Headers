// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTACTIONCELL_H
#define CNCONTACTACTIONCELL_H

@class UILabel;


#import "CNLabeledCell.h"
#import "CNContactAction.h"
#import "CNCardActionGroupItem.h"
#import "CNTransportButton.h"

@interface CNContactActionCell : CNLabeledCell

@property (readonly, nonatomic) CNContactAction *action;
@property (readonly, nonatomic) CNCardActionGroupItem *actionGroupItem;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) CNTransportButton *transportIcon; // ivar: _transportIcon


+(BOOL)shouldIndentWhileEditing;
-(BOOL)shouldPerformDefaultAction;
-(CGFloat)minCellHeight;
-(id)rightMostView;
-(id)variableConstraints;
-(void)setCardGroupItem:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif