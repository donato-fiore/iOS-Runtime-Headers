// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSCOREDATABACKINGSTORE_H
#define DNDSCOREDATABACKINGSTORE_H

@class NSPersistentContainer, NSURL;

#import <Foundation/Foundation.h>


@interface DNDSCoreDataBackingStore : NSObject {
    os_unfair_lock_s _setupLock;
    NSPersistentContainer *_persistentContainer;
    NSURL *_testDatabaseURL;
}




-(id)_initWithURL:(id)arg0 ;
-(id)newManagedObjectContext;
-(void)setupPersistentStoreIfNeeded;


@end


#endif