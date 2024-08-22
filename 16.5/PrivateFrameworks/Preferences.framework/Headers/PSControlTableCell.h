// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSCONTROLTABLECELL_H
#define PSCONTROLTABLECELL_H

@class UIControl;


#import "PSTableCell.h"

@interface PSControlTableCell : PSTableCell {
    UIControl *_control;
}


@property (retain, nonatomic) UIControl *control;


-(BOOL)canReload;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)newControl;
-(id)valueLabel;
-(void)controlChanged:(id)arg0 ;
-(void)dealloc;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setCellEnabled:(BOOL)arg0 ;


@end


#endif