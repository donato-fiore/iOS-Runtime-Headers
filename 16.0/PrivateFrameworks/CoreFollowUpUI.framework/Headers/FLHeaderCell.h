// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLHEADERCELL_H
#define FLHEADERCELL_H

@class PSTableCell, UILabel, NSArray;



@interface FLHeaderCell : PSTableCell {
    UILabel *_followTitle;
    UILabel *_followSubtitle;
    NSArray *_constraints;
}




+(NSInteger)cellStyle;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)_updateConstraintsWithImage;
-(void)_updateConstraintsWithNoImage;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)updateConstraints;


@end


#endif