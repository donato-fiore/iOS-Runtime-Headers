// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMUAAPNLMODELPROVIDER_H
#define CDMUAAPNLMODELPROVIDER_H

@class FBSDisplayLayoutMonitorConfiguration;

#import <Foundation/Foundation.h>


@interface CDMUaaPNLModelProvider : NSObject {
    FBSDisplayLayoutMonitorConfiguration *_frontboardConfig;
}




+(id)createModelConfigurationFromURL:(id)arg0 locale:(id)arg1 error:(*id)arg2 ;
+(id)createModelConfigurationsFromURLs:(id)arg0 locale:(id)arg1 error:(*id)arg2 ;
+(id)getCoreModelConfigurationForLocale:(id)arg0 bundlePath:(id)arg1 error:(*id)arg2 ;
+(id)modelURLsForInstalledApps;
+(id)retrieveAllAppBundleURLs;
+(id)retrieveModelURLFromBundleURL:(id)arg0 ;
-(id)foregroundBundeIdentifiers;
-(id)getForegroundModelConfigForLocale:(id)arg0 error:(*id)arg1 ;
-(id)getModelConfigsForLocale:(id)arg0 error:(*id)arg1 ;
-(id)getModelURLForForegroundApp;
-(id)getModelURLs:(*id)arg0 ;
-(id)getModelURLsFromDefaults;
-(id)init;


@end


#endif