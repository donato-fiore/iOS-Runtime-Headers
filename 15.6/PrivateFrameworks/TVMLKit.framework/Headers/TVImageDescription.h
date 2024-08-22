// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVIMAGEDESCRIPTION_H
#define TVIMAGEDESCRIPTION_H

@class NSString, UIImage;


#import "TVViewDescription.h"

@interface TVImageDescription : TVViewDescription

@property (copy, nonatomic) NSString *accessibilityText; // ivar: _accessibilityText
@property (nonatomic) BOOL configureForMetrics; // ivar: _configureForMetrics
@property (nonatomic) BOOL hasGradient; // ivar: _hasGradient
@property (retain, nonatomic) id *imageProxy; // ivar: _imageProxy
@property (nonatomic) BOOL isInBackgroundOrBanner; // ivar: _isInBackgroundOrBanner
@property (nonatomic) BOOL needsRoomBannerImageDecorator; // ivar: _needsRoomBannerImageDecorator
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (nonatomic) NSInteger semanticContentAttribute; // ivar: _semanticContentAttribute
@property (copy, nonatomic) NSString *siriData; // ivar: _siriData


-(id)initWithProxy:(id)arg0 andPlaceHolderImage:(id)arg1 ;


@end


#endif