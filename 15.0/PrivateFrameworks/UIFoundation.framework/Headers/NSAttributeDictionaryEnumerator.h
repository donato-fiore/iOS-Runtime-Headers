// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSATTRIBUTEDICTIONARYENUMERATOR_H
#define NSATTRIBUTEDICTIONARYENUMERATOR_H

@class NSEnumerator;


#import "NSAttributeDictionary.h"

@interface NSAttributeDictionaryEnumerator : NSEnumerator {
    NSAttributeDictionary *dictionary;
    NSUInteger nextElement;
}




-(id)initWithAttributeDictionary:(id)arg0 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif