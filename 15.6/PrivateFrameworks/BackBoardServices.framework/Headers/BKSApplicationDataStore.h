// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSAPPLICATIONDATASTORE_H
#define BKSAPPLICATIONDATASTORE_H

@class FBSApplicationDataStore, NSString;

#import <Foundation/Foundation.h>


@interface BKSApplicationDataStore : NSObject {
    FBSApplicationDataStore *_fbsApplicationDataStore;
}


@property (readonly, nonatomic) NSString *bundleID;


+(id)applicationsWithAvailableStores;
+(id)storeForApplication:(id)arg0 ;
+(void)setPrefetchedKeys:(id)arg0 ;
+(void)synchronize;
-(id)_initWithFBSApplicationDataStore:(id)arg0 ;
-(id)archivedObjectForKey:(id)arg0 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)safeArchivedObjectForKey:(id)arg0 ofType:(Class)arg1 ;
-(id)safeObjectForKey:(id)arg0 ofType:(Class)arg1 ;
-(void)archivedObjectForKey:(id)arg0 withResult:(id)arg1 ;
-(void)dealloc;
-(void)objectForKey:(id)arg0 withResult:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)safeArchivedObjectForKey:(id)arg0 ofType:(Class)arg1 withResult:(id)arg2 ;
-(void)safeObjectForKey:(id)arg0 ofType:(Class)arg1 withResult:(id)arg2 ;
-(void)setArchivedObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif