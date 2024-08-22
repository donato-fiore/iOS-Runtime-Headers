// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKTEXTPROVIDERSTYLE_H
#define CLKTEXTPROVIDERSTYLE_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CLKFont.h"

@interface CLKTextProviderStyle : NSObject <NSCopying>



@property (retain, nonatomic) CLKFont *font; // ivar: _font
@property (nonatomic) CGFloat minimumScaleFactor; // ivar: _minimumScaleFactor
@property (retain, nonatomic) CLKFont *monospacedDigitsFont; // ivar: _monospacedDigitsFont
@property (retain, nonatomic) NSDictionary *otherAttributes; // ivar: _otherAttributes
@property (nonatomic) BOOL shouldEmbedTintColors; // ivar: _shouldEmbedTintColors
@property (nonatomic) BOOL shouldStyleForTritium; // ivar: _shouldStyleForTritium
@property (retain, nonatomic) CLKFont *smallCapsBaseFont; // ivar: _smallCapsBaseFont
@property (nonatomic) BOOL uppercase; // ivar: _uppercase


+(id)otherAttributesWithParagraphStyle:(id)arg0 ;
+(id)otherAttributesWithParagraphStyle:(id)arg0 kerning:(CGFloat)arg1 ;
+(id)styleWithFont:(id)arg0 smallCapsBaseFont:(id)arg1 uppercase:(BOOL)arg2 otherAttributes:(id)arg3 ;
+(id)styleWithFont:(id)arg0 smallCapsBaseFont:(id)arg1 uppercase:(BOOL)arg2 otherAttributes:(id)arg3 minimumScaleFactor:(CGFloat)arg4 ;
+(id)styleWithFont:(id)arg0 smallCapsBaseFont:(id)arg1 uppercase:(BOOL)arg2 otherAttributes:(id)arg3 minimumScaleFactor:(CGFloat)arg4 shouldEmbedTintColor:(BOOL)arg5 ;
+(id)styleWithFont:(id)arg0 smallCapsBaseFont:(id)arg1 uppercase:(BOOL)arg2 otherAttributes:(id)arg3 minimumScaleFactor:(CGFloat)arg4 shouldEmbedTintColor:(BOOL)arg5 shouldStyleForTritium:(BOOL)arg6 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif