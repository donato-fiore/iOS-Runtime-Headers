// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVLAUNCHSERVICESBRIDGE_H
#define CKVLAUNCHSERVICESBRIDGE_H

@class KVItemMapper, NSDictionary, NSString;
@protocol CKVProviderDatasetBridge;

#import <Foundation/Foundation.h>


@interface CKVLaunchServicesBridge : NSObject <CKVProviderDatasetBridge>

 {
    NSUInteger _options;
    KVItemMapper *_itemMapper;
    NSDictionary *_additionalFields;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_checkAppValidity:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)enumerateItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(NSInteger)itemType;
-(id)_appEnumerator;
-(id)init;
-(id)initWithFetchOptions:(NSUInteger)arg0 settings:(id)arg1 ;
-(id)originAppId;


@end


#endif