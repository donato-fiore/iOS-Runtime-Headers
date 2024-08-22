// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLLIBRARYBOOKMARKMANAGER_H
#define PLLIBRARYBOOKMARKMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLLibraryBookmarkManager : NSObject {
    NSMutableDictionary *_activeURLsByPathKey;
}




+(id)_securityScopedURLWithURL:(id)arg0 sandboxExtension:(id)arg1 ;
+(id)resolveSecurityScopedBookmark:(id)arg0 isStale:(*BOOL)arg1 error:(*id)arg2 ;
+(id)sharedBookmarkManager;
-(id)URLFromClientLibraryURL:(id)arg0 sandboxExtension:(id)arg1 error:(*id)arg2 ;
-(id)_activeURLForClientLibraryURL:(id)arg0 ;
-(id)allKnownLibraryURLs;
-(id)init;
-(id)newSandboxExtensionDataForClient:(struct ? )arg0 path:(id)arg1 writable:(BOOL)arg2 ;
-(id)sandboxExtensionsByPathForClient:(id)arg0 pathManager:(id)arg1 ;
-(void)_importLithiumAccessRights;
-(void)_loadFromDefaults;
-(void)_removeActiveURLForPathKey:(id)arg0 ;
-(void)_removeSSBForPathKey:(id)arg0 ;
-(void)_saveToDefaults;
-(void)_storeSecurityScopedURL:(id)arg0 pathKey:(id)arg1 ;
-(void)dealloc;
-(void)removeInvalidSSBsExcept:(id)arg0 ;
-(void)removeSSBForLibraryURL:(id)arg0 ;


@end


#endif