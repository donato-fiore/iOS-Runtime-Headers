// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT22SIGNATURETABLEVIEWCELL_H
#define _TTC8PAPERKIT22SIGNATURETABLEVIEWCELL_H

@class UITableViewCell;



@interface _TtC8PaperKit22SignatureTableViewCell : UITableViewCell {
    ? contentLeadingInset;
    ? contentEditLeadingInset;
    ? contentTrailingInset;
    ? contentVerticalInset;
    ? signatureView;
    ? signature;
    ? signatureViewLeadingConstraint;
    ? signatureViewTrailingConstraint;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;


@end


#endif