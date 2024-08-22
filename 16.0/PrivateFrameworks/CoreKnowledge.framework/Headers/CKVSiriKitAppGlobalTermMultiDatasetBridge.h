// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVSIRIKITAPPGLOBALTERMMULTIDATASETBRIDGE_H
#define CKVSIRIKITAPPGLOBALTERMMULTIDATASETBRIDGE_H

@class NSSet, NSString, KVItemMapper;
@protocol CKVProviderMultiDatasetBridge;

#import <Foundation/Foundation.h>


@interface CKVSiriKitAppGlobalTermMultiDatasetBridge : NSObject <CKVProviderMultiDatasetBridge>

 {
    NSSet *_modifiedAppIds;
    NSSet *_deletedAppIds;
    NSString *_languageCode;
    KVItemMapper *_itemMapper;
}




-(id)init;
-(id)initWithModifiedOriginAppIds:(id)arg0 deletedOriginAppIds:(id)arg1 languageCode:(id)arg2 ;
-(void)enumerateAllDatasets:(*NSUInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif