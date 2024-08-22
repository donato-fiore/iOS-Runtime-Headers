// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMESSAGESDEBUGGADGETPROVIDER_H
#define PXMESSAGESDEBUGGADGETPROVIDER_H



#import "PXGadgetProvider.h"

@interface PXMessagesDebugGadgetProvider : PXGadgetProvider



+(NSUInteger)_enabledDebugSectionsCount;
-(NSUInteger)estimatedNumberOfGadgets;
-(void)generateGadgets;
-(void)loadDataForGadgets;


@end


#endif