// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTDRAGCARETUPDATE_H
#define _UITEXTDRAGCARETUPDATE_H


#import <Foundation/Foundation.h>

#import "UITextPosition.h"
#import "UITextRange.h"
#import "UIBezierPath.h"

@interface _UITextDragCaretUpdate : NSObject {
    UITextPosition *position;
    UITextRange *range;
    UIBezierPath *maskPath;
    id *alongsideAnimations;
    id *completion;
    BOOL isAnimated;
}






@end


#endif