// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPWEBLINKPRESENTATIONPROPERTIES_H
#define LPWEBLINKPRESENTATIONPROPERTIES_H

@class NSArray, UIColor, NSString, NSNumber, NSURL;
@protocol LPLinkPresentationPropertyProvider;

#import <Foundation/Foundation.h>

#import "LPARAsset.h"
#import "LPAudio.h"
#import "LPImage.h"
#import "LPImagePresentationProperties.h"
#import "LPCaptionBarPresentationProperties.h"
#import "LPInlineMediaPlaybackInformation.h"
#import "LPVideo.h"

@interface LPWebLinkPresentationProperties : NSObject <LPLinkPresentationPropertyProvider>



@property (retain, nonatomic) NSArray *alternateImages; // ivar: _alternateImages
@property (retain, nonatomic) LPARAsset *arAsset; // ivar: _arAsset
@property (retain, nonatomic) LPAudio *audio; // ivar: _audio
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) LPImage *backgroundImage; // ivar: _backgroundImage
@property (retain, nonatomic) LPImagePresentationProperties *backgroundImageProperties; // ivar: _backgroundImageProperties
@property (retain, nonatomic) LPCaptionBarPresentationProperties *captionBar; // ivar: _captionBar
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domainNameForIndicator; // ivar: _domainNameForIndicator
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPImage *image; // ivar: _image
@property (retain, nonatomic) LPImagePresentationProperties *imageProperties; // ivar: _imageProperties
@property (retain, nonatomic) LPInlineMediaPlaybackInformation *inlinePlaybackInformation; // ivar: _inlinePlaybackInformation
@property (retain, nonatomic) LPCaptionBarPresentationProperties *mediaBottomCaptionBar; // ivar: _mediaBottomCaptionBar
@property (retain, nonatomic) LPCaptionBarPresentationProperties *mediaTopCaptionBar; // ivar: _mediaTopCaptionBar
@property (retain, nonatomic) NSNumber *minimumHeight; // ivar: _minimumHeight
@property (copy, nonatomic) NSNumber *overrideAllowOpeningSensitiveURLs; // ivar: _overrideAllowOpeningSensitiveURLs
@property (copy, nonatomic) NSURL *overrideURL; // ivar: _overrideURL
@property (nonatomic, getter=isPreliminary) BOOL preliminary; // ivar: _preliminary
@property (copy, nonatomic) NSString *quotedText; // ivar: _quotedText
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) LPVideo *video; // ivar: _video




@end


#endif