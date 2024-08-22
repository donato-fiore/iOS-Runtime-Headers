// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSCONSTANTDICTIONARYENUMERATOR_H
#define _NSCONSTANTDICTIONARYENUMERATOR_H

@class NSEnumerator;



@interface _NSConstantDictionaryEnumerator : NSEnumerator {
    *id currentKey;
    NSUInteger capacity;
    NSUInteger keyIndex;
}




-(id)allObjects;
-(id)initWithFirstKeyPointer:(*id)arg0 capacity:(NSUInteger)arg1 ;
-(id)nextObject;


@end


#endif