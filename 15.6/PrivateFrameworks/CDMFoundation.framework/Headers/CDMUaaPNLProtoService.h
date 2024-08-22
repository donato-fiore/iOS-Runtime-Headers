// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMUAAPNLPROTOSERVICE_H
#define CDMUAAPNLPROTOSERVICE_H

@class UPModelBundle, NSSet, UPSystemConfiguration;


#import "CDMDAGBaseService.h"

@interface CDMUaaPNLProtoService : CDMDAGBaseService {
    UPModelBundle *__coreModelBundle;
    NSSet *__appModelBundles;
    UPSystemConfiguration *__systemConfiguration;
}




+(id)assetFolderNames;
+(id)createErrorResponse:(id)arg0 ;
+(id)detectForegroundApp:(id)arg0 locale:(id)arg1 ;
+(id)loadAppModelBundles:(id)arg0 systemConfiguration:(id)arg1 ;
+(id)loadModelBundle:(id)arg0 modelConfiguration:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEnabled;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)setup:(id)arg0 ;


@end


#endif