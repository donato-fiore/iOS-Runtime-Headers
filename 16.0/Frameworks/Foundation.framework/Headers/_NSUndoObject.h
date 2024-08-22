// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSUNDOOBJECT_H
#define _NSUNDOOBJECT_H


#import <Foundation/Foundation.h>

#import "_NSUndoObject.h"

@interface _NSUndoObject : NSObject {
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id *_target;
}




-(BOOL)isBeginMark;
-(BOOL)isEndMark;
-(id)init;
-(id)initWithTarget:(id)arg0 ;
-(id)target;
-(void)invoke;


@end


#endif