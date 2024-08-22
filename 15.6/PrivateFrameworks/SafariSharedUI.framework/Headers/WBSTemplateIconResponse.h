// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSTEMPLATEICONRESPONSE_H
#define WBSTEMPLATEICONRESPONSE_H

@class UIImage, UIColor;


#import "WBSSiteMetadataResponse.h"

@interface WBSTemplateIconResponse : WBSSiteMetadataResponse

@property (readonly, nonatomic) UIImage *highlightedImage; // ivar: _highlightedImage
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic, getter=isMonogram) BOOL monogram; // ivar: _monogram
@property (readonly, nonatomic) UIColor *themeColor; // ivar: _themeColor


+(id)responseWithURL:(id)arg0 image:(id)arg1 highlightedImage:(id)arg2 themeColor:(id)arg3 isMonogram:(BOOL)arg4 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 image:(id)arg1 highlightedImage:(id)arg2 themeColor:(id)arg3 isMonogram:(BOOL)arg4 ;


@end


#endif