// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSSWITCHTABLECELL_H
#define PSSWITCHTABLECELL_H

@class UIActivityIndicatorView;


#import "PSControlTableCell.h"

@interface PSSwitchTableCell : PSControlTableCell {
    UIActivityIndicatorView *_activityIndicator;
}


@property (nonatomic) BOOL loading;


-(BOOL)canReload;
-(BOOL)shouldUseModernLayout;
-(id)controlValue;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)newControl;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)reloadWithSpecifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)setCellEnabled:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setValue:(id)arg0 ;


@end


#endif