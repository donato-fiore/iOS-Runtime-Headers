// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVCONTACTSTOREBRIDGE_H
#define CKVCONTACTSTOREBRIDGE_H

@class CNContactStore, NSString;
@protocol CKVProviderDatasetBridge;

#import <Foundation/Foundation.h>


@interface CKVContactStoreBridge : NSObject <CKVProviderDatasetBridge>

 {
    CNContactStore *_contactStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_contactFetchKeys;
-(BOOL)enumerateVocabularyItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(Class)itemClass;
-(id)init;
-(id)initWithContactStore:(id)arg0 ;
-(id)originApp;


@end


#endif