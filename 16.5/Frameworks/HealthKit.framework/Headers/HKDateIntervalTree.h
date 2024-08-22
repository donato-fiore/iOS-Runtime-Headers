// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKDATEINTERVALTREE_H
#define HKDATEINTERVALTREE_H


#import <Foundation/Foundation.h>


@interface HKDateIntervalTree : NSObject {
    unique_ptr<HKIntervalTree<double>, std::default_delete<HKIntervalTree<double>>> _tree;
}




-(BOOL)hasOverlapWithInterval:(id)arg0 ;
-(BOOL)hasOverlapWithStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 ;
-(id)init;
-(id)mergedIntervals;
-(void)insertInterval:(id)arg0 ;
-(void)insertIntervalWithStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 ;


@end


#endif