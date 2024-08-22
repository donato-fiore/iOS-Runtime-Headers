// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ALASSET_H
#define ALASSET_H


#import <Foundation/Foundation.h>

#import "ALAssetPrivate.h"
#import "ALAsset.h"

@interface ALAsset : NSObject

@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (retain, nonatomic) ALAssetPrivate *internal; // ivar: _internal
@property (readonly, nonatomic) ALAsset *originalAsset;


+(struct CGSize )largePreviewImageSizeForSize:(struct CGSize )arg0 ;
-(BOOL)isDeletable;
-(BOOL)isValid;
-(id)_newContentEditingOutputWithType:(NSInteger)arg0 ;
-(id)_typeAsString;
-(id)_uuid;
-(id)defaultRepresentation;
-(id)description;
-(id)initWithManagedAsset:(id)arg0 library:(id)arg1 ;
-(id)representationForUTI:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(struct CGImage *)aspectRatioThumbnail;
-(struct CGImage *)thumbnail;
-(void)dealloc;
-(void)requestDefaultRepresentation;
-(void)setImageData:(id)arg0 metadata:(id)arg1 completionBlock:(id)arg2 ;
-(void)setVideoAtPath:(id)arg0 completionBlock:(id)arg1 ;
-(void)writeModifiedImageDataToSavedPhotosAlbum:(id)arg0 metadata:(id)arg1 completionBlock:(id)arg2 ;
-(void)writeModifiedVideoAtPathToSavedPhotosAlbum:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif