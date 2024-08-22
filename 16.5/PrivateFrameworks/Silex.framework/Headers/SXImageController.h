// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXIMAGECONTROLLER_H
#define SXIMAGECONTROLLER_H

@class NSDictionary, NSMutableOrderedSet, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SXColumnLayout.h"
#import "SXDocumentController.h"

@interface SXImageController : NSObject

@property (readonly, nonatomic) SXColumnLayout *columnLayout; // ivar: _columnLayout
@property (readonly, weak, nonatomic) SXDocumentController *documentController; // ivar: _documentController
@property (readonly, nonatomic) NSDictionary *image2ResourcesGroupedByImageIdentifier; // ivar: _image2ResourcesGroupedByImageIdentifier
@property (readonly, nonatomic) NSDictionary *imageResourcesGroupedByImageIdentifier; // ivar: _imageResourcesGroupedByImageIdentifier
@property (readonly, nonatomic) NSMutableOrderedSet *optimalImageResources; // ivar: _optimalImageResources
@property (readonly, nonatomic) NSMutableDictionary *optimalImageResourcesByID; // ivar: _optimalImageResourcesByID
@property (readonly, nonatomic) CGSize viewportSize; // ivar: _viewportSize


-(id)Image2ResourcesForImageIdentifier:(id)arg0 ;
-(id)allImageResources;
-(id)imageResourceForAudioComponent:(id)arg0 ;
-(id)imageResourceForDataTableComponent:(id)arg0 ;
-(id)imageResourceForGalleryItem:(id)arg0 ;
-(id)imageResourceForIdentifier:(id)arg0 ;
-(id)imageResourceForImageComponent:(id)arg0 ;
-(id)imageResourceForImageFill:(id)arg0 ;
-(id)imageResourceForImageIdentifier:(id)arg0 constrainedToSize:(struct CGSize )arg1 ;
-(id)imageResourceForRepeatableImageFill:(id)arg0 ;
-(id)imageResourceForScalableImageComponent:(id)arg0 ;
-(id)imageResourceForVideoComponent:(id)arg0 ;
-(id)imageResourceForVideoFill:(id)arg0 ;
-(id)imageResourcesForComponent:(id)arg0 ;
-(id)imageResourcesForComponentStyle:(id)arg0 ;
-(id)imageResourcesForGalleryComponent:(id)arg0 ;
-(id)imageResourcesForImageIdentifier:(id)arg0 ;
-(id)initWithDocumentController:(id)arg0 columnCalculator:(id)arg1 ;
-(id)largestImageResourceForImageIdentifier:(id)arg0 ;
-(id)taggedEquivalentOfImageResource:(id)arg0 ;
-(struct CGSize )sizeConstraintForComponent:(id)arg0 ;
-(void)determineOptimalImagesForComponentStyles:(id)arg0 ;
-(void)determineOptimalImagesForComponents:(id)arg0 ;
-(void)determineOptimalImagesForMetadata;
-(void)prepareImageResources;


@end


#endif