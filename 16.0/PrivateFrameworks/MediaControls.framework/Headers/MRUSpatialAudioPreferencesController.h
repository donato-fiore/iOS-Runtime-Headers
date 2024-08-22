// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUSPATIALAUDIOPREFERENCESCONTROLLER_H
#define MRUSPATIALAUDIOPREFERENCESCONTROLLER_H

@class NSCache, NSString;
@protocol MRUSystemOutputDeviceRouteControllerObserver, MRUSpatialAudioPreferencesControllerDelegate;

#import <Foundation/Foundation.h>

#import "MRUSystemOutputDeviceRouteController.h"

@interface MRUSpatialAudioPreferencesController : NSObject <MRUSystemOutputDeviceRouteControllerObserver>



@property (readonly, nonatomic) int accessoryStereoHFPStatus; // ivar: _accessoryStereoHFPStatus
@property (retain, nonatomic) NSCache *cache; // ivar: _cache
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUSpatialAudioPreferencesControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isHeadTrackingSupported; // ivar: _isHeadTrackingSupported
@property (readonly, nonatomic) BOOL isMonoAudioEnabled; // ivar: _isMonoAudioEnabled
@property (readonly, nonatomic) BOOL isSpatialAudioSupported; // ivar: _isSpatialAudioSupported
@property (readonly, nonatomic) MRUSystemOutputDeviceRouteController *outputDeviceRouteController; // ivar: _outputDeviceRouteController
@property (readonly) Class superclass;


-(id)initWithOutputDeviceRouteController:(id)arg0 ;
-(id)preferenceForBundleID:(id)arg0 ;
-(void)accessibilityHeadTrackChangedNotification;
-(void)dealloc;
-(void)resetPreferences;
-(void)setPreferences:(id)arg0 forBundleID:(id)arg1 ;
-(void)startMonitoring;
-(void)stopMonitoring;
-(void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)arg0 ;
-(void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)arg0 ;
-(void)updateHeadTrackedFaceTimeSupport;
-(void)updateHeadTrackingSupported;
-(void)updateMonoAudioEnabled;
-(void)updateSpatialAudioSupported;


@end


#endif