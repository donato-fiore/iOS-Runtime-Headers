// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSUNDOBLOCKINVOCATION_H
#define _NSUNDOBLOCKINVOCATION_H

@class NSUndoObject;



@interface _NSUndoBlockInvocation : NSUndoObject {
    id *_handler;
}




-(id)initWithTarget:(id)arg0 handler:(id)arg1 ;
-(void)dealloc;
-(void)invoke;


@end


#endif