// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUIPLATTERSECTIONHEADERTABLEVIEWCELL_H
#define SIRIUIPLATTERSECTIONHEADERTABLEVIEWCELL_H

@class UITableViewCell, NSString;


#import "SiriUIPlatterSectionHeaderView.h"

@interface SiriUIPlatterSectionHeaderTableViewCell : UITableViewCell {
    SiriUIPlatterSectionHeaderView *_headerView;
}


@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;


+(id)_font;
+(struct CGSize )sizeThatFits:(struct CGSize )arg0 text:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)initWithText:(id)arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif