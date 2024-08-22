// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FASHAREDSERVICESSPECIFIERCELL_H
#define FASHAREDSERVICESSPECIFIERCELL_H

@class PSTableCell, NSLayoutConstraint;



@interface FASharedServicesSpecifierCell : PSTableCell {
    NSLayoutConstraint *_widthConstraint;
}




+(NSInteger)cellStyle;
-(id)blankIcon;
-(id)getLazyIcon;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif