// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTPLACEHOLDER_H
#define UITEXTPLACEHOLDER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_UITextPlaceholderAttachment.h"

@interface UITextPlaceholder : NSObject

@property (retain, nonatomic) _UITextPlaceholderAttachment *attachment; // ivar: _attachment
@property (nonatomic) CGRect caretRectBeforeInsertion; // ivar: _caretRectBeforeInsertion
@property (copy, nonatomic) NSArray *rects; // ivar: _rects


-(id)init;


@end


#endif