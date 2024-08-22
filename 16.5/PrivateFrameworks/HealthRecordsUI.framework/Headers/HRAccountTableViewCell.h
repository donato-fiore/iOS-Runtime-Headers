// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRACCOUNTTABLEVIEWCELL_H
#define HRACCOUNTTABLEVIEWCELL_H



#import "HRSourceTableViewCell.h"

@interface HRAccountTableViewCell : HRSourceTableViewCell {
    ? brandView;
}




+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)configureWithAccount:(id)arg0 dataProvider:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif