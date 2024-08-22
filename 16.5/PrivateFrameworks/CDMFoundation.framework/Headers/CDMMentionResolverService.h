// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMMENTIONRESOLVERSERVICE_H
#define CDMMENTIONRESOLVERSERVICE_H

@class MRRMultimodalMentionResolver, NSArray;


#import "CDMDAGBaseService.h"

@interface CDMMentionResolverService : CDMDAGBaseService

@property (retain, nonatomic) MRRMultimodalMentionResolver *mentionResolver; // ivar: _mentionResolver
@property (readonly, nonatomic) NSArray *overrideMentionsForReplay; // ivar: _overrideMentionsForReplay


+(BOOL)isAssetRequired;
+(BOOL)isEnabled;
+(id)getAssetFolderNamesByTrialFactorNames;
-(id)getPredictor:(id)arg0 forLocale:(id)arg1 status:(*id)arg2 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)predictWithInput:(id)arg0 forLocale:(id)arg1 status:(*id)arg2 ;
-(id)setup:(id)arg0 ;


@end


#endif