// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXREGIONOFINTEREST_H
#define PXREGIONOFINTEREST_H

@class NSString;
@protocol NSCopying, PXAnonymousView;


#import "PXCoordinatedRect.h"
#import "PXImageRequester.h"
#import "PXViewSpec.h"
#import "PXTitleSubtitleLabelSpec.h"

@interface PXRegionOfInterest : PXCoordinatedRect <NSCopying>



@property (nonatomic) CGRect imageContentsRect; // ivar: _imageContentsRect
@property (retain, nonatomic) PXImageRequester *imageRequester; // ivar: _imageRequester
@property (retain, nonatomic) PXViewSpec *imageViewSpec; // ivar: _imageViewSpec
@property (nonatomic) BOOL isRepresentingPlaceholderContent; // ivar: _isRepresentingPlaceholderContent
@property (copy, nonatomic) id *placeholderViewFactory; // ivar: _placeholderViewFactory
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) PXTitleSubtitleLabelSpec *textViewSpec; // ivar: _textViewSpec
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSObject<PXAnonymousView> *trackingContainerView;
@property (copy, nonatomic) id *trackingContainerViewFactory; // ivar: _trackingContainerViewFactory


+(struct CGRect )convertedImageContentsRectOfRegionOfInterest:(id)arg0 toCoordinateSpace:(id)arg1 fittingSize:(struct CGSize )arg2 flipped:(BOOL)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 ;
-(struct CGRect )uncroppedImageFrameInCoordinateSpace:(id)arg0 ;


@end


#endif