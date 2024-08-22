// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUVOLUMEHUDROUTEDESCRIPTIONPROVIDER_H
#define MRUVOLUMEHUDROUTEDESCRIPTIONPROVIDER_H

@class NSString, CCUICAPackageDescription;
@protocol MRUSystemOutputDeviceRouteControllerObserver, MRUVolumeHUDRouteDescriptionProviderDelegate;

#import <Foundation/Foundation.h>

#import "MRUOutputDeviceAsset.h"

@interface MRUVolumeHUDRouteDescriptionProvider : NSObject <MRUSystemOutputDeviceRouteControllerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUVolumeHUDRouteDescriptionProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedDisplayTitle;
@property (retain, nonatomic) MRUOutputDeviceAsset *outputDeviceAsset; // ivar: _outputDeviceAsset
@property (retain, nonatomic) MRUOutputDeviceAsset *overrideOutputDeviceAsset; // ivar: _overrideOutputDeviceAsset
@property (readonly, nonatomic) CCUICAPackageDescription *packageDescription;
@property (readonly) Class superclass;


-(id)init;
-(id)packageStateForVolumeValue:(float)arg0 ;
-(void)cycleOverridePackageDescriptions;
-(void)resetOverridePackageDescription;
-(void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)arg0 ;
-(void)updateOutputDeviceAsset;


@end


#endif