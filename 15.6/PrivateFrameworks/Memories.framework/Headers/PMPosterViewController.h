// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMPOSTERVIEWCONTROLLER_H
#define PMPOSTERVIEWCONTROLLER_H

@class UIViewController, PHAsset, NSDictionary, UIImage, UIImageView, NSString;


#import "VEKProduction.h"
#import "PMTitleSubtitleView.h"

@interface PMPosterViewController : UIViewController

@property (nonatomic) CGFloat aspectHorizontal; // ivar: _aspectHorizontal
@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (retain, nonatomic) NSDictionary *featuredPersonsInMemoryAsFaceRanges; // ivar: _featuredPersonsInMemoryAsFaceRanges
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL isRotating; // ivar: _isRotating
@property (nonatomic) CGRect landscapeFraming; // ivar: _landscapeFraming
@property (nonatomic) NSUInteger memoryCategory; // ivar: _memoryCategory
@property (retain, nonatomic) NSDictionary *memoryFeaturesPersonInAsset; // ivar: _memoryFeaturesPersonInAsset
@property (nonatomic) NSUInteger memorySubcategory; // ivar: _memorySubcategory
@property (nonatomic) BOOL memoryTypeDisablesCropping; // ivar: _memoryTypeDisablesCropping
@property (nonatomic) CGRect portraitFraming; // ivar: _portraitFraming
@property (nonatomic) BOOL preventRotation; // ivar: _preventRotation
@property (weak, nonatomic) VEKProduction *production; // ivar: _production
@property (retain, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (retain, nonatomic) NSString *titleFontName; // ivar: _titleFontName
@property (nonatomic) CGFloat titleScale; // ivar: _titleScale
@property (nonatomic) CGFloat titleSubtitleAlpha;
@property (retain, nonatomic) PMTitleSubtitleView *titleSubtitleView; // ivar: _titleSubtitleView
@property (retain, nonatomic) NSString *titleText; // ivar: _titleText


+(CGFloat)biggestScreenPixelDimension;
-(id)init;
-(id)processedImageFromImage:(id)arg0 ;
-(id)renderToImage;
-(struct CGRect )frameForImage;
-(struct CGSize )sizeForImage;
-(void)assignImageFraming;
-(void)fetchImageAsynchronouslyWithCompletion:(id)arg0 ;
-(void)fetchImageSomewhatAsynchronously;
-(void)prewarmFraming;
-(void)updateSubtitleTitleLabelForSize:(struct CGSize )arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif