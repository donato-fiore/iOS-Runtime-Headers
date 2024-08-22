// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSECTIONHEADERFOOTERCELL_H
#define HUSECTIONHEADERFOOTERCELL_H

@class UITableViewCell, NSString;
@protocol HUCellSeparatorAppearanceDefining;


#import "HUItemTableSectionHeaderFooterView.h"

@interface HUSectionHeaderFooterCell : UITableViewCell <HUCellSeparatorAppearanceDefining>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUItemTableSectionHeaderFooterView *headerFooterView; // ivar: _headerFooterView
@property (readonly, nonatomic) BOOL prefersSeparatorsHidden;
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)prepareForReuse;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif