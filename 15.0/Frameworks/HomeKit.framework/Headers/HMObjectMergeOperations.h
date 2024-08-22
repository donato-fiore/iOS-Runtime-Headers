// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMOBJECTMERGEOPERATIONS_H
#define HMOBJECTMERGEOPERATIONS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface HMObjectMergeOperations : NSObject

@property (retain, nonatomic) NSMutableArray *operations; // ivar: _operations


-(id)init;
-(void)_addOperation:(id)arg0 ;
-(void)_executeOperationsOnQueue:(id)arg0 ;


@end


#endif