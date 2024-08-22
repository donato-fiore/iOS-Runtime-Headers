// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOCONFIGURATIONCLIENT_H
#define SOCONFIGURATIONCLIENT_H


#import <Foundation/Foundation.h>

#import "SOClient.h"
#import "SOConfiguration.h"
#import "SOConfigurationVersion.h"

@interface SOConfigurationClient : NSObject {
    SOClient *_client;
    SOConfiguration *_configuration;
    SOConfigurationVersion *_configurationVersion;
}


@property (readonly, nonatomic) NSInteger configVersion;
@property (readonly, nonatomic) SOConfiguration *configuration;


+(id)defaultClient;
-(BOOL)willHandleURL:(id)arg0 responseCode:(NSInteger)arg1 callerBundleIdentifier:(id)arg2 ;
-(id)init;
-(id)profileForURL:(id)arg0 responseCode:(NSInteger)arg1 ;
-(void)_checkNewVersion;
-(void)_reloadConfig;


@end


#endif