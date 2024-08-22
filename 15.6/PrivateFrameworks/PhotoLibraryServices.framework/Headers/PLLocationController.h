// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLLOCATIONCONTROLLER_H
#define PLLOCATIONCONTROLLER_H

@class CLLocationManager, NSMutableArray, NSDictionary, NSString;
@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>

#import "PLPhotoLibrary.h"

@interface PLLocationController : NSObject <CLLocationManagerDelegate>

 {
    CLLocationManager *_locationManager;
    NSMutableArray *_locationPendingAssets;
    NSDictionary *_exifDictionary;
    NSString *_locationStr;
    BOOL _isEnabled;
    BOOL _isUpdating;
    BOOL _isHeadingEnabled;
    PLPhotoLibrary *_photoLibrary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)usesEffectiveBundleIdentifier;
+(id)sharedInstance;
+(void)setUsesEffectiveBundleIdentifier:(BOOL)arg0 ;
-(BOOL)_addLocationToAsset:(id)arg0 ;
-(id)init;
-(id)location;
-(id)locationDictionaryForImageWithDeviceOrientation:(int)arg0 rearFacingCamera:(BOOL)arg1 ;
-(id)locationString;
-(id)photoLibrary;
-(void)_applicationStateChanged:(id)arg0 ;
-(void)_assetContainerChanged:(id)arg0 ;
-(void)_startUpdating;
-(void)_stopUpdating;
-(void)_updateLocationRunState;
-(void)_updatePendingAssets;
-(void)addLocationToMediaWithAssetURLWhenAvailable:(id)arg0 deviceOrientation:(int)arg1 cameraWasRearFacing:(BOOL)arg2 ;
-(void)dealloc;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHeadingEnabled:(BOOL)arg0 ;


@end


#endif