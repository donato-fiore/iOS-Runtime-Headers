// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUIPLATTERSECTIONHEADERCOLLECTIONVIEWCELL_H
#define SIRIUIPLATTERSECTIONHEADERCOLLECTIONVIEWCELL_H

@class NSString;


#import "SiriUIContentCollectionViewCell.h"
#import "SiriUIPlatterSectionHeaderView.h"

@interface SiriUIPlatterSectionHeaderCollectionViewCell : SiriUIContentCollectionViewCell {
    SiriUIPlatterSectionHeaderView *_headerView;
}


@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;


+(struct CGSize )sizeThatFits:(struct CGSize )arg0 text:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif