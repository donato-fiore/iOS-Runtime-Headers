// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSUNDOSTACK_H
#define _NSUNDOSTACK_H


#import <Foundation/Foundation.h>

#import "_NSUndoObject.h"

@interface _NSUndoStack : NSObject {
    NSUInteger _max;
    NSUInteger _count;
    NSUInteger _nestingLevel;
    _NSUndoObject *_head;
}




-(BOOL)isDiscardable;
-(BOOL)popAndInvoke;
-(NSUInteger)count;
-(NSUInteger)max;
-(NSUInteger)nestingLevel;
-(id)_beginMark;
-(id)description;
-(id)groupIdentifier;
-(id)init;
-(id)popUndoObject;
-(id)topUndoObject;
-(void)_removeBottom;
-(void)dealloc;
-(void)markBegin;
-(void)markEnd;
-(void)push:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeAllObjectsWithTarget:(id)arg0 ;
-(void)removeObject:(id)arg0 ;
-(void)setDiscardable:(BOOL)arg0 ;
-(void)setGroupIdentifier:(id)arg0 ;
-(void)setMax:(NSUInteger)arg0 ;


@end


#endif