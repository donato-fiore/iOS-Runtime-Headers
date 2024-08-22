// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSHARESHEETRENDERING_H
#define SFSHARESHEETRENDERING_H


#import <Foundation/Foundation.h>


@interface SFShareSheetRendering : NSObject



+(BOOL)isAXFromConfig:(id)arg0 ;
+(CGFloat)morePlatterMaxWidthFromConfig:(id)arg0 ;
+(CGFloat)platterMaxWidthFromConfig:(id)arg0 ;
+(NSInteger)hostNaturalTextAlignmentFromConfig:(id)arg0 ;
+(id)badgeNumberFormatterFromConfig:(id)arg0 ;
+(id)cappedOrthoLabelFontFromConfig:(id)arg0 ;
+(id)cappedOrthoLabelFontTextStyle;
+(id)drawingCommandsForActionPlatterWithTitle:(id)arg0 tintColor:(id)arg1 hostConfig:(id)arg2 ;
+(id)drawingCommandsForMoreListEntryTitle:(id)arg0 labelColor:(id)arg1 hostConfig:(id)arg2 ;
+(id)drawingCommandsForNameLabelWithString:(id)arg0 textColor:(id)arg1 maxNumberOfLines:(NSUInteger)arg2 isAirDrop:(BOOL)arg3 ignoreNameWrapping:(BOOL)arg4 hostConfig:(id)arg5 ;
+(id)drawingCommandsForNearbyBadgeWithCount:(NSInteger)arg0 hostConfig:(id)arg1 ;
+(id)drawingCommandsForUIActivityTitle:(id)arg0 foregroundColor:(id)arg1 hostConfig:(id)arg2 ;
+(struct CGImage *)createCGImageForRenderingCommand:(id)arg0 ;
+(struct CGSize )nameLabelSizeFromConfig:(id)arg0 ;


@end


#endif