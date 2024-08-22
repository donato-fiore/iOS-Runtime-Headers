// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDOPERATIONSTATISTICS_H
#define CKDOPERATIONSTATISTICS_H

@class NSString, NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CKDOperationMetrics.h"

@interface CKDOperationStatistics : NSObject <NSCopying>



@property (readonly, nonatomic) CKDOperationMetrics *aggregateCKMetrics; // ivar: _aggregateCKMetrics
@property (readonly, nonatomic) CKDOperationMetrics *aggregateMMCSMetrics; // ivar: _aggregateMMCSMetrics
@property (readonly, nonatomic) NSString *operationClassName; // ivar: _operationClassName
@property (readonly) NSUInteger operationCount; // ivar: _operationCount
@property (readonly, nonatomic) NSMutableDictionary *recentErrorsByDate; // ivar: _recentErrorsByDate


-(id)CKStatusReportArray;
-(id)_trimmedError:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithOperationClassName:(id)arg0 ;
-(void)_addMetrics:(id)arg0 toAggregate:(id)arg1 ;
-(void)addOperation:(id)arg0 ;
-(void)merge:(id)arg0 ;


@end


#endif