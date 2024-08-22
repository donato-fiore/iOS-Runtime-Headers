// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKLEGACYUILISTHEADERCELL_H
#define EKLEGACYUILISTHEADERCELL_H

@class UITableViewHeaderFooterView;


#import "EKLegacyUIListHeaderCellContentView.h"

@interface EKLegacyUIListHeaderCell : UITableViewHeaderFooterView {
    EKLegacyUIListHeaderCellContentView *_contentView;
}


@property (nonatomic) CGFloat date;
@property (nonatomic) BOOL indentsForDots;
@property (readonly, nonatomic) BOOL reusable;
@property (nonatomic) BOOL showWeekNumber; // ivar: _showWeekNumber


+(CGFloat)timeWidthIncludingDots:(BOOL)arg0 ;
+(CGFloat)xMidpointForCalendarDot;
+(id)_allDayLocalizedString;
+(id)_noonLocalizedString;
+(void)_calculateWidths;
-(id)initWithFrame:(struct CGRect )arg0 date:(CGFloat)arg1 timeZone:(id)arg2 ;
-(void)setNeedsDisplay;


@end


#endif