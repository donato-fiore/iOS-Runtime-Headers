// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPOINTERFUNCTIONS_H
#define NSPOINTERFUNCTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSPointerFunctions : NSObject <NSCopying>



@property *unk acquireFunction;
@property *unk descriptionFunction;
@property *unk hashFunction;
@property *unk isEqualFunction;
@property *unk relinquishFunction;
@property *unk sizeFunction;
@property BOOL usesStrongWriteBarrier;
@property BOOL usesWeakReadAndWriteBarriers;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)pointerFunctionsWithOptions:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 ;


@end


#endif