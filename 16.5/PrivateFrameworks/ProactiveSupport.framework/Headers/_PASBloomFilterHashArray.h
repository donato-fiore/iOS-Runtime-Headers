// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASBLOOMFILTERHASHARRAY_H
#define _PASBLOOMFILTERHASHARRAY_H


#import <Foundation/Foundation.h>


@interface _PASBloomFilterHashArray : NSObject {
    NSUInteger _size;
    *int _data;
}


@property (readonly, nonatomic) *int hashes;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initInternal;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif