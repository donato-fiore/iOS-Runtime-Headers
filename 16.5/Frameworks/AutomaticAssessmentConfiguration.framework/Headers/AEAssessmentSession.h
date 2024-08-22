// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AEASSESSMENTSESSION_H
#define AEASSESSMENTSESSION_H

@class AECAssessmentSessionWrapper;
@protocol AECAssessmentSessionWrapperDelegate, AEAssessmentSessionDelegate;

#import <Foundation/Foundation.h>

#import "AEAssessmentConfiguration.h"

@interface AEAssessmentSession : NSObject <AECAssessmentSessionWrapperDelegate>

 {
    AECAssessmentSessionWrapper *_sessionWrapper;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) AEAssessmentConfiguration *configuration;
@property (weak, nonatomic) NSObject<AEAssessmentSessionDelegate> *delegate; // ivar: _delegate


-(id)initWithConfiguration:(id)arg0 ;
-(void)assessmentSessionWrapper:(id)arg0 failedToBeginWithError:(id)arg1 ;
-(void)assessmentSessionWrapper:(id)arg0 failedToUpdateToConfigurationWrapper:(id)arg1 error:(id)arg2 ;
-(void)assessmentSessionWrapper:(id)arg0 wasInterruptedWithError:(id)arg1 ;
-(void)assessmentSessionWrapperDidBegin:(id)arg0 ;
-(void)assessmentSessionWrapperDidEnd:(id)arg0 ;
-(void)assessmentSessionWrapperDidUpdate:(id)arg0 ;
-(void)begin;
-(void)end;
-(void)updateToConfiguration:(id)arg0 ;


@end


#endif