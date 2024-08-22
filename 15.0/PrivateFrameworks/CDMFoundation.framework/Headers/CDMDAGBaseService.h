// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMDAGBASESERVICE_H
#define CDMDAGBASESERVICE_H

@class NSString;


#import "CDMBaseService.h"
#import "CDMAssetConfig.h"
#import "CDMDynamicConfig.h"

@interface CDMDAGBaseService : CDMBaseService {
    CDMAssetConfig *assetConfig;
    NSString *_setupLanguageCode;
    CDMDynamicConfig *_currentConfig;
}




+(id)assetFolderName;
+(id)trialFactorName;
-(BOOL)isAssetRequired;
-(BOOL)isEnabled;
-(BOOL)isSetupRerunNeededForRequest:(id)arg0 ;
-(id)getAssetConfig;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)initWithConfig:(id)arg0 ;
-(id)setup:(id)arg0 ;
-(id)supportedCommands;
-(void)_handleFunctionalRequest:(id)arg0 withCallback:(id)arg1 ;
-(void)_handleSetupRequest:(id)arg0 withCallback:(id)arg1 ;
-(void)handleCommand:(id)arg0 withCallback:(id)arg1 ;


@end


#endif