// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKODISERVICEPROVIDERASSESSMENT_H
#define PKODISERVICEPROVIDERASSESSMENT_H

@class NSString;


#import "PKODIAssessment.h"

@interface PKODIServiceProviderAssessment : PKODIAssessment

@property (readonly, copy, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier


-(id)initWithServiceProviderIdentifier:(id)arg0 ;
-(void)createODISession;
-(void)getAssessmentWithCompletion:(id)arg0 ;


@end


#endif