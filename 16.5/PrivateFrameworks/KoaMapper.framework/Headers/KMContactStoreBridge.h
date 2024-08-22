// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KMCONTACTSTOREBRIDGE_H
#define KMCONTACTSTOREBRIDGE_H

@class CNContactStore, KVItemMapper, NSData, NSDictionary, NSString;
@protocol KMProviderDeltaDatasetBridge;

#import <Foundation/Foundation.h>

#import "KMProviderHistoryLog.h"

@interface KMContactStoreBridge : NSObject <KMProviderDeltaDatasetBridge>

 {
    CNContactStore *_contactStore;
    KVItemMapper *_itemMapper;
    KMProviderHistoryLog *_log;
    NSData *_historyToken;
    NSDictionary *_mapperAdditionalFields;
    NSUInteger _version;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_contactFetchKeys;
-(BOOL)_checkAuthorizationAndFetchMeCard;
// -(BOOL)enumerateDeltaItemsWithError:(*id)arg0 addOrUpdateBlock:(id)arg1 removeBlock:(unk)arg2  ;
-(BOOL)enumerateItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(BOOL)isDeltaEligible;
-(NSInteger)itemType;
-(NSUInteger)version;
-(id)_fetchContactsWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithContactStore:(id)arg0 historyLog:(id)arg1 ;
-(id)lastChangesAccepted;
-(id)originAppId;
-(id)validity;
-(void)changesAccepted;
-(void)resetDeltaState;


@end


#endif