// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPPIGGYBACKINGPAYLOADPROVIDER_H
#define CDPPIGGYBACKINGPAYLOADPROVIDER_H

@class KCJoiningRequestCircleSession, KCJoiningRequestAccountCircleDelegate, NSString;
@protocol CDPKeychainCircleProxy;

#import <Foundation/Foundation.h>


@interface CDPPiggybackingPayloadProvider : NSObject <CDPKeychainCircleProxy>

 {
    KCJoiningRequestCircleSession *_session;
    KCJoiningRequestAccountCircleDelegate *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)proxyWithSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)isComplete;
-(BOOL)requiresInitialSync;
-(BOOL)supportsInteractiveAuth;
-(id)initiatingPayload:(*id)arg0 ;
-(id)processIncomingPayload:(id)arg0 error:(*id)arg1 ;


@end


#endif