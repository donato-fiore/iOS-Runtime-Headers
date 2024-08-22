// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXTEXTSOURCEFONTFACE_H
#define SXTEXTSOURCEFONTFACE_H

@class NSString;
@protocol SXFontFace, SXFontAttributes;

#import <Foundation/Foundation.h>


@interface SXTextSourceFontFace : NSObject <SXFontFace>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXFontAttributes> *fontAttributes; // ivar: _fontAttributes
@property (readonly, nonatomic) NSString *fontName; // ivar: _fontName
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)basicFontAttributesForFontName:(id)arg0 ;
+(id)fontFaceWithFontName:(id)arg0 ;
+(id)fontFaceWithFontName:(id)arg0 andAttributes:(id)arg1 ;


@end


#endif