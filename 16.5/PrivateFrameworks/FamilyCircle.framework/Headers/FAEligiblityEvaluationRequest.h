// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAELIGIBLITYEVALUATIONREQUEST_H
#define FAELIGIBLITYEVALUATIONREQUEST_H

@class NSString;


#import "FAFamilyCircleRequest.h"

@interface FAEligiblityEvaluationRequest : FAFamilyCircleRequest

@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy, nonatomic) NSString *propertyName; // ivar: _propertyName


-(NSUInteger)fetchEligibilityWithError:(*id)arg0 ;
-(id)initWithPropertyName:(id)arg0 bundleID:(id)arg1 ;
-(void)startRequestWithCompletion:(id)arg0 ;


@end


#endif