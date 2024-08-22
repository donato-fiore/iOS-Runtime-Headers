// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKRECORDGRAPH_H
#define CKRECORDGRAPH_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface CKRecordGraph : NSObject {
    NSMutableArray *_nodes;
    NSArray *_sortedRecords;
}




+(id)topologicallySortRecords:(id)arg0 withError:(*id)arg1 ;
-(BOOL)addRecords:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(id)recordsByTopologicalSortWithError:(*id)arg0 ;


@end


#endif