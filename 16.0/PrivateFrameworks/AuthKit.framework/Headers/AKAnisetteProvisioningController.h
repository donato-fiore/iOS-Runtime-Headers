// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKANISETTEPROVISIONINGCONTROLLER_H
#define AKANISETTEPROVISIONINGCONTROLLER_H

@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;
@protocol AKAnisetteServiceProtocol;

#import <Foundation/Foundation.h>

#import "AKDevice.h"

@interface AKAnisetteProvisioningController : NSObject {
    NSXPCConnection *_anisetteServiceConnection;
    NSLock *_connectionLock;
    NSXPCListenerEndpoint *_daemonXPCEndpoint;
}


@property (retain, nonatomic) NSObject<AKAnisetteServiceProtocol> *anisetteDataProvider; // ivar: _anisetteDataProvider
@property (retain, nonatomic) AKDevice *targetDevice; // ivar: _targetDevice


-(id)_anisetteServiceConnection;
-(id)anisetteDataForURLRequest:(id)arg0 error:(*id)arg1 ;
-(id)anisetteDataWithError:(*id)arg0 ;
-(id)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initForDevice:(id)arg0 provider:(id)arg1 ;
-(id)initWithDaemonXPCEndpoint:(id)arg0 ;
-(void)anisetteDataForURLRequest:(id)arg0 completion:(id)arg1 ;
-(void)anisetteDataWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)eraseWithCompletion:(id)arg0 ;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)fetchPeerAttestationDataForRequest:(id)arg0 completion:(id)arg1 ;
-(void)legacyAnisetteDataForDSID:(id)arg0 withCompletion:(id)arg1 ;
-(void)provisionWithCompletion:(id)arg0 ;
-(void)syncWithSIMData:(id)arg0 completion:(id)arg1 ;


@end


#endif