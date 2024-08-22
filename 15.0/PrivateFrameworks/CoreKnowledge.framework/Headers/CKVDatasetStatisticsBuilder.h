// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVDATASETSTATISTICSBUILDER_H
#define CKVDATASETSTATISTICSBUILDER_H


#import <Foundation/Foundation.h>

#import "CKVDatasetRecord.h"

@interface CKVDatasetStatisticsBuilder : NSObject {
    CKVDatasetRecord *_record;
    NSUInteger _min;
    NSUInteger _max;
    NSUInteger _sum;
    NSUInteger _sumQ;
}


@property (readonly, nonatomic) NSUInteger count; // ivar: _count


-(id)build;
-(id)initWithRecord:(id)arg0 ;
-(void)addItemBuffer:(id)arg0 ;


@end


#endif