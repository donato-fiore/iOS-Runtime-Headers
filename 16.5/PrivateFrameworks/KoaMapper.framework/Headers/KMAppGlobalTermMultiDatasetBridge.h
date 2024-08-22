// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KMAPPGLOBALTERMMULTIDATASETBRIDGE_H
#define KMAPPGLOBALTERMMULTIDATASETBRIDGE_H

@class NSSet, NSString, KVItemMapper;
@protocol KMProviderMultiDatasetBridge;

#import <Foundation/Foundation.h>


@interface KMAppGlobalTermMultiDatasetBridge : NSObject <KMProviderMultiDatasetBridge>

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