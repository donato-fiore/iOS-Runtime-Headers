// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTENVIRONMENT_H
#define MTENVIRONMENT_H

@protocol MTEnvironmentDelegate;


#import "MTObject.h"

@interface MTEnvironment : MTObject

@property (weak, nonatomic) NSObject<MTEnvironmentDelegate> *delegate; // ivar: _delegate


-(BOOL)isAnonymous;
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
-(id)environmentBuild;
-(id)environmentDataCenter;
-(id)environmentInstance;
-(id)hardwareFamily;
-(id)hardwareModel;
-(id)hostApp;
-(id)hostAppVersion;
-(id)os;
-(id)osBuildNumber;
-(id)osLanguages;
-(id)osVersion;
-(id)pageUrl;
-(id)parentPageUrl;
-(id)pixelRatio;
-(id)resourceRevNum;
-(id)screenHeight;
-(id)screenWidth;
-(id)storeFrontHeader;
-(id)userAgent;
-(id)windowInnerHeight;
-(id)windowInnerWidth;
-(id)windowOuterHeight;
-(id)windowOuterWidth;


@end


#endif