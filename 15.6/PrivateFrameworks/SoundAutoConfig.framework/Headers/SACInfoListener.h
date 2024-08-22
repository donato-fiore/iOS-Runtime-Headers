// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SACINFOLISTENER_H
#define SACINFOLISTENER_H

@class NSXPCConnection, NSString;
@protocol SACServiceInfoDelegate, SACServiceDelegate, SACInfoDelegate;

#import <Foundation/Foundation.h>


@interface SACInfoListener : NSObject <SACServiceInfoDelegate>

 {
    NSXPCConnection *mServiceConnection;
    id<SACServiceDelegate> *mProxyInterface;
    NSUInteger mVerbosity;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<SACInfoDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)handleSACInfo:(id)arg0 ;
-(void)handleServiceCrash;
-(void)setListenerVerbosity:(NSUInteger)arg0 ;
-(void)startServiceConnection;


@end


#endif