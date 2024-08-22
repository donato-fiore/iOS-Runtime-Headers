// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPARALLELPROGRESS_H
#define PGPARALLELPROGRESS_H

@class MAMutableFloatVector;

#import <Foundation/Foundation.h>


@interface PGParallelProgress : NSObject {
    os_unfair_lock_s _lock;
    id *_progressBlock;
    MAMutableFloatVector *_progressValues;
}




-(id)initWithParallelOperationCount:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(id)progressBlockForParallelOperationWithIndex:(SEL)arg0 ;


@end


#endif