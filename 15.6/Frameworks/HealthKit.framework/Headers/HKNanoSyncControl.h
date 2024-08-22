// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKNANOSYNCCONTROL_H
#define HKNANOSYNCCONTROL_H

@class NSString;
@protocol _HKXPCExportable, HKNanoSyncControlClient;

#import <Foundation/Foundation.h>

#import "HKProxyProvider.h"

@interface HKNanoSyncControl : NSObject <_HKXPCExportable, HKNanoSyncControlClient>

 {
    HKProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)fetchNanoSyncPairedDevicesWithCompletion:(id)arg0 ;
-(void)forceLastChanceNanoSyncWithCompletion:(id)arg0 ;
-(void)forceNanoSyncWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)forceNanoSyncWithPullRequest:(BOOL)arg0 completion:(id)arg1 ;
-(void)resetNanoSyncWithCompletion:(id)arg0 ;
-(void)waitForLastChanceSyncWithDevicePairingID:(id)arg0 timeout:(CGFloat)arg1 completion:(id)arg2 ;


@end


#endif