// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSAVINGSACCOUNTASSESSMENTMANAGER_H
#define PKSAVINGSACCOUNTASSESSMENTMANAGER_H


#import <Foundation/Foundation.h>

#import "PKODIServiceProviderAssessment.h"

@interface PKSavingsAccountAssessmentManager : NSObject {
    NSInteger _type;
    PKODIServiceProviderAssessment *_odiServiceProviderAssessment;
}




-(NSInteger)type;
-(id)_serviceProviderIdentifierForAssessmentType;
-(id)initWithType:(NSInteger)arg0 ;
-(void)_restartODIAssessment;
-(void)provideSessionFeedbackDiscarded;
-(void)provideSessionFeedbackIngested;
-(void)updateAssessmentType:(NSInteger)arg0 ;
-(void)waitForAssessmentWithCompletion:(id)arg0 ;


@end


#endif