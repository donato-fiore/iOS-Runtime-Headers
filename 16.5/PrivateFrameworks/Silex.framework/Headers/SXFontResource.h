// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXFONTRESOURCE_H
#define SXFONTRESOURCE_H

@class NSURL, NSString, NSDictionary;
@protocol SXFontResource, SXFontAttributes;


#import "SXResource.h"

@interface SXFontResource : SXResource <SXFontResource>



@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXFontAttributes> *fontAttributes;
@property (readonly, nonatomic) NSDictionary *fontDescriptorAttributes;
@property (readonly, nonatomic) NSString *fontName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;


-(id)fontAttributesWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif