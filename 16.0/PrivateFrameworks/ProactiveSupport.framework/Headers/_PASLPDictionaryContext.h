// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASLPDICTIONARYCONTEXT_H
#define _PASLPDICTIONARYCONTEXT_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface _PASLPDictionaryContext : NSObject {
    *unsigned int _storage;
    NSUInteger _count;
}


@property (weak, nonatomic) NSCache *enumerationCache; // ivar: _enumerationCache


-(id)init;
-(id)initWithStorage:(*unsigned int)arg0 count:(NSUInteger)arg1 ;


@end


#endif