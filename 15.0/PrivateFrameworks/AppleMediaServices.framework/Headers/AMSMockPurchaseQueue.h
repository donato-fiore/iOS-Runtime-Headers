// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSMOCKPURCHASEQUEUE_H
#define AMSMOCKPURCHASEQUEUE_H



#import "AMSPurchaseQueue.h"
#import "AMSMockURLOverride.h"

@interface AMSMockPurchaseQueue : AMSPurchaseQueue

@property (retain) AMSMockURLOverride *mockURLOverride; // ivar: _mockURLOverride


-(id)initWithConfiguration:(id)arg0 mockURLOverride:(id)arg1 ;
-(void)dealloc;


@end


#endif