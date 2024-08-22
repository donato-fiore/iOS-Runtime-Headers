// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIACTIVITYBUTTONCELL_H
#define PUIACTIVITYBUTTONCELL_H

@class PSTableCell, UILabel, UIActivityIndicatorView;



@interface PUIActivityButtonCell : PSTableCell

@property (retain, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif