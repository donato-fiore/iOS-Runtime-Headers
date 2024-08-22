// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCHOLDINGTANKMANIFEST_H
#define MCHOLDINGTANKMANIFEST_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MCHoldingTankManifest : NSObject {
    NSMutableDictionary *_universalManifest;
    NSObject<OS_dispatch_queue> *_syncQueue;
}




+(id)sharedManifest;
-(BOOL)_adjustManifestForDevice:(NSUInteger)arg0 withIdentifier:(id)arg1 addingIdentifer:(BOOL)arg2 outError:(*id)arg3 ;
-(BOOL)addProfileData:(id)arg0 withIdentifier:(id)arg1 toHoldingTankForDevice:(NSUInteger)arg2 outError:(*id)arg3 ;
-(id)_manifestForDevice:(NSUInteger)arg0 createIfNil:(BOOL)arg1 ;
-(id)_pathToHoldingTankDirectoryForDevice:(NSUInteger)arg0 ;
-(id)_pathToHoldingTankManifestForDevice:(NSUInteger)arg0 ;
-(id)_profileDataFileNameForProfileIdentifier:(id)arg0 ;
-(id)init;
-(id)pathToHoldingTankProfileDataForIdentifier:(id)arg0 targetDevice:(NSUInteger)arg1 createDirectory:(BOOL)arg2 ;
-(id)uninstalledProfileDataWithIdentifier:(id)arg0 targetDevice:(NSUInteger)arg1 ;
-(id)uninstalledProfileIdentifiersForDevice:(NSUInteger)arg0 ;
-(id)uninstalledProfileWithIdentifier:(id)arg0 targetDevice:(NSUInteger)arg1 ;
-(void)_createDirectory:(id)arg0 withIntermediateDirectories:(BOOL)arg1 ;
-(void)dealloc;
-(void)removeProfileDataWithIdentifier:(id)arg0 fromHoldingTankForDevice:(NSUInteger)arg1 ;


@end


#endif