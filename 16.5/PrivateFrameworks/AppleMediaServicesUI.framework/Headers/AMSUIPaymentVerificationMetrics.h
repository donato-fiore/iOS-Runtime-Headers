// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIPAYMENTVERIFICATIONMETRICS_H
#define AMSUIPAYMENTVERIFICATIONMETRICS_H

@class NSString;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>


@interface AMSUIPaymentVerificationMetrics : NSObject

@property (retain, nonatomic) NSString *appID; // ivar: _appID
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) NSString *displayReason; // ivar: _displayReason


+(id)_event;
+(id)_metricsInstanceWithBag:(id)arg0 ;
-(id)_propertiesWithPageId:(id)arg0 displayReason:(id)arg1 ;
-(id)_propertiesWithTargetId:(id)arg0 pageId:(id)arg1 displayReason:(id)arg2 ;
-(id)initWithBag:(id)arg0 appID:(id)arg1 ;
-(void)enqueueEventWithPageId:(id)arg0 displayReason:(id)arg1 ;
-(void)enqueueEventWithTargetId:(id)arg0 pageId:(id)arg1 displayReason:(id)arg2 ;
-(void)flushEvents;


@end


#endif