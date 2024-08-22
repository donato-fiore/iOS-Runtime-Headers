// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXASSETS2_H
#define ATXASSETS2_H


#import <Foundation/Foundation.h>


@interface ATXAssets2 : NSObject



+(id)asset;
+(id)dictionaryForClass:(Class)arg0 ;
+(id)dictionaryForResource:(id)arg0 ofType:(id)arg1 specifiedABGroup:(id)arg2 ;
+(id)pathForResource:(id)arg0 ofType:(id)arg1 ;
+(id)rawDictionaryForResource:(id)arg0 ofType:(id)arg1 ;
+(id)rawDictionaryUsingMobileAssetsForResource:(id)arg0 ofType:(id)arg1 ;
+(id)rawDictionaryUsingTrialForResource:(id)arg0 ofType:(id)arg1 ;
+(void)addOverridePath:(id)arg0 forResource:(id)arg1 ofType:(id)arg2 ;
+(void)clearOverrides;
+(void)onUpdateRestartThisProcess;
+(void)updateMobileAssetMetadata;


@end


#endif