// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVCONTACTSTOREBRIDGE_H
#define CKVCONTACTSTOREBRIDGE_H

@class CNContactStore, KVItemMapper, NSString;
@protocol CKVProviderDatasetBridge;

#import <Foundation/Foundation.h>


@interface CKVContactStoreBridge : NSObject <CKVProviderDatasetBridge>

 {
    CNContactStore *_contactStore;
    KVItemMapper *_itemMapper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_contactFetchKeys;
-(BOOL)enumerateItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(NSInteger)itemType;
-(id)init;
-(id)initWithContactStore:(id)arg0 ;
-(id)originAppId;


@end


#endif