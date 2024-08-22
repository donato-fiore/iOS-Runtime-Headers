// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKNOTIFYWHENNETWORKCHANGESIPADDRESSPROVIDER_H
#define CRKNOTIFYWHENNETWORKCHANGESIPADDRESSPROVIDER_H

@class NSString;
@protocol CRKIPAddressProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CRKNotifyWhenNetworkChangesIPAddressProvider : NSObject <CRKIPAddressProviding>

 {
    id<CRKIPAddressProviding> *mBaseProvider;
    NSObject<OS_dispatch_queue> *mQueue;
    int mNetworkChangeNotificationToken;
}


@property (copy, nonatomic) NSString *IPAddress; // ivar: _IPAddress
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithIPAddressProvider:(id)arg0 ;
-(void)dealloc;
-(void)networkDidChange;
-(void)networkDidChangeDebounced;
-(void)subscribeToNetworkChangeNotifications;
-(void)unsubscribeFromNetworkChangeNotifications;


@end


#endif