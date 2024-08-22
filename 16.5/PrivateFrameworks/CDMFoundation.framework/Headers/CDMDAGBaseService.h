// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMDAGBASESERVICE_H
#define CDMDAGBASESERVICE_H

@class NSString;


#import "CDMBaseService.h"
#import "CDMDynamicConfig.h"

@interface CDMDAGBaseService : CDMBaseService {
    NSString *_setupLanguageCode;
    CDMDynamicConfig *_currentConfig;
}




+(BOOL)isAssetRequired;
+(BOOL)isEnabled;
+(id)getAssetConfig;
+(id)getAssetFolderNamesByTrialFactorNames;
-(BOOL)isSetupRerunNeededForRequest:(id)arg0 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)initWithConfig:(id)arg0 ;
-(id)setup:(id)arg0 ;
-(id)supportedCommands;
-(void)_handleSetupRequest:(id)arg0 withCallback:(id)arg1 ;
-(void)handleCommand:(id)arg0 withCallback:(id)arg1 ;


@end


#endif