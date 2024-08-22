// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPCOLLABORATIONFOOTERSTYLE_H
#define LPCOLLABORATIONFOOTERSTYLE_H


#import <Foundation/Foundation.h>

#import "LPPointUnit.h"
#import "LPTextViewStyle.h"
#import "LPPadding.h"

@interface LPCollaborationFooterStyle : NSObject

@property (retain, nonatomic) LPPointUnit *cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) LPTextViewStyle *handle; // ivar: _handle
@property (retain, nonatomic) LPPointUnit *indicatorSpacing; // ivar: _indicatorSpacing
@property (readonly, retain, nonatomic) LPPadding *margin; // ivar: _margin
@property (readonly, nonatomic) LPTextViewStyle *options; // ivar: _options
@property (readonly, retain, nonatomic) LPPadding *padding; // ivar: _padding
@property (readonly, retain, nonatomic) LPPadding *separatorMargin; // ivar: _separatorMargin
@property (nonatomic) BOOL showSeparator; // ivar: _showSeparator
@property (nonatomic) BOOL useFullWidth; // ivar: _useFullWidth
@property (nonatomic) BOOL useFullWidthDuringSizing; // ivar: _useFullWidthDuringSizing
@property (nonatomic) BOOL useInlineIndicator; // ivar: _useInlineIndicator


-(id)initWithPlatform:(NSInteger)arg0 sizeClass:(NSUInteger)arg1 fontScalingFactor:(CGFloat)arg2 ;


@end


#endif