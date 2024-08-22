// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKBASEPHOTORESOURCESMANIFEST_H
#define NTKBASEPHOTORESOURCESMANIFEST_H

@class NSArray, NSURL;

#import <Foundation/Foundation.h>


@interface NTKBasePhotoResourcesManifest : NSObject

@property (readonly, nonatomic) NSArray *imageList; // ivar: _imageList
@property (readonly, nonatomic) NSURL *resourceDirectoryURL; // ivar: _resourceDirectoryURL
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


+(id)manifestForResourceDirectory:(id)arg0 ;
-(BOOL)_loadRawManifestAtURL:(id)arg0 ;
-(BOOL)_validateImageListItem:(id)arg0 withError:(*id)arg1 ;
-(BOOL)didLoadRawManifest:(id)arg0 ;
-(BOOL)resourceWithName:(id)arg0 isValidMediaAssetOfType:(id)arg1 withMinFileSize:(NSUInteger)arg2 maxFileSize:(NSUInteger)arg3 ;
-(BOOL)resourceWithNameIsValidImage:(id)arg0 ;
-(BOOL)validateImageListItem:(id)arg0 withError:(*id)arg1 ;
-(BOOL)validateManifestWithError:(*id)arg0 ;
-(NSUInteger)maxCompatibleVersion;
-(NSUInteger)maxNumberOfPhotos;
-(NSUInteger)minCompatibleVersion;
-(id)_initWithResourceDirectoryURL:(id)arg0 ;


@end


#endif