// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSGLYPHNAMEGLYPHINFO_H
#define NSGLYPHNAMEGLYPHINFO_H

@class NSString;
@protocol NSSecureCoding;


#import "NSIdentityGlyphInfo.h"

@interface NSGlyphNameGlyphInfo : NSIdentityGlyphInfo <NSSecureCoding>

 {
    NSString *_name;
}




+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)description;
-(id)glyphName;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGlyphName:(id)arg0 glyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif