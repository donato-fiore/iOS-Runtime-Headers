// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITINGCOLORITEMSAGGREGATEDATASOURCE_H
#define PREDITINGCOLORITEMSAGGREGATEDATASOURCE_H

@class NSArray, NSString;
@protocol PREditingColorItemsDataSource;

#import <Foundation/Foundation.h>


@interface PREditingColorItemsAggregateDataSource : NSObject <PREditingColorItemsDataSource>



@property (copy, nonatomic) NSArray *dataSources; // ivar: _dataSources
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)indexForItem:(id)arg0 ;
-(NSUInteger)numberOfItems;
-(id)colorItemForIndex:(NSUInteger)arg0 ;
-(id)firstColorItemPassingTest:(id)arg0 ;
-(id)initWithDataSources:(id)arg0 ;


@end


#endif