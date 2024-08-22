// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMAVCALLMANAGER_H
#define IMAVCALLMANAGER_H

@class IMPowerAssertion, NSMutableArray, NSMutableDictionary, NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface IMAVCallManager : NSObject {
    IMPowerAssertion *_powerAssertion;
    NSMutableArray *_chatArray;
    NSMutableArray *_acChatProxyArray;
    NSMutableArray *_avChatProxyArray;
    NSMutableDictionary *_guidToACChatProxyMap;
    NSMutableDictionary *_guidToAVChatProxyMap;
    NSDate *_lastCallStateChange;
    int _avToken;
    int _acToken;
    unsigned int _avCallState;
    unsigned int _acCallState;
    unsigned int _globalCallState;
}


@property (readonly, nonatomic) NSArray *_FTCalls;
@property (readonly, nonatomic) unsigned int callState;
@property (readonly, nonatomic) NSArray *calls;
@property (readonly, nonatomic) BOOL hasActiveCall;


+(id)sharedInstance;
-(BOOL)_hasActiveAudioCall;
-(BOOL)_hasActiveFaceTimeCall;
-(id)_activeAudioCall;
-(id)_activeFaceTimeCall;
-(id)_copyMutableFTCalls;
-(id)_mutableFTCalls;
-(id)_nonRetainingChatList;
-(id)init;
-(unsigned int)_callStateForType:(unsigned int)arg0 ;
-(void)_addACChatProxy:(id)arg0 ;
-(void)_addAVChatProxy:(id)arg0 ;
-(void)_addIMAVChatToChatList:(id)arg0 ;
-(void)_postStateChangeIfNecessary;
-(void)_postStateChangeNamed:(id)arg0 fromState:(unsigned int)arg1 toState:(unsigned int)arg2 postType:(BOOL)arg3 type:(unsigned int)arg4 ;
-(void)_removeIMAVChatFromChatList:(id)arg0 ;
-(void)_sendProxyUpdate;
-(void)_setACCallState:(unsigned int)arg0 ;
-(void)_setACCallState:(unsigned int)arg0 quietly:(BOOL)arg1 ;
-(void)_setAVCallState:(unsigned int)arg0 ;
-(void)_setAVCallState:(unsigned int)arg0 quietly:(BOOL)arg1 ;
-(void)_updateACCallState;
-(void)_updateACChatProxyWithInfo:(id)arg0 ;
-(void)_updateAVCallState;
-(void)_updateAVChatProxyWithInfo:(id)arg0 ;
-(void)_updateOverallChatState;


@end


#endif