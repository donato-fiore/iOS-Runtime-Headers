// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSCONSTANTARRAYENUMERATOR_H
#define __NSCONSTANTARRAYENUMERATOR_H



#import "NSEnumerator.h"
#import "NSConstantArray.h"

@interface __NSConstantArrayEnumerator : NSEnumerator {
    NSConstantArray *_underlyingArray;
    NSUInteger _index;
}




-(id)allObjects;
-(id)initWithConstantArray:(id)arg0 ;
-(id)nextObject;


@end


#endif