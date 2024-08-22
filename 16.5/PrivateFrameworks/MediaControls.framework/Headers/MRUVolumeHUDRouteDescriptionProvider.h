// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUVOLUMEHUDROUTEDESCRIPTIONPROVIDER_H
#define MRUVOLUMEHUDROUTEDESCRIPTIONPROVIDER_H

@class NSString;
@protocol MRUSystemOutputDeviceRouteControllerObserver, MRUVolumeHUDRouteDescriptionProviderDelegate;

#import <Foundation/Foundation.h>

#import "MRUOutputDeviceAsset.h"

@interface MRUVolumeHUDRouteDescriptionProvider : NSObject <MRUSystemOutputDeviceRouteControllerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUVolumeHUDRouteDescriptionProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MRUOutputDeviceAsset *outputDeviceAsset; // ivar: _outputDeviceAsset
@property (retain, nonatomic) MRUOutputDeviceAsset *overrideOutputDeviceAsset; // ivar: _overrideOutputDeviceAsset
@property (readonly) Class superclass;


-(id)init;
-(id)packageStateForVolumeValue:(float)arg0 ;
-(void)cycleOverridePackageDescriptions;
-(void)resetOverridePackageDescription;
-(void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)arg0 ;
-(void)updateOutputDeviceAsset;


@end


#endif