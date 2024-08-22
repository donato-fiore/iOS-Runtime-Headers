// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSOPENSTAGINGDIRECTORYMANAGER_H
#define LSOPENSTAGINGDIRECTORYMANAGER_H

@protocol LSOpenStagingDirectoryManagerIOPersonality;

#import <Foundation/Foundation.h>


@interface LSOpenStagingDirectoryManager : NSObject {
    unfair_lock_mutex _mutex;
    unordered_map<unsigned long long, LaunchServices::StagingDirectoryInfo, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, LaunchServices::StagingDirectoryInfo>>> _stagingDirectoryInfoMap;
    id<LSOpenStagingDirectoryManagerIOPersonality> *_ioPersonality;
    NSUInteger _personaGeneration;
    optional<unsigned long long> _mainStagingDirectoryKey;
}




+(id)sharedServerInstance;
-(id)_locked_stagingDirectoryForKey:(NSUInteger)arg0 ;
-(id)_stagingDirectoryForKeyRefreshingIfNecessary:(NSUInteger)arg0 ;
-(id)initWithIOPersonality:(id)arg0 ;
-(id)mainDataVolumeStagingURLWithError:(*id)arg0 ;
-(id)stagingDirectoryForCloningFileHandle:(id)arg0 error:(*id)arg1 ;
-(id)stagingDirectoryForCloningURL:(id)arg0 error:(*id)arg1 ;
-(void)_locked_updatePersonaStagingDirectories;


@end


#endif