// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWCMPHOTOCOMPRESSIONSESSION_H
#define BWCMPHOTOCOMPRESSIONSESSION_H

@class NSString;
@protocol BWPhotoCompressionSession;

#import <Foundation/Foundation.h>


@interface BWCMPhotoCompressionSession : NSObject <BWPhotoCompressionSession>

 {
    *CMPhotoCompressionSession _photoCompressionSession;
    NSInteger _currentSettingsID;
    NSUInteger _containerSize;
}


@property (readonly, nonatomic) NSUInteger auxiliaryImagesSize;
@property (readonly, nonatomic) NSUInteger containerSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger thumbnailImageSize;


-(?)closeContainerAndCopySurfaceOut;
-(BOOL)isContainerOpen;
-(id)init;
-(int)addAuxImage:(struct __CVBuffer *)arg0 type:(int)arg1 auxImageMetadata:(struct CGImageMetadata *)arg2 options:(id)arg3 ;
-(int)addCompressedThumbnailImage:(struct __IOSurface *)arg0 thumbnailImageSize:(NSUInteger)arg1 options:(id)arg2 ;
-(int)addMainImage:(struct __CVBuffer *)arg0 metadata:(id)arg1 options:(id)arg2 ;
-(int)addMetadata:(id)arg0 ;
-(int)addThumbnailImage:(struct __CVBuffer *)arg0 options:(id)arg1 ;
-(int)closeContainer;
-(int)openContainerWithOptions:(id)arg0 settingsID:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif