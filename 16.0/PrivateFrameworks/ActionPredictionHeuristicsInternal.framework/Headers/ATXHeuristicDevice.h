// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHEURISTICDEVICE_H
#define ATXHEURISTICDEVICE_H

@class CNContactStore, CNContact, CNFavorites, NSDate, NSMutableDictionary, ATXLocationManager;

#import <Foundation/Foundation.h>


@interface ATXHeuristicDevice : NSObject {
    CNContactStore *_contactStoreLazy;
    CNContact *_meContactLazy;
    BOOL _meContactChecked;
    CNFavorites *_favoriteContactsLazy;
    NSDate *_now;
    NSMutableDictionary *_wrappedObjects;
}


@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) ATXLocationManager *locationManager; // ivar: _locationManager
@property (readonly, nonatomic) NSDate *now;


+(id)sharedCalendarVisibilityManager;
+(id)sharedEventStore;
-(id)_contactForPredicate:(id)arg0 ;
-(id)_contactKeysToFetch;
-(id)_dictContactForIdentifier:(id)arg0 ;
-(id)_dictContactForParticipant:(id)arg0 contactCache:(id)arg1 ;
-(id)_dictForAttachment:(id)arg0 ;
-(id)_unwrap:(id)arg0 ;
-(id)_wrap:(id)arg0 ;
-(id)contactsForPredicate:(id)arg0 ;
-(id)dictContactForCNContact:(id)arg0 ;
-(id)dictForEvent:(id)arg0 ;
-(id)dictForEvent:(id)arg0 contactCache:(id)arg1 ;
-(id)init;
-(id)initWithLocationManager:(id)arg0 ;
-(id)meContact;
-(id)wrap:(id)arg0 ;
-(void)accessFavoriteContacts:(id)arg0 ;
-(void)dealloc;
-(void)updateMeContact;


@end


#endif