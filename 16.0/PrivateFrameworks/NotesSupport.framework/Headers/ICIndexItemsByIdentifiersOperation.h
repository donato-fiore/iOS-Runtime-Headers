// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICINDEXITEMSBYIDENTIFIERSOPERATION_H
#define ICINDEXITEMSBYIDENTIFIERSOPERATION_H

@class NSArray;


#import "ICIndexItemsOperation.h"

@interface ICIndexItemsByIdentifiersOperation : ICIndexItemsOperation

@property (copy, nonatomic) NSArray *objectIDURIsToIndex; // ivar: _objectIDURIsToIndex


-(id)initWithSearchableIndex:(id)arg0 dataSources:(id)arg1 ;
-(id)initWithSearchableIndex:(id)arg0 dataSources:(id)arg1 objectIDURIsToIndex:(id)arg2 ;
-(void)main;


@end


#endif