// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKSTRONGHANDLE_H
#define IKSTRONGHANDLE_H



#import "IKHandle.h"

@interface IKStrongHandle : IKHandle {
    id *_object;
}




-(id)initWithObject:(id)arg0 ;
-(id)object;


@end


#endif