// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _IKARRAYENUMERATOR_H
#define _IKARRAYENUMERATOR_H

@class NSEnumerator;


#import "IKArray.h"

@interface _IKArrayEnumerator : NSEnumerator {
    IKArray *_array;
    NSInteger _currentIndex;
}




-(id)initWithArray:(id)arg0 ;
-(id)nextObject;


@end


#endif