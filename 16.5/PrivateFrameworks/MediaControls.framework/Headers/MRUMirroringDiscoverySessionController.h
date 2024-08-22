// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUMIRRORINGDISCOVERYSESSIONCONTROLLER_H
#define MRUMIRRORINGDISCOVERYSESSIONCONTROLLER_H

@class NSArray, AVOutputDeviceDiscoverySession;
@protocol MRUMirroringDiscoverySessionControllerDelegate;

#import <Foundation/Foundation.h>


@interface MRUMirroringDiscoverySessionController : NSObject

@property (retain, nonatomic) NSArray *availableOutputDevices; // ivar: _availableOutputDevices
@property (retain, nonatomic) NSArray *cachedAvailableOutputDevices; // ivar: _cachedAvailableOutputDevices
@property (weak, nonatomic) NSObject<MRUMirroringDiscoverySessionControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL detailedDiscovery; // ivar: _detailedDiscovery
@property (readonly, nonatomic, getter=isExternalOutputDeviceAvailable) BOOL externalOutputDeviceAvailable;
@property (nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (retain, nonatomic) AVOutputDeviceDiscoverySession *outputDeviceDiscoverySession; // ivar: _outputDeviceDiscoverySession


-(BOOL)sortDeviceToTop:(id)arg0 ;
-(id)filterAndSortOutputDevices:(id)arg0 ;
-(id)init;
-(id)initWithDeviceFeatures:(NSUInteger)arg0 ;
-(void)availableOutputDevicesChangedNotification:(id)arg0 ;
-(void)dealloc;
-(void)startDetailedDiscovery;
-(void)stopDetailedDiscovery;
-(void)updateDiscoveryMode;
-(void)updateOutputDevicesForAvailableOutputDevices:(id)arg0 ;
-(void)updateOutputDevicesIfNeeded;
-(void)updateOutputDevicesImmediately;


@end


#endif