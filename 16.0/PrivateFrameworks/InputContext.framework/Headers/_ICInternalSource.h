// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICINTERNALSOURCE_H
#define _ICINTERNALSOURCE_H

@class NSString;
@protocol _ICPredictionSourcing;

#import <Foundation/Foundation.h>


@interface _ICInternalSource : NSObject <_ICPredictionSourcing>

 {
    NSString *_name;
}




-(BOOL)doesSupportTriggerSourceType:(unsigned char)arg0 ;
-(id)init;
-(id)localizedStringForKey:(id)arg0 withLocale:(id)arg1 ;
-(id)name;
-(void)hibernate;
-(void)predictedItemsWithProactiveTrigger:(id)arg0 searchContext:(id)arg1 limit:(NSUInteger)arg2 timeoutInMilliseconds:(NSUInteger)arg3 handler:(id)arg4 ;
-(void)propogateMetrics:(id)arg0 data:(id)arg1 ;
-(void)provideFeedbackForString:(id)arg0 type:(unsigned char)arg1 style:(unsigned char)arg2 ;
-(void)searchForMeCardEmailAddressesWithTimeout:(NSUInteger)arg0 handler:(id)arg1 ;
-(void)searchForMeCardRegionsWithTimeout:(NSUInteger)arg0 handler:(id)arg1 ;
-(void)warmUp;


@end


#endif