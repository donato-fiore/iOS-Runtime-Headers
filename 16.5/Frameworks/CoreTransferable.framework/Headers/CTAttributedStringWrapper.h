// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTATTRIBUTEDSTRINGWRAPPER_H
#define CTATTRIBUTEDSTRINGWRAPPER_H


#import <Foundation/Foundation.h>


@interface CTAttributedStringWrapper : NSObject



+(BOOL)containsAttachments:(id)arg0 ;
+(id)attributedStringFromData:(id)arg0 options:(id)arg1 documentAttributes:(*id)arg2 error:(*id)arg3 ;
+(id)dataFromAttributedString:(id)arg0 range:(struct _NSRange )arg1 documentAttributes:(id)arg2 error:(*id)arg3 ;


@end


#endif