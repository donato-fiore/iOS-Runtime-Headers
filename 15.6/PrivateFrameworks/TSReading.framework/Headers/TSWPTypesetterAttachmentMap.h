// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPTYPESETTERATTACHMENTMAP_H
#define TSWPTYPESETTERATTACHMENTMAP_H


#import <Foundation/Foundation.h>

#import "TSWPAttachment.h"
#import "TSDLayout.h"

@interface TSWPTypesetterAttachmentMap : NSObject

@property (nonatomic) TSWPAttachment *attachment; // ivar: _attachment
@property (retain, nonatomic) TSDLayout *layout; // ivar: _layout
@property (readonly, nonatomic) *__CTLine lineRef; // ivar: _lineRef


+(id)mapWithAttachment:(id)arg0 layout:(id)arg1 pageNumber:(NSUInteger)arg2 pageCount:(NSUInteger)arg3 footnoteMarkProvider:(id)arg4 styleProvider:(id)arg5 colorOverride:(id)arg6 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif