// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPARALLELPROGRESS_H
#define MAPARALLELPROGRESS_H


#import <Foundation/Foundation.h>

#import "MAProgressReporter.h"
#import "MAMutableFloatVector.h"

@interface MAParallelProgress : NSObject {
    os_unfair_lock_s _lock;
    MAProgressReporter *_progressReporter;
    MAMutableFloatVector *_progressValues;
}




-(BOOL)isCancelled;
-(BOOL)isCancelledWithProgress:(CGFloat)arg0 index:(NSUInteger)arg1 ;
-(id)initWithProgressReporter:(id)arg0 parallelOperationCount:(NSUInteger)arg1 ;


@end


#endif