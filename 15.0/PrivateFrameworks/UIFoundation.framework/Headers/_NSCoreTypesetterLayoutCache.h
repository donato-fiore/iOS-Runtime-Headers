// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSCORETYPESETTERLAYOUTCACHE_H
#define _NSCORETYPESETTERLAYOUTCACHE_H


#import <Foundation/Foundation.h>

#import "_NSTextAttachmentLayoutContext.h"

@interface _NSCoreTypesetterLayoutCache : NSObject {
    NSUInteger _count;
    *unsigned short _glyphs;
    *CGSize _advances;
    CGFloat _elasticAdvances;
    *__CTFont _resolvedFont;
    NSInteger _textAlignment;
    *__CTLine _line;
    _NSTextAttachmentLayoutContext *_textAttachmentLayoutContext;
    BOOL _lineValidForDrawing;
}




-(void)dealloc;


@end


#endif