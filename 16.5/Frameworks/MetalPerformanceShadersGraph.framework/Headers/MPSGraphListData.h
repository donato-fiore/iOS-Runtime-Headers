// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHLISTDATA_H
#define MPSGRAPHLISTDATA_H

@class NSMutableArray;


#import "MPSGraphTensorData.h"
#import "MPSGraphType.h"

@interface MPSGraphListData : MPSGraphTensorData {
    NSMutableArray *_list;
    NSInteger _maxSize;
    MPSGraphType *_elementType;
}




-(NSInteger)maxSize;
-(id)clonedList;
-(id)elementType;
-(id)initEmptyListWithDevice:(id)arg0 maxSize:(NSInteger)arg1 elementType:(id)arg2 ;
-(id)initWithDevice:(id)arg0 list:(id)arg1 maxSize:(NSInteger)arg2 elementType:(id)arg3 ;
-(id)list;
-(id)mpsndarray;
-(id)popBackElement;
-(void)pushBackElement:(id)arg0 ;


@end


#endif