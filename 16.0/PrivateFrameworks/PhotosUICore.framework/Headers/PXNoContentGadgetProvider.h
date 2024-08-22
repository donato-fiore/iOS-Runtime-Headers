// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXNOCONTENTGADGETPROVIDER_H
#define PXNOCONTENTGADGETPROVIDER_H

@class NSString, NSArray;


#import "PXGadgetProvider.h"

@interface PXNoContentGadgetProvider : PXGadgetProvider

@property (copy, nonatomic) NSString *localizedMessage; // ivar: _localizedMessage
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (copy, nonatomic) NSArray *noContentGadgets; // ivar: _noContentGadgets


-(NSUInteger)estimatedNumberOfGadgets;
-(id)initWithLocalizedTitle:(id)arg0 localizedMessage:(id)arg1 ;
-(void)generateGadgets;


@end


#endif