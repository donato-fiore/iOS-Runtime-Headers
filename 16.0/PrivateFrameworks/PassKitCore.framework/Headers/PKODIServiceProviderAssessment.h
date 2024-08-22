// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKODISERVICEPROVIDERASSESSMENT_H
#define PKODISERVICEPROVIDERASSESSMENT_H

@class NSBundle, NSString;


#import "PKODIAssessment.h"

@interface PKODIServiceProviderAssessment : PKODIAssessment {
    NSBundle *_bundleIdentifier;
}


@property (readonly, copy, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier


-(id)description;
-(id)initWithServiceProviderIdentifier:(id)arg0 bundleIdentifier:(id)arg1 ;
-(void)createODISession;
-(void)getAssessmentWithCompletion:(id)arg0 ;


@end


#endif