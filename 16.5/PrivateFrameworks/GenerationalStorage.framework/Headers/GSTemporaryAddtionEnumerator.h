// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GSTEMPORARYADDTIONENUMERATOR_H
#define GSTEMPORARYADDTIONENUMERATOR_H

@class NSEnumerator, NSString, NSDirectoryEnumerator, NSArray, NSError;
@protocol GSAdditionEnumerating;


#import "GSTemporaryStorage.h"

@interface GSTemporaryAddtionEnumerator : NSEnumerator <GSAdditionEnumerating>

 {
    GSTemporaryStorage *_storage;
    NSString *_nameSpace;
    NSUInteger _withOptions;
    NSUInteger _withoutOption;
    NSDirectoryEnumerator *_enumerator;
    NSArray *_array;
    NSUInteger _pos;
}


@property (readonly, nonatomic) NSError *error; // ivar: _error


-(id)_nextURL;
-(id)initWithStorage:(id)arg0 nameSpace:(id)arg1 withOptions:(NSUInteger)arg2 withoutOptions:(NSUInteger)arg3 ordering:(int)arg4 ;
-(id)nextObject;


@end


#endif