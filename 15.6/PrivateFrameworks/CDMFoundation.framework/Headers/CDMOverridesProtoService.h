// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMOVERRIDESPROTOSERVICE_H
#define CDMOVERRIDESPROTOSERVICE_H



#import "CDMDAGBaseService.h"
#import "_TtC13CDMFoundation23CDMNLv4OverrideDatabase.h"

@interface CDMOverridesProtoService : CDMDAGBaseService {
    _TtC13CDMFoundation23CDMNLv4OverrideDatabase *database;
}




+(id)assetFolderNames;
+(id)pathToOverridesFileWithLanguageCode:(id)arg0 bundle:(id)arg1 ;
+(id)trialFactorName;
-(BOOL)isAssetRequired;
-(BOOL)isEnabled;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)matchOverride:(id)arg0 ;
-(id)setup:(id)arg0 ;


@end


#endif