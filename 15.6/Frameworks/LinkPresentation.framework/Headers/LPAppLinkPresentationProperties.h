// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPAPPLINKPRESENTATIONPROPERTIES_H
#define LPAPPLINKPRESENTATIONPROPERTIES_H

@class UIColor, NSString;
@protocol LPLinkPresentationPropertyProvider;

#import <Foundation/Foundation.h>

#import "LPCaptionBarPresentationProperties.h"
#import "LPImage.h"
#import "LPVideo.h"

@interface LPAppLinkPresentationProperties : NSObject <LPLinkPresentationPropertyProvider>



@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (copy, nonatomic) NSString *bottomCaption; // ivar: _bottomCaption
@property (retain, nonatomic) LPCaptionBarPresentationProperties *captionBar; // ivar: _captionBar
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPImage *icon; // ivar: _icon
@property (retain, nonatomic) LPImage *image; // ivar: _image
@property (copy, nonatomic) NSString *mediaBottomCaption; // ivar: _mediaBottomCaption
@property (retain, nonatomic) LPCaptionBarPresentationProperties *mediaBottomCaptionBar; // ivar: _mediaBottomCaptionBar
@property (copy, nonatomic) NSString *mediaTopCaption; // ivar: _mediaTopCaption
@property (retain, nonatomic) LPCaptionBarPresentationProperties *mediaTopCaptionBar; // ivar: _mediaTopCaptionBar
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *topCaption; // ivar: _topCaption
@property (copy, nonatomic) NSString *trailingBottomCaption; // ivar: _trailingBottomCaption
@property (copy, nonatomic) NSString *trailingTopCaption; // ivar: _trailingTopCaption
@property (retain, nonatomic) LPVideo *video; // ivar: _video


-(NSInteger)style;


@end


#endif