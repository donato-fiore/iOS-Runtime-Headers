// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3MUSICLIBRARYRESOURCESMANAGER_H
#define ML3MUSICLIBRARYRESOURCESMANAGER_H

@class NSString;
@protocol NSSecureCoding, ML3MusicLibraryResourcesProviding;

#import <Foundation/Foundation.h>

#import "ML3MusicLibraryResourcesManagerContext.h"
#import "_ML3BaseMusicLibraryResourcesManager.h"

@interface ML3MusicLibraryResourcesManager : NSObject <NSSecureCoding, ML3MusicLibraryResourcesProviding>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) ML3MusicLibraryResourcesManagerContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _ML3BaseMusicLibraryResourcesManager *implementation; // ivar: _implementation
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)sharedManager;
-(id)initWithBaseResourcesManager:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)libraryContainerPath;
-(id)libraryContainerPathByAppendingPathComponent:(id)arg0 ;
-(id)libraryContainerRelativePath:(id)arg0 ;
-(id)pathForBaseLocationPath:(NSInteger)arg0 ;
-(id)pathForResourceFileOrFolder:(int)arg0 ;
-(id)pathForResourceFileOrFolder:(int)arg0 basePath:(id)arg1 relativeToBase:(BOOL)arg2 createParentFolderIfNecessary:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif