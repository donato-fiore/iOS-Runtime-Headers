// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAUTOCOMPLETEOBSERVABLEBUILDERBATCHINGHELPERFACTORY_H
#define CNAUTOCOMPLETEOBSERVABLEBUILDERBATCHINGHELPERFACTORY_H


#import <Foundation/Foundation.h>


@interface CNAutocompleteObservableBuilderBatchingHelperFactory : NSObject



+(id)batchingHelperForSearchType:(NSUInteger)arg0 ;
+(id)calendarBatchingHelper;
+(id)standardBatchingHelper;


@end


#endif