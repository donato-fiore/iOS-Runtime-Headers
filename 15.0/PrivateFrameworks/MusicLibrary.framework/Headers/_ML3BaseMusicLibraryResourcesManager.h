// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ML3BASEMUSICLIBRARYRESOURCESMANAGER_H
#define _ML3BASEMUSICLIBRARYRESOURCESMANAGER_H

@class NSString;
@protocol ML3MusicLibraryResourcesProviding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _ML3BaseMusicLibraryResourcesManager : NSObject <ML3MusicLibraryResourcesProviding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *libraryContainerIdentifier; // ivar: _libraryContainerIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)_mediaResourceRequiresLibraryContainerAccess:(int)arg0 ;
-(id)_controlDirectoryPathWithBasePath:(id)arg0 ;
-(id)_libraryContainerPathForDSID:(id)arg0 ;
-(id)_pathForResourceFileOrFolder:(int)arg0 basePath:(id)arg1 relativeToBase:(BOOL)arg2 isFolder:(*BOOL)arg3 ;
-(id)init;
-(id)initWithAccountInfo:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLibraryContainerIdentifier:(id)arg0 ;
-(id)libraryContainerPath;
-(id)libraryContainerPathByAppendingPathComponent:(id)arg0 ;
-(id)libraryContainerRelativePath:(id)arg0 ;
-(id)pathForBaseLocationPath:(NSInteger)arg0 ;
-(id)pathForResourceFileOrFolder:(int)arg0 ;
-(id)pathForResourceFileOrFolder:(int)arg0 basePath:(id)arg1 relativeToBase:(BOOL)arg2 createParentFolderIfNecessary:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif