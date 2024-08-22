// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSPRINGBOARDACTIONMANAGER_H
#define CKSPRINGBOARDACTIONMANAGER_H

@class NSArray, NSString;
@protocol CKContactsSearchManagerDelegate;

#import <Foundation/Foundation.h>

#import "CKContactsSearchManager.h"

@interface CKSpringBoardActionManager : NSObject <CKContactsSearchManagerDelegate>



@property (retain, nonatomic) CKContactsSearchManager *contactsSearchManager; // ivar: _contactsSearchManager
@property (copy, nonatomic) NSArray *conversationCache; // ivar: _conversationCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldHideGroupsDonations; // ivar: shouldHideGroupsDonations
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)conversationCacheForContactsSearchManager:(id)arg0 ;
-(id)init;
-(id)shortcutItemForConversation:(id)arg0 ;
-(void)_refreshConversationCache;
-(void)chatStateChanged:(id)arg0 ;
-(void)contactsSearchManager:(id)arg0 finishedSearchingWithResults:(id)arg1 ;
-(void)dealloc;
-(void)updateShortcutItems;


@end


#endif