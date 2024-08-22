// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPARSECSEARCHRESPONSE_H
#define WBSPARSECSEARCHRESPONSE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "WBSParsecSearchCompletionResultSet.h"

@interface WBSParsecSearchResponse : NSObject {
    WBSParsecSearchCompletionResultSet *_bestResultSet;
}


@property (readonly, nonatomic) WBSParsecSearchCompletionResultSet *bestCompletionResultSet;
@property (readonly, nonatomic) NSArray *completionResultSets; // ivar: _completionResultSets
@property (readonly, nonatomic) CGFloat maxAge; // ivar: _maxAge
@property (readonly, nonatomic) NSUInteger sizeInBytes; // ivar: _sizeInBytes
@property (readonly, nonatomic) NSArray *statusCodesForCompletionResultSets;


+(id)searchResponseSchemaWithCache:(id)arg0 ;
-(id)initWithArray:(id)arg0 responseHeaders:(id)arg1 sizeInBytes:(NSUInteger)arg2 cache:(id)arg3 ;


@end


#endif