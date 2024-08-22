// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFBDICTIONARYENUMERATOR_H
#define AFBDICTIONARYENUMERATOR_H

@class NSEnumerator;


#import "AFBDictionary.h"

@interface AFBDictionaryEnumerator : NSEnumerator {
    AFBDictionary *_dict;
    NSUInteger _index;
}




-(id)initWithDictionary:(id)arg0 ;
-(id)nextObject;


@end


#endif