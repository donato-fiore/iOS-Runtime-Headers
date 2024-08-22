// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AEASSESSMENTSESSION_H
#define AEASSESSMENTSESSION_H

@class _TtC9AACClient20AECAssessmentSession;
@protocol _TtP9AACClient28AECAssessmentSessionDelegate_, AEAssessmentSessionDelegate;

#import <Foundation/Foundation.h>

#import "AEAssessmentConfiguration.h"

@interface AEAssessmentSession : NSObject <_TtP9AACClient28AECAssessmentSessionDelegate_>

 {
    _TtC9AACClient20AECAssessmentSession *_backingSession;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) AEAssessmentConfiguration *configuration;
@property (weak, nonatomic) NSObject<AEAssessmentSessionDelegate> *delegate; // ivar: _delegate


-(id)initWithConfiguration:(id)arg0 ;
-(void)assessmentSession:(id)arg0 failedToBeginWithError:(id)arg1 ;
-(void)assessmentSession:(id)arg0 wasInterruptedWithError:(id)arg1 ;
-(void)assessmentSessionDidBegin:(id)arg0 ;
-(void)assessmentSessionDidEnd:(id)arg0 ;
-(void)assessmentSessionDidUpdate:(id)arg0 ;
-(void)assessmentSesson:(id)arg0 failedToUpdateToConfiguration:(id)arg1 error:(id)arg2 ;
-(void)begin;
-(void)end;
-(void)updateToConfiguration:(id)arg0 ;


@end


#endif