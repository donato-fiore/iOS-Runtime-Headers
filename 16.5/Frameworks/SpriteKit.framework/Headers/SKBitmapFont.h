// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKBITMAPFONT_H
#define SKBITMAPFONT_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKBitmapFont : NSObject <NSSecureCoding>

 {
    NSString *_fontName;
    NSString *_filePath;
    CGFloat _lineHeight;
    CGFloat _baseLine;
    NSArray *_characterSprites;
    map<unsigned short, SKSpriteNode *, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, SKSpriteNode *>>> _characterSpriteByChar;
    map<unsigned short, double, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, double>>> _characterAdvanceByChar;
    map<unsigned int, double, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, double>>> _characterKerningByCharPair;
    BOOL _internal;
    NSString *_fileName;
}




+(BOOL)supportsSecureCoding;
+(id)_fontForFileNamed:(id)arg0 ;
+(id)fontForFileNamed:(id)arg0 ;
+(id)fontWithTexture:(id)arg0 fontDataString:(id)arg1 ;
-(BOOL)loadFontWithTexture:(id)arg0 fontDataString:(id)arg1 ;
-(CGFloat)advanceForCharacterNamed:(unsigned short)arg0 ;
-(CGFloat)kerningForCharacterNamed:(unsigned short)arg0 followedBy:(unsigned short)arg1 ;
-(CGFloat)lineHeight;
-(id)fontName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)spriteForCharacterNamed:(unsigned short)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif