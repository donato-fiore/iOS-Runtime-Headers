// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTENVIRONMENTDEVICEDELEGATE_H
#define MTENVIRONMENTDEVICEDELEGATE_H

@class NSString;
@protocol MTEnvironmentDelegate;

#import <Foundation/Foundation.h>


@interface MTEnvironmentDeviceDelegate : NSObject <MTEnvironmentDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isAnonymous;
-(id)_diskUsage;
-(id)app;
-(id)appVersion;
-(id)capacityData;
-(id)capacityDataAvailable;
-(id)capacityDisk;
-(id)capacitySystem;
-(id)capacitySystemAvailable;
-(id)connectionType;
-(id)cookies;
-(id)dsId;
-(id)hardwareFamily;
-(id)hardwareModel;
-(id)hostApp;
-(id)os;
-(id)osBuildNumber;
-(id)osLanguages;
-(id)osVersion;
-(id)pageUrl;
-(id)pixelRatio;
-(id)resourceRevNum;
-(id)screenHeight;
-(id)screenWidth;
-(id)storeFrontHeader;
-(id)userAgent;
-(id)userType;
-(id)windowInnerHeight;
-(id)windowInnerWidth;
-(id)windowOuterHeight;
-(id)windowOuterWidth;


@end


#endif