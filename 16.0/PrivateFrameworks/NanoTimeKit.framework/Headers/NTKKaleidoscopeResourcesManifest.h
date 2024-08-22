// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKKALEIDOSCOPERESOURCESMANIFEST_H
#define NTKKALEIDOSCOPERESOURCESMANIFEST_H



#import "NTKBasePhotoResourcesManifest.h"

@interface NTKKaleidoscopeResourcesManifest : NTKBasePhotoResourcesManifest



-(BOOL)validateImageListItem:(id)arg0 withError:(*id)arg1 ;
-(NSUInteger)maxCompatibleVersion;
-(NSUInteger)maxNumberOfPhotos;
-(NSUInteger)minCompatibleVersion;


@end


#endif