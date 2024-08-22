// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DECASSETS2_H
#define _DECASSETS2_H


#import <Foundation/Foundation.h>


@interface _DECAssets2 : NSObject



+(id)asset;
+(id)dictionaryForClass:(Class)arg0 ;
+(id)dictionaryForResource:(id)arg0 ofType:(id)arg1 ;
+(id)dictionaryForResource:(id)arg0 ofType:(id)arg1 specifiedABGroup:(id)arg2 ;
+(id)pathForResource:(id)arg0 ofType:(id)arg1 ;
+(id)rawDictionaryForResource:(id)arg0 ofType:(id)arg1 ;
+(void)addOverridePath:(id)arg0 forResource:(id)arg1 ofType:(id)arg2 ;
+(void)clearOverrides;
+(void)onUpdateRestartThisProcess;
+(void)updateMobileAssetMetadata;


@end


#endif