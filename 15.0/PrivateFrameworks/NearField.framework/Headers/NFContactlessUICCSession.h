// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCONTACTLESSUICCSESSION_H
#define NFCONTACTLESSUICCSESSION_H

@class NSString;
@protocol NFContactlessSessionCallbacks, NFContactlessUICCSessionDelegate;


#import "NFSession.h"

@interface NFContactlessUICCSession : NFSession <NFContactlessSessionCallbacks>

 {
    BOOL _fieldNotificationSent;
}


@property (readonly, copy) NSString *debugDescription;
@property NSObject<NFContactlessUICCSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)didDetectField:(BOOL)arg0 ;
-(void)didDetectFieldNotification:(id)arg0 ;
-(void)didEndUnexpectedly;
-(void)didSelectApplet:(id)arg0 ;


@end


#endif