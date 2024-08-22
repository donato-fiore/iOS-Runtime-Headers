// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNAUTOCOMPLETERESPONSEPREPARERDECORATOR_H
#define _CNAUTOCOMPLETERESPONSEPREPARERDECORATOR_H



#import "CNAutocompleteQueryResponsePreparer.h"

@interface _CNAutocompleteResponsePreparerDecorator : CNAutocompleteQueryResponsePreparer

@property (readonly) CNAutocompleteQueryResponsePreparer *preparer; // ivar: _preparer


-(id)initWithResponsePreparer:(id)arg0 delegate:(id)arg1 ;
-(id)prepareResults:(id)arg0 ;
-(void)setMatchingPriorityResultsPromise:(id)arg0 ;
-(void)setPriorityResultsFuture:(id)arg0 ;


@end


#endif