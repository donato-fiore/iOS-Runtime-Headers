// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLEQUESTIONSGADGETPROVIDER_H
#define PXPEOPLEQUESTIONSGADGETPROVIDER_H

@class NSString;


#import "PXGadgetProvider.h"
#import "PXForYouPeopleQuestionsDataSource.h"

@interface PXPeopleQuestionsGadgetProvider : PXGadgetProvider

@property (retain, nonatomic) PXForYouPeopleQuestionsDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy, nonatomic) NSString *localizedTitle;


+(id)_gadgetForQuestion:(id)arg0 ;
-(NSUInteger)estimatedNumberOfGadgets;
-(id)init;
-(void)generateGadgets;


@end


#endif