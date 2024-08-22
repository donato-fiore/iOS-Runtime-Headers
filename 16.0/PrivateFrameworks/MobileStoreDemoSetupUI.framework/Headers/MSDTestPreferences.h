// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSDTESTPREFERENCES_H
#define MSDTESTPREFERENCES_H


#import <Foundation/Foundation.h>


@interface MSDTestPreferences : NSObject



+(id)sharedInstance;
-(BOOL)disableParallelProcessing;
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
-(NSUInteger)systemAppPollingInterval;
-(NSUInteger)systemAppTimeoutInterval;
-(id)contentSyncTimeoutInterval;
-(id)demoUnitServerURL;
-(id)findMyHubServerURL;
-(id)getValueFromTestPreferencesForKey:(id)arg0 ;
-(id)screenSaverIdleDelay;
-(unsigned int)rebootDelayForStaging;
-(unsigned int)timeShowingFatalError;


@end


#endif