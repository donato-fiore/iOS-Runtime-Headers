// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSUNDOLIGHTINVOCATION_H
#define _NSUNDOLIGHTINVOCATION_H

@class NSUndoObject;



@interface _NSUndoLightInvocation : NSUndoObject {
    SEL _selector;
    id *_arg;
}




-(id)_argument;
-(id)description;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 object:(id)arg2 ;
-(void)dealloc;
-(void)invoke;


@end


#endif