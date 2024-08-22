// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKUITABLEVIEWCELLWITHPRIMARYANDSECONDARYFONTS_H
#define EKUITABLEVIEWCELLWITHPRIMARYANDSECONDARYFONTS_H



#import "EKUITableViewCell.h"

@interface EKUITableViewCellWithPrimaryAndSecondaryFonts : EKUITableViewCell



+(BOOL)allowLargestFontSizesForWidth:(CGFloat)arg0 ;
+(id)constrainedPrimaryTextLabelFont;
+(id)primaryTextLabelFontForWidth:(CGFloat)arg0 ;
+(id)scalablePrimaryTextLabelFont;
+(id)secondaryTextLabelFont;
+(id)timeLabelsFont;
+(void)_clearFontCaches;
+(void)initialize;
-(id)primaryTextLabelFont;
-(id)secondaryTextLabelFont;
-(id)timeLabelsFont;
-(struct UIEdgeInsets )layoutMargins;


@end


#endif