// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRUFOLLOWUPHEADERCELL_H
#define CRUFOLLOWUPHEADERCELL_H

@class PSTableCell, UILabel, NSArray;



@interface CRUFollowUpHeaderCell : PSTableCell {
    UILabel *_followTitle;
    UILabel *_followSubtitle;
    NSArray *_constraints;
}




+(NSInteger)cellStyle;
-(id)createFollowUpSubtitle;
-(id)createFollowUpTitle;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)updateConstraints;


@end


#endif