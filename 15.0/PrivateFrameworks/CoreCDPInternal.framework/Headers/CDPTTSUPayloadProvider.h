// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPTTSUPAYLOADPROVIDER_H
#define CDPTTSUPAYLOADPROVIDER_H

@class KCPairingChannel, NSString;
@protocol CDPKeychainCircleProxy, CDPDCircleProxy;

#import <Foundation/Foundation.h>


@interface CDPTTSUPayloadProvider : NSObject <CDPKeychainCircleProxy>

 {
    KCPairingChannel *_pairingChannel;
    BOOL _complete;
    id<CDPDCircleProxy> *_circleProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isComplete;
-(BOOL)requiresInitialSync;
-(BOOL)supportsInteractiveAuth;
-(id)initWithCircleProxy:(id)arg0 ;
-(id)initiatingPayload:(*id)arg0 ;
-(id)processIncomingPayload:(id)arg0 error:(*id)arg1 ;


@end


#endif