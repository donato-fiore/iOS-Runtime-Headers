// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCLUNLOCKHISTORYPERSISTENTSTORE_H
#define SCLUNLOCKHISTORYPERSISTENTSTORE_H

@class NSURL, NSPersistentContainer, NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface SCLUnlockHistoryPersistentStore : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSPersistentContainer *persistentContainer; // ivar: _persistentContainer
@property (retain) NSManagedObjectContext *storeContext; // ivar: _storeContext


-(BOOL)deleteHistory:(*id)arg0 ;
-(BOOL)insertItem:(id)arg0 ;
-(BOOL)purgeOldItems;
-(id)initWithURL:(id)arg0 ;
-(id)recentHistoryItems;
-(id)recentItemsThresholdDate;
-(void)dealloc;
-(void)loadStore;


@end


#endif