// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNAUTOCOMPLETEOBSERVABLEBUILDERBATCHINGHELPER_H
#define _CNAUTOCOMPLETEOBSERVABLEBUILDERBATCHINGHELPER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _CNAutocompleteObservableBuilderBatchingHelper : NSObject

@property (readonly, nonatomic) NSArray *batches; // ivar: _batches


-(id)batchedObservables;
-(id)initWithBatchCount:(NSUInteger)arg0 ;
-(void)addObservable:(id)arg0 toBatchAtIndex:(NSUInteger)arg1 ;


@end


#endif