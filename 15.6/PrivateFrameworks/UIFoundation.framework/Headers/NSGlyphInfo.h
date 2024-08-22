// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSGLYPHINFO_H
#define NSGLYPHINFO_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSGlyphInfo : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_baseString;
}




+(BOOL)supportsSecureCoding;
+(id)glyphInfoWithCGGlyph:(unsigned short)arg0 forFont:(id)arg1 baseString:(id)arg2 ;
+(id)glyphInfoWithCharacterIdentifier:(NSUInteger)arg0 collection:(NSUInteger)arg1 baseString:(id)arg2 ;
+(id)glyphInfoWithGlyph:(unsigned int)arg0 forFont:(id)arg1 baseString:(id)arg2 ;
+(id)glyphInfoWithGlyphName:(id)arg0 forFont:(id)arg1 baseString:(id)arg2 ;
+(void)initialize;
-(Class)classForKeyedArchiver;
-(NSUInteger)characterCollection;
-(NSUInteger)characterIdentifier;
-(id)_baseString;
-(id)baseString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)glyphName;
-(id)initWithBaseString:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)_glyphForFont:(id)arg0 baseString:(id)arg1 ;
-(unsigned short)glyphID;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif