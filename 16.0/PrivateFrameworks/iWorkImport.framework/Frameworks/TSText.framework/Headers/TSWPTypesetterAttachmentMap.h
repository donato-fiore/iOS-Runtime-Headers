// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPTYPESETTERATTACHMENTMAP_H
#define TSWPTYPESETTERATTACHMENTMAP_H

@class TSDLayout;

#import <Foundation/Foundation.h>

#import "TSWPAttachment.h"

@interface TSWPTypesetterAttachmentMap : NSObject

@property (weak, nonatomic) TSWPAttachment *attachment; // ivar: _attachment
@property (nonatomic) BOOL isWithinVerticalText; // ivar: _isWithinVerticalText
@property (retain, nonatomic) TSDLayout *layout; // ivar: _layout
@property (nonatomic) BOOL layoutNeedsRevalidation; // ivar: _layoutNeedsRevalidation
@property (readonly, nonatomic) *__CTLine lineRef; // ivar: _lineRef


+(id)mapWithAttachment:(id)arg0 layout:(id)arg1 pageNumber:(NSUInteger)arg2 pageCount:(NSUInteger)arg3 footnoteMarkProvider:(id)arg4 styleProvider:(id)arg5 colorOverride:(id)arg6 textScalePercent:(NSUInteger)arg7 targetSupportsPageNumbers:(BOOL)arg8 ;
-(BOOL)hasLayout;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif