// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXSYSTEMFONTFACE_H
#define SXSYSTEMFONTFACE_H

@class NSString, NSDictionary;
@protocol SXFontFace, SXFontAttributes;

#import <Foundation/Foundation.h>


@interface SXSystemFontFace : NSObject <SXFontFace>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXFontAttributes> *fontAttributes; // ivar: _fontAttributes
@property (readonly, nonatomic) NSDictionary *fontDescriptorAttributes;
@property (readonly, nonatomic) NSString *fontName; // ivar: _fontName
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)fontStyleForValue:(id)arg0 ;
-(NSInteger)fontWeightForValue:(id)arg0 ;
-(NSInteger)fontWidthForValue:(id)arg0 ;
-(id)fontAttributesForMetadata:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 ;


@end


#endif