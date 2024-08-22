// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCMEDIAREMOTEKEYBOARDADAPTER_H
#define _TVRCMEDIAREMOTEKEYBOARDADAPTER_H

@class NSTimer, NSString, NSMutableArray;
@protocol _TVRCMediaRemoteKeyboardAdapterDelegate;

#import <Foundation/Foundation.h>

#import "_TVRCMRTelevisionWrapper.h"

@interface _TVRCMediaRemoteKeyboardAdapter : NSObject

@property (weak, nonatomic) NSTimer *acknowledgementTimer; // ivar: _acknowledgementTimer
@property (weak, nonatomic) NSObject<_TVRCMediaRemoteKeyboardAdapterDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) _TVRCMRTelevisionWrapper *television; // ivar: _television
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) NSMutableArray *typedStringsAwaitingAcknowledgement; // ivar: _typedStringsAwaitingAcknowledgement


-(id)init;
-(void)_acknowledgementTimerExpired:(id)arg0 ;
-(void)receivedRemotelyUpdatedText:(id)arg0 ;
-(void)sessionBeganWithInitialText:(id)arg0 ;
-(void)sessionEnded;
-(void)userEnteredText:(id)arg0 ;


@end


#endif