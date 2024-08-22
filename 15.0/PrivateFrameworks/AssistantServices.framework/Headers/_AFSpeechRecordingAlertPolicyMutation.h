// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AFSPEECHRECORDINGALERTPOLICYMUTATION_H
#define _AFSPEECHRECORDINGALERTPOLICYMUTATION_H

@class NSString;
@protocol AFSpeechRecordingAlertPolicyMutating;

#import <Foundation/Foundation.h>

#import "AFSpeechRecordingAlertPolicy.h"
#import "AFSpeechRecordingAlertBehavior.h"

@interface _AFSpeechRecordingAlertPolicyMutation : NSObject <AFSpeechRecordingAlertPolicyMutating>

 {
    AFSpeechRecordingAlertPolicy *_baseModel;
    AFSpeechRecordingAlertBehavior *_startingAlertBehavior;
    AFSpeechRecordingAlertBehavior *_stoppedAlertBehavior;
    AFSpeechRecordingAlertBehavior *_stoppedWithErrorAlertBehavior;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setStartingAlertBehavior:(id)arg0 ;
-(void)setStoppedAlertBehavior:(id)arg0 ;
-(void)setStoppedWithErrorAlertBehavior:(id)arg0 ;


@end


#endif