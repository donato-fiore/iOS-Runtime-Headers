// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSMULTILINETITLETABLECELL_H
#define PSMULTILINETITLETABLECELL_H

@class PSTableCell, NSLayoutConstraint;



@interface PSMultilineTitleTableCell : PSTableCell

@property (retain, nonatomic) NSLayoutConstraint *titleLeadingCon; // ivar: _titleLeadingCon
@property (retain, nonatomic) NSLayoutConstraint *valueTrailingCon; // ivar: _valueTrailingCon


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif