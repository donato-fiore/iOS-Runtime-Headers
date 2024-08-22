// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCOMPLETIONOFFTRACKEVENT_H
#define FCCOMPLETIONOFFTRACKEVENT_H

@class FCCCompletionOffTrackConfiguration, NSString;
@protocol FCGoalProgressEvent;

#import <Foundation/Foundation.h>


@interface FCCompletionOffTrackEvent : NSObject <FCGoalProgressEvent>

 {
    FCCCompletionOffTrackConfiguration *_configuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldFireWithTypicalDayModel:(id)arg0 evaluationDelegate:(id)arg1 ;
-(CGFloat)minimumDayDuration;
-(id)eventIdentifier;
-(id)goalProgressContentForModel:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)nextFireDateWithModel:(id)arg0 ;


@end


#endif