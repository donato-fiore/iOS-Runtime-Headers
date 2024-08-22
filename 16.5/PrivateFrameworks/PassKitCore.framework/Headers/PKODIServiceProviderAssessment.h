// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKODISERVICEPROVIDERASSESSMENT_H
#define PKODISERVICEPROVIDERASSESSMENT_H

@class NSBundle, NSString;


#import "PKODIAssessment.h"

@interface PKODIServiceProviderAssessment : PKODIAssessment {
    NSBundle *_bundleIdentifier;
    NSBundle *_locationBundle;
}


@property (copy, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier


-(id)description;
-(id)initWithServiceProviderIdentifier:(id)arg0 locationBundle:(id)arg1 ;
-(void)createODISession;
-(void)getAssessmentWithCompletion:(id)arg0 ;


@end


#endif