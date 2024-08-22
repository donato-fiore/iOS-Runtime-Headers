// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSEARCHZEROKEYWORDGADGETPROVIDER_H
#define PUSEARCHZEROKEYWORDGADGETPROVIDER_H

@class PXGadgetProvider;


#import "PUSearchZeroKeywordDataSource.h"

@interface PUSearchZeroKeywordGadgetProvider : PXGadgetProvider

@property (readonly, nonatomic) NSInteger sectionType; // ivar: _sectionType
@property (readonly, nonatomic) PUSearchZeroKeywordDataSource *zeroKeywordDataSource; // ivar: _zeroKeywordDataSource


-(NSUInteger)estimatedNumberOfGadgets;
-(id)initWithZeroKeywordDataSource:(id)arg0 sectionType:(NSInteger)arg1 ;
-(void)generateGadgets;


@end


#endif