// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KMLAUNCHSERVICESBRIDGE_H
#define KMLAUNCHSERVICESBRIDGE_H

@class KVItemMapper, NSDictionary, NSString;
@protocol KMProviderDatasetBridge;

#import <Foundation/Foundation.h>


@interface KMLaunchServicesBridge : NSObject <KMProviderDatasetBridge>

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
-(id)initWithFetchOptions:(NSUInteger)arg0 languageCodes:(id)arg1 ;
-(id)originAppId;


@end


#endif