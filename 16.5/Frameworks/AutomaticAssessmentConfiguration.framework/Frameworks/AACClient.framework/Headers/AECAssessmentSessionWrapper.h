// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AECASSESSMENTSESSIONWRAPPER_H
#define AECASSESSMENTSESSIONWRAPPER_H

@protocol _TtP9AACClient28AECAssessmentSessionDelegate_, AECAssessmentSessionWrapperDelegate;

#import <Foundation/Foundation.h>

#import "AECAssessmentConfigurationWrapper.h"
#import "_TtC9AACClient20AECAssessmentSession.h"

@interface AECAssessmentSessionWrapper : NSObject <_TtP9AACClient28AECAssessmentSessionDelegate_>



@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) AECAssessmentConfigurationWrapper *configurationWrapper;
@property (weak, nonatomic) NSObject<AECAssessmentSessionWrapperDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) _TtC9AACClient20AECAssessmentSession *session; // ivar: _session


-(id)initWithConfigurationWrapper:(id)arg0 queue:(id)arg1 ;
-(void)assessmentSession:(id)arg0 failedToBeginWithError:(id)arg1 ;
-(void)assessmentSession:(id)arg0 wasInterruptedWithError:(id)arg1 ;
-(void)assessmentSessionDidBegin:(id)arg0 ;
-(void)assessmentSessionDidEnd:(id)arg0 ;
-(void)assessmentSessionDidUpdate:(id)arg0 ;
-(void)assessmentSesson:(id)arg0 failedToUpdateToConfiguration:(id)arg1 error:(id)arg2 ;
-(void)begin;
-(void)end;
-(void)updateToConfigurationWrapper:(id)arg0 ;


@end


#endif