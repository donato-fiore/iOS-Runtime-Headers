// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFCONTACTLESSSESSION_H
#define NFCONTACTLESSSESSION_H

@class NSDictionary, NSString;
@protocol NFContactlessSessionCallbacks, NFContactlessSessionDelegate;


#import "NFSession.h"
#import "NFApplet.h"

@interface NFContactlessSession : NFSession <NFContactlessSessionCallbacks>

 {
    NSDictionary *_appletsById;
    id<NFContactlessSessionDelegate> *_delegate;
    BOOL _fieldNotificationSent;
}


@property (readonly, retain) NFApplet *activeApplet; // ivar: _activeApplet
@property (readonly, copy) NSString *debugDescription;
@property NSObject<NFContactlessSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)startCardEmulation;
-(BOOL)startCardEmulation:(*id)arg0 ;
-(BOOL)stopCardEmulation;
-(BOOL)stopCardEmulation:(*id)arg0 ;
-(id)allApplets;
-(id)appletWithIdentifier:(id)arg0 ;
-(void)didDetectField:(BOOL)arg0 ;
-(void)didDetectFieldNotification:(id)arg0 ;
-(void)didEndUnexpectedly;
-(void)didFelicaStateChange:(id)arg0 ;
-(void)didSelectApplet:(id)arg0 ;
-(void)didStartSession:(id)arg0 ;
-(void)endSession;
-(void)endSessionWithCompletion:(id)arg0 ;


@end


#endif