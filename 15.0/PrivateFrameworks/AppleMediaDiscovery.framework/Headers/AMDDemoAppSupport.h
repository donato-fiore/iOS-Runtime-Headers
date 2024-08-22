// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDDEMOAPPSUPPORT_H
#define AMDDEMOAPPSUPPORT_H


#import <Foundation/Foundation.h>


@interface AMDDemoAppSupport : NSObject



+(BOOL)initEnv:(id)arg0 withDomain:(id)arg1 userId:(id)arg2 andStoreFrontId:(id)arg3 ;
+(BOOL)refreshServerSideTasteProfileForUser:(id)arg0 inStorefront:(id)arg1 withFeatureIds:(id)arg2 withDelegate:(id)arg3 ;
+(BOOL)updateUrlBagUsingHost:(id)arg0 ;
+(CGFloat)machGetClockSecs;
+(NSInteger)getTasteProfileUpdateTimeForSource:(id)arg0 inDomain:(id)arg1 ;
+(NSUInteger)getCountForFeature:(id)arg0 InDomain:(id)arg1 ;
+(id)deleteAllHistory:(*id)arg0 ;
+(id)deleteEvents:(*id)arg0 ;
+(id)fetchEvents:(*id)arg0 ;
+(id)fetchModelUrls:(*id)arg0 ;
+(id)fetchTasteProfile:(*id)arg0 ;
+(id)getAppSegments:(*id)arg0 ;
+(id)getCurrentHost;
+(id)getDomain;
+(id)getEnvHosts;
+(id)getEnvironments;
+(id)getHistory:(*id)arg0 ;
+(id)getStorefrontId;
+(id)getUrlBag;
+(id)getUserId;
+(void)deleteAllUserData;
+(void)flushCoreData;
+(void)initPersistentContainer;
+(void)refreshOnDeviceTasteProfile:(id)arg0 withUserId:(id)arg1 andStoreFrontId:(unsigned int)arg2 error:(*id)arg3 ;
+(void)saveDescriptors:(id)arg0 forDomain:(NSInteger)arg1 error:(*id)arg2 ;
+(void)saveEvent:(id)arg0 error:(*id)arg1 ;
+(void)saveTasteProfileEntriesFromDict:(id)arg0 inDomain:(id)arg1 forSource:(id)arg2 error:(*id)arg3 ;
+(void)setStorefrontId:(id)arg0 ;
+(void)setUserId:(id)arg0 ;
+(void)showAlert:(id)arg0 ;


@end


#endif