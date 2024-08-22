// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIE5RUNNERPORTDESC_H
#define VIE5RUNNERPORTDESC_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VIE5RunnerPortDesc : NSObject

@property (readonly, nonatomic) NSUInteger csize; // ivar: _csize
@property (readonly, nonatomic) unsigned int dtype; // ivar: _dtype
@property (readonly, nonatomic) NSArray *shape; // ivar: _shape
@property (readonly, nonatomic) NSArray *strides; // ivar: _strides
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


// -(id)initWithShape:(id)arg0 type:(NSUInteger)arg1 dtype:(unsigned int)arg2 csize:(unk)arg3 strides:(NSUInteger)arg4  ;


@end


#endif