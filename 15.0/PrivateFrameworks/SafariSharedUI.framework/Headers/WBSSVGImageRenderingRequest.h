// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSSVGIMAGERENDERINGREQUEST_H
#define WBSSVGIMAGERENDERINGREQUEST_H

@class NSString, NSArray;


#import "WBSSiteMetadataRequest.h"

@interface WBSSVGImageRenderingRequest : WBSSiteMetadataRequest

@property (readonly, nonatomic) CGSize imageSize;
@property (readonly, nonatomic) NSString *svgContent;
@property (readonly, nonatomic) NSArray *urls;


-(id)_imageSizeValueWithSize:(struct CGSize )arg0 ;
-(id)initWithSVGContent:(id)arg0 imageSize:(struct CGSize )arg1 ;
-(id)initWithURL:(id)arg0 extraInfo:(id)arg1 ;
-(id)initWithURL:(id)arg0 imageSize:(struct CGSize )arg1 ;
-(id)initWithURLs:(id)arg0 imageSize:(struct CGSize )arg1 ;


@end


#endif