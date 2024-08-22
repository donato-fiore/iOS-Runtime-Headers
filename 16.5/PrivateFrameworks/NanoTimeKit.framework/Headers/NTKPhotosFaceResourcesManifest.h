// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKPHOTOSFACERESOURCESMANIFEST_H
#define NTKPHOTOSFACERESOURCESMANIFEST_H

@class NSString;


#import "NTKBasePhotoResourcesManifest.h"

@interface NTKPhotosFaceResourcesManifest : NTKBasePhotoResourcesManifest

@property (readonly, nonatomic) NSString *assetCollectionIdentifier; // ivar: _assetCollectionIdentifier


-(BOOL)_imageListItemContainsValidImage:(id)arg0 ;
-(BOOL)_imageListItemContainsValidIrisVideo:(id)arg0 ;
-(BOOL)_imageListItemHasValidAnalysisValues:(id)arg0 ;
-(BOOL)_imageListItemHasValidCropValues:(id)arg0 ;
-(BOOL)didLoadRawManifest:(id)arg0 ;
-(BOOL)validateImageListItem:(id)arg0 withError:(*id)arg1 ;
-(NSUInteger)maxCompatibleVersion;
-(NSUInteger)maxNumberOfPhotos;
-(NSUInteger)minCompatibleVersion;


@end


#endif