// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVPORTRAITENTITIESBRIDGE_H
#define CKVPORTRAITENTITIESBRIDGE_H

@class KVItemMapper, NSNumber, NSString;
@protocol CKVProviderDatasetBridge;

#import <Foundation/Foundation.h>


@interface CKVPortraitEntitiesBridge : NSObject <CKVProviderDatasetBridge>

 {
    KVItemMapper *_itemMapper;
    NSNumber *_alternativeItemIdKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerateItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(NSInteger)itemType;
-(id)init;
-(id)originAppId;


@end


#endif