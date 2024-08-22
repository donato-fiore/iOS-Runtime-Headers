// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNFILTERINGRESPONSEPREPARER_H
#define _CNFILTERINGRESPONSEPREPARER_H

@class CNAutocompleteResponsePreparerDecorator;



@interface _CNFilteringResponsePreparer : CNAutocompleteResponsePreparerDecorator

@property (readonly, copy) id *filter; // ivar: _filter


-(id)initWithResponsePreparer:(id)arg0 delegate:(id)arg1 filter:(id)arg2 ;
-(id)prepareResults:(id)arg0 ;


@end


#endif