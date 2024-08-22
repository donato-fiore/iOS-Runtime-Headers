// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPROGRESS_H
#define MKPROGRESS_H


#import <Foundation/Foundation.h>


@interface MKProgress : NSObject {
    NSUInteger _totalOperationCount;
    NSUInteger _completedOperationCount;
    CGFloat _startTime;
}




-(NSUInteger)totalOperationCount;
-(float)progress:(*NSUInteger)arg0 ;
-(void)addCompletedOerationCount:(NSUInteger)arg0 ;
-(void)addTotalOperationCount:(NSUInteger)arg0 ;


@end


#endif