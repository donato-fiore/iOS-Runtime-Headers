// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMMDSUAAPNLSERVICE_H
#define CDMMDSUAAPNLSERVICE_H



#import "CDMUaaPNLProtoService.h"

@interface CDMMDSUaaPNLService : CDMUaaPNLProtoService



+(BOOL)isAssetRequired;
+(BOOL)isEnabled;
+(id)getAssetFolderNamesByTrialFactorNames;
-(id)setup:(id)arg0 ;
-(int)getOverrideNamespace;


@end


#endif