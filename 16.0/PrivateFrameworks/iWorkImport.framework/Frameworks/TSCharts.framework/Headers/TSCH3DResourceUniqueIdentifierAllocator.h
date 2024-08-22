// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DRESOURCEUNIQUEIDENTIFIERALLOCATOR_H
#define TSCH3DRESOURCEUNIQUEIDENTIFIERALLOCATOR_H


#import <Foundation/Foundation.h>


@interface TSCH3DResourceUniqueIdentifierAllocator : NSObject



+(NSUInteger)allocateResourceUniqueIdentifier;
+(void)deallocateResourceUniqueIdentifier:(NSUInteger)arg0 ;


@end


#endif