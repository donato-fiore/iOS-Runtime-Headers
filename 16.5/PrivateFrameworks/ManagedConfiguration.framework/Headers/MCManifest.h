// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMANIFEST_H
#define MCMANIFEST_H

@class NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MCManifest : NSObject {
    NSString *_systemFilePath;
    NSString *_userFilePath;
    NSMutableDictionary *_systemManifest;
    NSMutableDictionary *_userManifest;
    NSObject<OS_dispatch_queue> *_syncQueue;
}




+(id)installedProfileDataWithIdentifier:(id)arg0 ;
+(id)installedProfileWithIdentifier:(id)arg0 ;
+(id)installedSystemProfileDataWithIdentifier:(id)arg0 ;
+(id)installedSystemProfileWithIdentifier:(id)arg0 ;
+(id)installedUserProfileDataWithIdentifier:(id)arg0 ;
+(id)installedUserProfileWithIdentifier:(id)arg0 ;
+(id)sharedManifest;
+(void)_setSystemManifestPath:(id)arg0 userManifestPath:(id)arg1 ;
-(id)_systemManifest;
-(id)_userManifest;
-(id)allInstalledPayloadsOfClass:(Class)arg0 ;
-(id)allInstalledProfileIdentifiers;
-(id)allInstalledSystemProfileIdentifiers;
-(id)allInstalledUserProfileIdentifiers;
-(id)allProfileIdentifiersInstalledNonInteractivelyWithFilterFlags:(int)arg0 ;
-(id)identifiersOfProfilesWithFilterFlags:(int)arg0 ;
-(id)init;
-(id)installedMDMProfile;
-(id)installedProfileDataWithIdentifier:(id)arg0 ;
-(id)installedProfileWithIdentifier:(id)arg0 ;
-(id)installedSystemProfileWithIdentifier:(id)arg0 ;
-(id)installedUserProfileWithIdentifier:(id)arg0 ;
-(id)systemManifest;
-(id)userManifest;
-(void)_adjustManifestIdentifier:(id)arg0 isUserInstall:(BOOL)arg1 flag:(int)arg2 addingIdentifier:(BOOL)arg3 ;
-(void)_setSystemManifest:(id)arg0 userManifest:(id)arg1 ;
-(void)addIdentifierToSystemManifest:(id)arg0 flag:(int)arg1 ;
-(void)addIdentifierToUserManifest:(id)arg0 flag:(int)arg1 ;
-(void)dealloc;
-(void)invalidateCache;
-(void)removeIdentifierFromSystemManifest:(id)arg0 flag:(int)arg1 ;
-(void)removeIdentifierFromUserManifest:(id)arg0 flag:(int)arg1 ;


@end


#endif