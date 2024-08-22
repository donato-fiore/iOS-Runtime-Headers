// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPLATFORM_H
#define GEOPLATFORM_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GEOPlatform : NSObject {
    *__CTServerConnection _telephonyServerConnection;
    NSObject<OS_dispatch_queue> *_coreTelephonyIsolationQueue;
}




+(BOOL)isRunningInGeod;
+(id)sharedPlatform;
+(void)setIsRunningInGeod:(BOOL)arg0 ;
-(BOOL)isCellDataPossible;
-(BOOL)isInternalInstall;
-(BOOL)mapsFeatureFreedomEnabled;
-(BOOL)supportsASTC;
-(BOOL)supportsAdvancedMap;
-(BOOL)supportsForceTouch;
-(BOOL)supportsNavigation;
-(BOOL)supportsRealisticTiles;
-(CGFloat)deviceScreenScale;
-(NSInteger)deviceScreenHeightInPixels;
-(NSInteger)deviceScreenWidthInPixels;
-(id)buildVersion;
-(id)clientCapabilities;
-(id)deviceCountrySKU;
-(id)deviceCountrySKUForServiceRequests;
-(id)hardwareClass;
-(id)hardwareIdentifier;
-(id)hardwareModel;
-(id)init;
-(id)osAndBuildVersion;
-(id)osVersion;
-(id)productName;


@end


#endif