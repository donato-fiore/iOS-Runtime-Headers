// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSSVGIMAGERENDERINGRESPONSE_H
#define WBSSVGIMAGERENDERINGRESPONSE_H

@class UIImage;


#import "WBSSiteMetadataResponse.h"

@interface WBSSVGImageRenderingResponse : WBSSiteMetadataResponse

@property (readonly, nonatomic) UIImage *image; // ivar: _image


-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 image:(id)arg1 ;


@end


#endif