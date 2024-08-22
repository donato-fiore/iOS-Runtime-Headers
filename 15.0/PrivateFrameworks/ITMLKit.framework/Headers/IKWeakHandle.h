// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKWEAKHANDLE_H
#define IKWEAKHANDLE_H



#import "IKHandle.h"

@interface IKWeakHandle : IKHandle {
    id *_object;
    id *_getter;
}




-(id)initWithGetter:(id)arg0 ;
-(id)object;


@end


#endif