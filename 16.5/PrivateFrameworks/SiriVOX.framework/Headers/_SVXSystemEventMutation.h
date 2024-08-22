// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SVXSYSTEMEVENTMUTATION_H
#define _SVXSYSTEMEVENTMUTATION_H

@class NSArray, NSString;
@protocol SVXSystemEventMutating;

#import <Foundation/Foundation.h>

#import "SVXSystemEvent.h"
#import "SVXDeviceSetupFlowScene.h"
#import "SVXStoreDemo.h"
#import "SVXSpeechSynthesisRequest.h"

@interface _SVXSystemEventMutation : NSObject <SVXSystemEventMutating>

 {
    SVXSystemEvent *_baseModel;
    NSInteger _type;
    NSUInteger _timestamp;
    SVXDeviceSetupFlowScene *_deviceSetupFlowScene;
    SVXStoreDemo *_storeDemo;
    NSArray *_orderedAlarmAndTimerIDs;
    SVXSpeechSynthesisRequest *_speechSynthesisRequest;
    unsigned int _audioSessionID;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setAudioSessionID:(unsigned int)arg0 ;
-(void)setDeviceSetupFlowScene:(id)arg0 ;
-(void)setOrderedAlarmAndTimerIDs:(id)arg0 ;
-(void)setSpeechSynthesisRequest:(id)arg0 ;
-(void)setStoreDemo:(id)arg0 ;
-(void)setTimestamp:(NSUInteger)arg0 ;
-(void)setType:(NSInteger)arg0 ;


@end


#endif