// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTREQUESTVALIDATOR_H
#define PPTREQUESTVALIDATOR_H


#import <Foundation/Foundation.h>


@interface PPTRequestValidator : NSObject



+(BOOL)_isMetricDefined:(id)arg0 category:(id)arg1 name:(id)arg2 ;
+(BOOL)_validatePredicateMetricValue:(id)arg0 category:(id)arg1 name:(id)arg2 value:(id)arg3 error:(*id)arg4 ;
+(BOOL)_validatePredicateRequiredKey:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
+(BOOL)_validateRequestType:(NSInteger)arg0 error:(*id)arg1 ;
+(id)sharedInstance;
-(BOOL)validateDataRequest:(id)arg0 error:(*id)arg1 ;


@end


#endif