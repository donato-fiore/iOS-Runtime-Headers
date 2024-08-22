// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSATTSIRIAUDIOSESSIONSTATECLIENT_H
#define CSATTSIRIAUDIOSESSIONSTATECLIENT_H

@class NSString, AFNotifyObserver;
@protocol AFNotifyObserverDelegate, CSAttSiriSessionStateDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSAttSiriAudioSessionStateClient : NSObject <AFNotifyObserverDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<CSAttSiriSessionStateDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isActiveRequest; // ivar: _isActiveRequest
@property (nonatomic) BOOL isActiveSession; // ivar: _isActiveSession
@property (nonatomic) BOOL isListening; // ivar: _isListening
@property (nonatomic) BOOL isSpeaking; // ivar: _isSpeaking
@property (retain, nonatomic) AFNotifyObserver *siriStateObserver; // ivar: _siriStateObserver
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateNotificationQueue; // ivar: _stateNotificationQueue
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)dispatchStateChangedFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(void)notifyObserver:(id)arg0 didChangeStateFrom:(NSUInteger)arg1 to:(NSUInteger)arg2 ;
-(void)notifyObserver:(id)arg0 didReceiveNotificationWithToken:(int)arg1 ;


@end


#endif