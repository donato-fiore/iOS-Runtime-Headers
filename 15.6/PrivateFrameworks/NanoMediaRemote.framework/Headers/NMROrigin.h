// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMRORIGIN_H
#define NMRORIGIN_H

@class MPAVRoute, NSString, NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NMROrigin : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    MPAVRoute *_route;
    *void _mediaRemoteOrigin;
    NSUInteger _connectionState;
    NSString *_cachedDisplayName;
}


@property (readonly, nonatomic) NSUInteger connectionState;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) *void deviceInfo; // ivar: _deviceInfo
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL isCompanion;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) NSInteger logicalDeviceCount;
@property (readonly, nonatomic) *void mediaRemoteOrigin;
@property (readonly, nonatomic) MPAVRoute *route;
@property (readonly, nonatomic) NSUInteger type;
@property (readonly, nonatomic) NSNumber *uniqueIdentifier;


+(id)_transientOriginWithEndpointRoute:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithOrigin:(*void)arg0 deviceInfo:(*void)arg1 ;
-(id)initWithRoute:(id)arg0 ;
-(id)playerPathWithBundleID:(id)arg0 playerID:(id)arg1 ;
-(void)_handleExternalDeviceConnectionStateDidChangeNotification:(id)arg0 ;
-(void)_handleRouteConnectionDidConnectNotification:(id)arg0 ;
-(void)_handleRouteConnectionDidInvalidateNotification:(id)arg0 ;
-(void)_updateConnectionState;
-(void)dealloc;
-(void)updateOrigin:(*void)arg0 deviceInfo:(*void)arg1 ;
-(void)updateRoute:(id)arg0 ;


@end


#endif