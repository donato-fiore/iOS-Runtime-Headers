// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSCONSTANTDICTIONARYENUMERATOR_H
#define __NSCONSTANTDICTIONARYENUMERATOR_H



#import "NSEnumerator.h"
#import "NSConstantDictionary.h"

@interface __NSConstantDictionaryEnumerator : NSEnumerator {
    NSConstantDictionary *_underlyingDictionary;
    NSUInteger _currentIndex;
    BOOL _isForKeys;
}




-(id)initWithConstantDictionary:(id)arg0 enumerateKeys:(BOOL)arg1 ;
-(id)nextObject;


@end


#endif