// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPLOANED_H
#define VCPLOANED_H


#import <Foundation/Foundation.h>

#import "VCPObjectPool.h"

@interface VCPLoaned : NSObject {
    VCPObjectPool *_pool;
}


@property (readonly, nonatomic) id *object; // ivar: _object


-(id)initWithObject:(id)arg0 fromPool:(id)arg1 ;
-(void)dealloc;


@end


#endif