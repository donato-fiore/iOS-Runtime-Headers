// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMUAAPNLSERVICE_H
#define CDMUAAPNLSERVICE_H

@class UPModelBundle, NSSet, UPSystemConfiguration;


#import "CDMDAGBaseService.h"

@interface CDMUaaPNLService : CDMDAGBaseService {
    UPModelBundle *__coreModelBundle;
    NSSet *__appModelBundles;
    UPSystemConfiguration *__systemConfiguration;
}




+(CGFloat)getBestAvailableProbabilityFromResultCandidate:(id)arg0 ;
+(id)assetFolderName;
+(id)convertEmbeddings:(id)arg0 forTokens:(id)arg1 ;
+(id)convertFromCDMTokens:(id)arg0 ;
+(id)createErrorResponse:(id)arg0 error:(id)arg1 ;
+(id)detectForegroundApp:(id)arg0 locale:(id)arg1 ;
+(id)loadAppModelBundles:(id)arg0 systemConfiguration:(id)arg1 ;
+(id)loadModelBundle:(id)arg0 modelConfiguration:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEnabled;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)setup:(id)arg0 ;


@end


#endif