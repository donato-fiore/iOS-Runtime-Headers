// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVSIRIKITAPPGLOBALTERMBRIDGE_H
#define CKVSIRIKITAPPGLOBALTERMBRIDGE_H

@class NSString, KVItemMapper, NSURL;
@protocol CKVProviderDatasetBridge;

#import <Foundation/Foundation.h>


@interface CKVSiriKitAppGlobalTermBridge : NSObject <CKVProviderDatasetBridge>

 {
    NSString *_appId;
    KVItemMapper *_itemMapper;
    NSURL *_appIntentVocabURL;
    *__CFBundle _cfbundle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerateItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(NSInteger)itemType;
-(id)init;
-(id)initWithDeletedOriginAppId:(id)arg0 itemMapper:(id)arg1 ;
-(id)initWithOriginAppId:(id)arg0 languageCode:(id)arg1 itemMapper:(id)arg2 ;
-(id)originAppId;
-(void)dealloc;


@end


#endif