// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKGROUPEDDEVICE_H
#define FBKGROUPEDDEVICE_H

@class NSString, NSMutableDictionary;
@protocol DEDDeviceLike, DEDDeviceFBKSupport, FBKDiffableObject;

#import <Foundation/Foundation.h>


@interface FBKGroupedDevice : NSObject <DEDDeviceLike, DEDDeviceFBKSupport, FBKDiffableObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableDictionary *devices; // ivar: _devices
@property (nonatomic, readonly) NSInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)FBKKnownDevices;
+(id)currentDevicePlatform;
+(id)currentGroupedDevice;
+(id)deviceDefaults;
+(id)inspectFBKPairing;
+(id)sortedDevices:(id)arg0 ;
-(BOOL)hasCapabilities:(id)arg0 ;
-(BOOL)isCurrentDevice;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDevice:(id)arg0 ;
-(BOOL)isFBKPaired;
-(BOOL)isLikeDEDDevice:(id)arg0 ;
-(BOOL)isReady;
-(BOOL)isVisibleToDED;
-(BOOL)needsPairing;
-(id)anyDEDDevice;
-(id)bestStringForKey:(id)arg0 ;
-(id)build;
-(id)color;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDetails;
-(id)dedIDSDevice;
-(id)dedSharingDevice;
-(id)deviceClass;
-(id)deviceDataForSubmissionWithSession:(id)arg0 ;
-(id)deviceDefaults;
-(id)diffableHashWithContext:(id)arg0 ;
-(id)displayName;
-(id)displayType;
-(id)identifier;
-(id)imageData;
-(id)inferredPlatform;
-(id)initWithDevices:(id)arg0 ;
-(id)mostReliableDevice;
-(id)name;
-(id)platform;
-(id)productType;
-(id)publicLogDescription;
-(id)readyDevice;
-(id)serialize;
-(id)shortDescription;
-(id)transportsForDisplay;
-(void)_postDeviceChangeNotification;
-(void)_updateWithDevices:(id)arg0 ;
-(void)addDevice:(id)arg0 ;
-(void)dealloc;
-(void)deviceListChanged:(id)arg0 ;
-(void)fetchIconImageDataForScale:(float)arg0 completionCompletion:(id)arg1 ;
-(void)pairToFBK;
-(void)removeFBKPairing;
-(void)updateStoredCopyIfNeeded;


@end


#endif