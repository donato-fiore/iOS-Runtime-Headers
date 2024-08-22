// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGDSPOTLIGHTRECEIVER_H
#define SGDSPOTLIGHTRECEIVER_H

@class NSString;
@protocol SpotlightReceiver;

#import <Foundation/Foundation.h>

#import "SGDSuggestManager.h"
#import "SGCoalescingDropBox.h"

@interface SGDSpotlightReceiver : NSObject <SpotlightReceiver>

 {
    SGDSuggestManager *_manager;
    SGCoalescingDropBox *_purgeAndDeleteIdentifiersDropbox;
    SGCoalescingDropBox *_deleteDomainIdentifiersDropbox;
    SGCoalescingDropBox *_deleteInteractionBundleIdDropbox;
    SGCoalescingDropBox *_deleteInteractionIdDropbox;
    SGCoalescingDropBox *_deleteInteractionGroupIdDropbox;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithManager:(id)arg0 ;
-(id)supportedContentTypes;
-(void)_addSearchableItem:(id)arg0 bundleID:(id)arg1 ;
-(void)_handleSocialHighlightsSafariDeletion;
-(void)addInteractions:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 ;
-(void)addOrUpdateSearchableItems:(id)arg0 bundleID:(id)arg1 ;
-(void)addUserAction:(id)arg0 withItem:(id)arg1 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg0 protectionClass:(id)arg1 ;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg0 ;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg0 bundleID:(id)arg1 ;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg0 bundleID:(id)arg1 ;
-(void)purgeSearchableItemsWithIdentifiers:(id)arg0 bundleID:(id)arg1 ;


@end


#endif