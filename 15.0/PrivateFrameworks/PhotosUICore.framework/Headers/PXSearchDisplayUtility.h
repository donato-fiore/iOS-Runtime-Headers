// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSEARCHDISPLAYUTILITY_H
#define PXSEARCHDISPLAYUTILITY_H


#import <Foundation/Foundation.h>


@interface PXSearchDisplayUtility : NSObject



+(BOOL)attributedStringFontNeedsUpdate:(id)arg0 currentFont:(id)arg1 ;
+(BOOL)layoutDirectionIsRTL;
+(BOOL)shouldUseAccessibilityLayout;
+(CGFloat)automaticRowHeight;
+(id)defaultStringAttributes;
+(id)displayStringFromResultCount:(NSUInteger)arg0 ;
+(id)highlightedAttributedStringForString:(id)arg0 highlightedSubstring:(id)arg1 matchedColor:(id)arg2 remainingColor:(id)arg3 ;
+(id)wordEmbeddingPathColor;
+(id)wordEmbeddingTextColor;


@end


#endif