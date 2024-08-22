// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDCNPERSONALIASRESOLVER_H
#define IMDCNPERSONALIASRESOLVER_H

@class NSMutableDictionary, CNContactStore, IMDContactStoreChangeHistoryEventsHandler, NSData;

#import <Foundation/Foundation.h>


@interface IMDCNPersonAliasResolver : NSObject

@property (retain, nonatomic) NSMutableDictionary *aliasToCNIDMap; // ivar: _aliasToCNIDMap
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) IMDContactStoreChangeHistoryEventsHandler *contactsEventhandler; // ivar: _contactsEventhandler
@property (retain, nonatomic) NSData *currentHistoryToken; // ivar: _currentHistoryToken


-(BOOL)isCNContactFavorited:(id)arg0 ;
-(BOOL)isFavoritedContact:(id)arg0 ;
-(id)_batchFetchContactRecordIDForAliases:(id)arg0 ;
-(id)_fetchAliasToCNIDMapForAliases:(id)arg0 ;
-(id)_fetchContactIdentifierForAlias:(id)arg0 ;
-(id)_predicateForAlias:(id)arg0 ;
-(id)_predicateForEmailAddress:(id)arg0 ;
-(id)_predicateForPhoneNumber:(id)arg0 ;
-(id)_updateAliasToCNIDMap:(id)arg0 withHistoryToken:(id)arg1 ;
-(id)init;
-(void)CNRecordIDForAliases:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif