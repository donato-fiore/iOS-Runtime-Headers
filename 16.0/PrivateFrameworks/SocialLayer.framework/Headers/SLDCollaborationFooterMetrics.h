// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLDCOLLABORATIONFOOTERMETRICS_H
#define SLDCOLLABORATIONFOOTERMETRICS_H

@class UISSlotStyle, NSAttributedString;

#import <Foundation/Foundation.h>

#import "SLDCollaborationFooterSlotTag.h"

@interface SLDCollaborationFooterMetrics : NSObject

@property (readonly, nonatomic) CGFloat expectedHeight;
@property (readonly, nonatomic) UISSlotStyle *style; // ivar: _style
@property (readonly, copy, nonatomic) NSAttributedString *subtitleAttributedString;
@property (readonly, nonatomic) SLDCollaborationFooterSlotTag *tag; // ivar: _tag
@property (readonly, copy, nonatomic) NSAttributedString *titleAttributedString;


-(id)attributedStringWithString:(id)arg0 textStyle:(struct __CFString *)arg1 color:(struct CGColor *)arg2 ;
-(id)initWithSlotStyle:(id)arg0 tag:(id)arg1 ;
-(struct CGColor *)labelColor;
-(struct CGColor *)secondaryLabelColor;
-(struct CGRect )boundingRectForString:(id)arg0 ;


@end


#endif