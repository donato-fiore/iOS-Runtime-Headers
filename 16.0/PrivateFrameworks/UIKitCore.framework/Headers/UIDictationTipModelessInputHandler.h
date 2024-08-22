// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDICTATIONTIPMODELESSINPUTHANDLER_H
#define UIDICTATIONTIPMODELESSINPUTHANDLER_H

@protocol UIDictationTipHandlerDelegate;

#import <Foundation/Foundation.h>


@interface UIDictationTipModelessInputHandler : NSObject

@property (weak, nonatomic) NSObject<UIDictationTipHandlerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL modelessInputTipDictationStoppedSignal; // ivar: _modelessInputTipDictationStoppedSignal
@property (nonatomic) BOOL shouldAttemptToShowModelessTip; // ivar: _shouldAttemptToShowModelessTip
@property (nonatomic) BOOL softwareKeyboardInteractionAfterDictationStoppedSignal; // ivar: _softwareKeyboardInteractionAfterDictationStoppedSignal


-(BOOL)shouldShowModelessInputTip;
-(id)initWithDelegate:(id)arg0 ;
-(void)processSoftwareKeyboardInteraction;
-(void)processUserInteractionEnded;
-(void)resetDictationTipModelessHandlerSignalFlags;
-(void)showModelessInputTip;
-(void)triggerAttemptToShowModelessTipFlag;
-(void)userInteractionEndedDuringModelessInputTipDictationStoppedSignal;


@end


#endif