// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ICLEXICONMANAGER_H
#define _ICLEXICONMANAGER_H

@class NSArray, NSMutableDictionary, NSMutableArray;
@protocol _ICLexiconManaging, _ICFeedbackAccepting, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_ICNamedEntityStore.h"

@interface _ICLexiconManager : NSObject <_ICLexiconManaging, _ICFeedbackAccepting>

 {
    _opaque_pthread_mutex_t _contactsCallbackLock;
    _opaque_pthread_mutex_t _namedEntityCallbackLock;
    NSArray *_sources;
    NSMutableDictionary *_contacts;
    NSMutableArray *_contactObservers;
    int _contactChangeCount;
}


@property int contactLoadState; // ivar: _contactLoadState
@property int namedEntityLoadState; // ivar: _namedEntityLoadState
@property (retain, nonatomic) _ICNamedEntityStore *namedEntityStore; // ivar: _namedEntityStore
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


+(NSUInteger)countWords:(id)arg0 ;
-(NSUInteger)getContactCount;
-(id)addContactObserver:(SEL)arg0 ;
-(id)initWithLexiconSources:(id)arg0 ;
-(id)loadLexicons;
-(id)loadLexicons:(id)arg0 ;
-(id)loadLexiconsUsingFilter:(id)arg0 ;
-(id)stateName:(int)arg0 ;
-(int)debugEntityLoadState;
-(void)_actuallyLoadLexicons;
-(void)addContact:(id)arg0 ;
-(void)changeContactLoadingState:(int)arg0 ;
-(void)changeNamedEntityLoadingState:(int)arg0 ;
-(void)completeContacts;
-(void)completeNamedEntities;
-(void)completeRecentContacts;
-(void)completeRecentNamedEntities;
-(void)dealloc;
-(void)doLoadLexicon;
-(void)handleContact:(id)arg0 ;
-(void)handleNamedEntity:(id)arg0 ;
-(void)handleRecentContact:(id)arg0 ;
-(void)handleRecentNamedEntity:(id)arg0 ;
-(void)hibernate;
-(void)printLexiconToNSLog:(struct _LXLexicon *)arg0 ;
-(void)provideFeedbackForString:(id)arg0 type:(unsigned char)arg1 style:(unsigned char)arg2 ;
-(void)removeContact:(id)arg0 ;
-(void)removeContactObserver:(id)arg0 ;
-(void)resetNamedEntities;
-(void)setupContacts;
-(void)setupNamedEntities;
-(void)setupRecentContacts;
-(void)setupRecentNamedEntities;
-(void)unloadLexicons;
-(void)warmUp;


@end


#endif