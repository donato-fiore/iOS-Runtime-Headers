// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSCOMPACTVALUEARRAY_H
#define SSCOMPACTVALUEARRAY_H

@class NSArray, NSIndexSet;

#import <Foundation/Foundation.h>


@interface SSCompactValueArray : NSObject {
    NSArray *_objects;
    NSIndexSet *_indexes;
}




+(id)decodeFromDictionary:(id)arg0 nesting:(NSUInteger)arg1 ;
-(id)init;


@end


#endif