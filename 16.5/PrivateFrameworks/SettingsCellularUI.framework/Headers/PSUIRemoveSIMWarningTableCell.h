// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUIREMOVESIMWARNINGTABLECELL_H
#define PSUIREMOVESIMWARNINGTABLECELL_H

@class PSTableCell, UIImageView, UILabel;



@interface PSUIRemoveSIMWarningTableCell : PSTableCell

@property (retain) UIImageView *icon; // ivar: _icon
@property (retain) UILabel *label; // ivar: _label
@property (retain) UILabel *title; // ivar: _title


-(id)detailTextLabel;
-(id)textLabel;
-(void)_setupView:(id)arg0 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif