// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSIMPLEATTRIBUTEDICTIONARYENUMERATOR_H
#define NSSIMPLEATTRIBUTEDICTIONARYENUMERATOR_H

@class NSEnumerator;


#import "NSSimpleAttributeDictionary.h"

@interface NSSimpleAttributeDictionaryEnumerator : NSEnumerator {
    NSSimpleAttributeDictionary *dictionary;
    NSUInteger nextElement;
}




-(id)initWithAttributeDictionary:(id)arg0 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif