// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPERSISTENTPROPERTYLISTSTORE_H
#define WBSPERSISTENTPROPERTYLISTSTORE_H

@class NSURL, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSCoalescedAsynchronousWriter.h"

@interface WBSPersistentPropertyListStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_backingStoreURL;
    NSMutableDictionary *_store;
    WBSCoalescedAsynchronousWriter *_writer;
}


@property (copy, nonatomic) id *createEmptyStoreHandler; // ivar: _createEmptyStoreHandler
@property (copy, nonatomic) id *validateLoadedStoreHandler; // ivar: _validateLoadedStoreHandler


-(id)_dataRepresentation;
-(id)_existingSavedData;
-(id)_objectForKey:(id)arg0 ofClass:(Class)arg1 ;
-(id)allKeys;
-(id)arrayForKey:(id)arg0 ;
-(id)dataForKey:(id)arg0 ;
-(id)dateForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)initWithBackingStoreURL:(id)arg0 ;
-(id)initWithBackingStoreURL:(id)arg0 fileResourceValues:(id)arg1 ;
-(id)numberForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)_loadDataIfNecessary;
-(void)_prepareEmptyStore;
-(void)clearStoreSynchronously;
-(void)saveAndCloseStoreSynchronously;
-(void)saveStoreSynchronously;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif