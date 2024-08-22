// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMOVERRIDESPROTOSERVICE_H
#define CDMOVERRIDESPROTOSERVICE_H



#import "CDMDAGBaseService.h"
#import "_TtC13CDMFoundation23CDMNLv4OverrideDatabase.h"

@interface CDMOverridesProtoService : CDMDAGBaseService

@property (readonly, nonatomic) _TtC13CDMFoundation23CDMNLv4OverrideDatabase *store; // ivar: __store


+(BOOL)isAssetRequired;
+(BOOL)isEnabled;
+(id)getAssetFolderNamesByTrialFactorNames;
+(id)pathToOverridesFileWithLanguageCode:(id)arg0 bundle:(id)arg1 ;
-(id)createSetupErrorCmd:(id)arg0 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)matchOverride:(id)arg0 shouldAppend:(*BOOL)arg1 ;
-(id)setup:(id)arg0 ;
-(id)setupFailedFor:(id)arg0 ;
-(id)setupSucceeded;
-(id)store:(id)arg0 ;
-(void)dealloc;


@end


#endif