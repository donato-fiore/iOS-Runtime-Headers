// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORKFLOWICON_H
#define WFWORKFLOWICON_H

@class WFColor, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WFIcon.h"

@interface WFWorkflowIcon : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) WFColor *backgroundColor;
@property (readonly, nonatomic) NSInteger backgroundColorValue; // ivar: _backgroundColorValue
@property (readonly, copy, nonatomic) NSData *customImageData; // ivar: _customImageData
@property (readonly, nonatomic) unsigned short glyphCharacter; // ivar: _glyphCharacter
@property (readonly, nonatomic) WFIcon *icon;


+(BOOL)supportsSecureCoding;
+(NSUInteger)randomPaletteColor;
+(unsigned short)defaultGlyphCharacter;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBackgroundColorValue:(NSInteger)arg0 glyphCharacter:(unsigned short)arg1 customImageData:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaletteColor:(NSUInteger)arg0 glyphCharacter:(unsigned short)arg1 customImageData:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif