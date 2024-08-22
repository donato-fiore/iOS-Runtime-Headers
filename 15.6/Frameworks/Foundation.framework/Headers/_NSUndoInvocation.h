// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSUNDOINVOCATION_H
#define _NSUNDOINVOCATION_H

@class NSUndoObject, NSInvocation;



@interface _NSUndoInvocation : NSUndoObject {
    NSInvocation *_invocation;
}




-(id)description;
-(id)initWithTarget:(id)arg0 invocation:(id)arg1 ;
-(void)dealloc;
-(void)invoke;


@end


#endif