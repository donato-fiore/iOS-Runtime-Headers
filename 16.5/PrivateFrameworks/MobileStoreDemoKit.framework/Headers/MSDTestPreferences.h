// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSDTESTPREFERENCES_H
#define MSDTESTPREFERENCES_H


#import <Foundation/Foundation.h>


@interface MSDTestPreferences : NSObject



+(id)sharedInstance;
-(BOOL)disableParallelProcessing;
-(BOOL)enablePeerDemoService;
-(BOOL)fakeActivationDemoBit;
-(BOOL)mockForBetterTogetherDemo;
-(BOOL)pauseContentUpdateOnError;
-(BOOL)skipMarkAsNotDemo;
-(CGFloat)appUsagePollingInterval;
-(CGFloat)caLogsUploadInterval;
-(CGFloat)cachingHubRetryInterval;
-(NSInteger)concurrentDownloadOperation;
-(NSInteger)concurrentDownloadRequest;
-(NSInteger)concurrentSession;
-(NSInteger)deviceActivationFlag;
-(NSInteger)findMyHubRetryDelay;
-(NSInteger)storePickerUIMode;
-(id)contentSyncTimeoutInterval;
-(id)demoUnitServerURL;
-(id)findMyHubServerURL;
-(id)getValueFromTestPreferencesForKey:(id)arg0 ;
-(id)mockAccountSettingsFile;
-(id)pressDemoTestTarget;
-(id)pressDemoXCTestProductsPath;
-(id)screenSaverIdleDelay;
-(unsigned int)rebootDelayForStaging;
-(unsigned int)systemAppPollingInterval;
-(unsigned int)systemAppTimeoutInterval;
-(unsigned int)timeShowingFatalError;


@end


#endif