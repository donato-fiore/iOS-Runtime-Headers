// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGSPOTLIGHTCONTACTSADAPTER_H
#define SGSPOTLIGHTCONTACTSADAPTER_H

@class NSURL, NSString;
@protocol SGJournalContactsObserver;

#import <Foundation/Foundation.h>

#import "SGSqlEntityStore.h"

@interface SGSpotlightContactsAdapter : NSObject <SGJournalContactsObserver>

 {
    NSURL *_vCardsDirectoryURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SGSqlEntityStore *store; // ivar: _store
@property (readonly) Class superclass;


+(id)dispatchGroup;
+(id)entityIdentifiersFromCNIdentifiers:(id)arg0 ;
+(id)searchableIndex;
+(void)notifyWhenFlushed:(id)arg0 ;
-(id)coreSpotlightAttributeSetForContact:(id)arg0 ;
-(id)initWithSGSqlEntityStore:(id)arg0 ;
-(id)pseudoContactVcardDirectory;
-(id)searchableItemsForContactsForInternalIdentifiers:(id)arg0 ;
-(id)urlForRecordIdVCard:(id)arg0 ;
-(id)urlForStorageContactVCard:(id)arg0 ;
-(void)addContact:(id)arg0 ;
-(void)confirmContact:(id)arg0 ;
-(void)confirmOrRejectContact:(id)arg0 ;
-(void)rejectContact:(id)arg0 ;
-(void)removeAllPseudoContactsInIdSet:(id)arg0 ;
-(void)removeAllStoredPseudoContacts;
-(void)sendContactToSpotlight:(id)arg0 ;


@end


#endif