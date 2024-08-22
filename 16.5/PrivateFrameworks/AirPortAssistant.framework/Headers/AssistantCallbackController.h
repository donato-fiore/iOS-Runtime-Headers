// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASSISTANTCALLBACKCONTROLLER_H
#define ASSISTANTCALLBACKCONTROLLER_H

@protocol AssistantCallbackUIDelegateResult, AssistantCallbackUIDelegate;

#import <Foundation/Foundation.h>


@interface AssistantCallbackController : NSObject <AssistantCallbackUIDelegateResult>

 {
    BOOL _saveScanState;
    *AssistantCallbackContext _callbackContext;
}


@property (retain, nonatomic) NSObject<AssistantCallbackUIDelegate> *uiDelegate; // ivar: _uiDelegate


+(id)keychainPasswordForBaseStation:(id)arg0 ;
+(int)removeKeychainPasswordForBaseStation:(id)arg0 ;
+(int)updateKeychainBasePassword:(id)arg0 forMACAddress:(id)arg1 withBaseName:(id)arg2 ;
+(int)updateKeychainNetworkPassword:(id)arg0 forNetworkNamed:(id)arg1 ;
+(void)keychainPasswordForBaseStation:(id)arg0 delegate:(id)arg1 ;
-(*unk)assistantCallback;
-(id)init;
-(int)assistantCallback:(struct AssistantCallbackContext *)arg0 withSelector:(int)arg1 ;
-(int)startJoinNetwork:(id)arg0 password:(id)arg1 rememberChoice:(int)arg2 ;
-(int)startScanForNetworks:(id)arg0 wifiType:(int)arg1 mergeResults:(BOOL)arg2 maxAge:(NSUInteger)arg3 ;
-(int)subclassAssistantCallback:(struct AssistantCallbackContext *)arg0 ;
-(void)callbackAskUserAQuestionResult:(int)arg0 result:(int)arg1 ;
-(void)callbackAskUserForPasswordResult:(int)arg0 password:(id)arg1 remember:(int)arg2 ;
-(void)callbackAskUserToChooseFromStringListResult:(int)arg0 selectedString:(id)arg1 ;
-(void)dealloc;
-(void)joinNetworkDone:(id)arg0 ;
-(void)scanForNetworksDone:(id)arg0 ;
-(void)userResponseToJoinNetwork:(int)arg0 ;
-(void)userResponseToPPPoECredsFailed:(int)arg0 ;
-(void)userResponseToWarning:(int)arg0 ;


@end


#endif