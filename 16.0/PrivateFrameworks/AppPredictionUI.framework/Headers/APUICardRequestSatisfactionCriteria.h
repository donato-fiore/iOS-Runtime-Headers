// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APUICARDREQUESTSATISFACTIONCRITERIA_H
#define APUICARDREQUESTSATISFACTIONCRITERIA_H


#import <Foundation/Foundation.h>


@interface APUICardRequestSatisfactionCriteria : NSObject



+(id)compactSatisfactionCriteria;
+(id)customIntentSatisfactionCriteria;
+(id)generalSatisfactionCriteria;
-(BOOL)canSatisfyCardRequest:(id)arg0 ;
-(NSUInteger)servicePriorityForRequest:(id)arg0 ;


@end


#endif