// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPOBJECTPOOL_H
#define VCPOBJECTPOOL_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface VCPObjectPool : NSObject {
    id *_allocator;
    NSMutableArray *_objects;
}




+(id)objectPoolWithAllocator:(id)arg0 ;
-(id)getObject;
-(id)initWithAllocator:(id)arg0 ;
-(void)returnObject:(id)arg0 ;


@end


#endif