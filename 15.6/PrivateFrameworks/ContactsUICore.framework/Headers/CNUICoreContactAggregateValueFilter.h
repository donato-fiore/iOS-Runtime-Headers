// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUICORECONTACTAGGREGATEVALUEFILTER_H
#define CNUICORECONTACTAGGREGATEVALUEFILTER_H

@class NSString, NSArray;
@protocol CNUICoreContactPropertyValueFilter;

#import <Foundation/Foundation.h>


@interface CNUICoreContactAggregateValueFilter : NSObject <CNUICoreContactPropertyValueFilter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *valueFilters; // ivar: _valueFilters


-(id)contactByFilteringOutPropertyValueOfContact:(id)arg0 ;
-(id)init;
-(id)initWithValueFilters:(id)arg0 ;
-(void)filterPropertyValuesFromContact:(id)arg0 ;


@end


#endif