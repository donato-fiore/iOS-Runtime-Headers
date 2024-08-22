// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFSPEECHRECORDINGALERTBEHAVIORMUTATION_H
#define _AFSPEECHRECORDINGALERTBEHAVIORMUTATION_H

@class NSString;
@protocol AFSpeechRecordingAlertBehaviorMutating;

#import <Foundation/Foundation.h>

#import "AFSpeechRecordingAlertBehavior.h"

@interface _AFSpeechRecordingAlertBehaviorMutation : NSObject <AFSpeechRecordingAlertBehaviorMutating>

 {
    AFSpeechRecordingAlertBehavior *_base;
    NSInteger _style;
    NSInteger _beepSoundID;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(NSInteger)getBeepSoundID;
-(NSInteger)getStyle;
-(id)initWithBase:(id)arg0 ;
-(void)setBeepSoundID:(NSInteger)arg0 ;
-(void)setStyle:(NSInteger)arg0 ;


@end


#endif