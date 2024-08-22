// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XBAPPLICATIONDATASTORE_H
#define XBAPPLICATIONDATASTORE_H

@class NSCountedSet, NSMutableDictionary, NSString;
@protocol XBSnapshotManifestStore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface XBApplicationDataStore : NSObject <XBSnapshotManifestStore>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSCountedSet *_cacheableBundleIdentifiers;
    NSMutableDictionary *_cachedStoresByBundleIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_bundleIdentifierHasDeniedLaunchInterface:(id)arg0 ;
-(NSInteger)_bundleIdentifierDeniedLaunchInterfaceCount:(id)arg0 ;
-(id)_init;
-(id)_loadCompatibilityInfoForBundleIdentifier:(id)arg0 ;
-(id)_storeForBundleIdentifier:(id)arg0 ;
-(id)init;
-(id)loadManifestDataForBundleIdentifier:(id)arg0 ;
-(void)_addBundleIdentifierToLaunchInterfaceDenyList:(id)arg0 ;
-(void)_clearCompatibilityInfoForBundleIdentifier:(id)arg0 ;
-(void)_persistCompatibilityInfo:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_removeBundleIdentifierFromLaunchInterfaceDenyList:(id)arg0 ;
-(void)beginAccessBlockForBundleIdentifier:(id)arg0 ;
-(void)clearManifestDataForBundleIdentifier:(id)arg0 ;
-(void)endAccessBlockForBundleIdentifier:(id)arg0 ;
-(void)persistManifestData:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)synchronizeForBundleIdentifier:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif