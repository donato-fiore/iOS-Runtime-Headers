// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTBASEEVENTDATAPROVIDER_H
#define MTBASEEVENTDATAPROVIDER_H

@protocol MTBaseEventDataProviderDelegate;


#import "MTEventDataProvider.h"

@interface MTBaseEventDataProvider : MTEventDataProvider

@property (weak, nonatomic) NSObject<MTBaseEventDataProviderDelegate> *delegate;


-(id)app:(id)arg0 ;
-(id)appVersion:(id)arg0 ;
-(id)baseVersion:(id)arg0 ;
-(id)capacityData:(id)arg0 ;
-(id)capacityDataAvailable:(id)arg0 ;
-(id)capacityDisk:(id)arg0 ;
-(id)capacitySystem:(id)arg0 ;
-(id)capacitySystemAvailable:(id)arg0 ;
-(id)clientEventId:(id)arg0 ;
-(id)clientId:(id)arg0 ;
-(id)connection:(id)arg0 ;
-(id)cookies:(id)arg0 ;
-(id)dsId:(id)arg0 ;
-(id)eventTime:(id)arg0 ;
-(id)fetchAllCookies;
-(id)hardwareFamily:(id)arg0 ;
-(id)hardwareModel:(id)arg0 ;
-(id)hostApp:(id)arg0 ;
-(id)hostAppVersion:(id)arg0 ;
-(id)isSignedIn:(id)arg0 ;
-(id)knownFields;
-(id)os:(id)arg0 ;
-(id)osBuildNumber:(id)arg0 ;
-(id)osVersion:(id)arg0 ;
-(id)page:(id)arg0 ;
-(id)pageContext:(id)arg0 ;
-(id)pageDetails:(id)arg0 ;
-(id)pageId:(id)arg0 ;
-(id)pageType:(id)arg0 ;
-(id)pageUrl:(id)arg0 ;
-(id)parentPageUrl:(id)arg0 ;
-(id)pixelRatio:(id)arg0 ;
-(id)resourceRevNum:(id)arg0 ;
-(id)screenHeight:(id)arg0 ;
-(id)screenWidth:(id)arg0 ;
-(id)storeFrontHeader:(id)arg0 ;
-(id)timezoneOffset:(id)arg0 ;
-(id)userAgent:(id)arg0 ;
-(id)userType:(id)arg0 ;
-(id)windowInnerHeight:(id)arg0 ;
-(id)windowInnerWidth:(id)arg0 ;
-(id)windowOuterHeight:(id)arg0 ;
-(id)windowOuterWidth:(id)arg0 ;
-(id)xpPostFrequency:(id)arg0 ;
-(id)xpSendMethod:(id)arg0 ;
-(id)xpVersionMetricsKit:(id)arg0 ;


@end


#endif