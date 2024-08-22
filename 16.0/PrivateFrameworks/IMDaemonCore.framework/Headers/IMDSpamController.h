// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDSPAMCONTROLLER_H
#define IMDSPAMCONTROLLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IMDSpamController : NSObject

@property (retain) NSMutableDictionary *chatGUIDToCountMap; // ivar: _chatGUIDToCountMap
@property (retain) NSMutableDictionary *chatGUIDToSpamCheckTimerMap; // ivar: _chatGUIDToSpamCheckTimerMap
@property (nonatomic) CGFloat spamExtensionCutoffTime; // ivar: _spamExtensionCutoffTime


+(id)sharedInstance;
-(BOOL)_isDisabled;
-(BOOL)shouldCheckForSpamWithExtensionInChat:(id)arg0 fromIdentifier:(id)arg1 toIdentifier:(id)arg2 ;
-(id)chatRegistry;
-(id)init;
-(void)__queryServerForID:(id)arg0 count:(id)arg1 completion:(id)arg2 ;
-(void)_spamCheckTimerFired:(id)arg0 ;
-(void)_updateSpamCheckTimerWithInterval:(CGFloat)arg0 forChatGUID:(id)arg1 ;
-(void)checkForSpamWithExtensionInChat:(id)arg0 forMessageBody:(id)arg1 sender:(id)arg2 withCompletion:(id)arg3 ;
-(void)dealloc;
-(void)detectSpam:(id)arg0 chatGUID:(id)arg1 ;


@end


#endif