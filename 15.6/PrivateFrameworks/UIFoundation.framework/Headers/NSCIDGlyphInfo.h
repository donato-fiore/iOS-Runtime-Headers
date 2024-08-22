// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCIDGLYPHINFO_H
#define NSCIDGLYPHINFO_H

@protocol NSSecureCoding;


#import "NSGlyphInfo.h"

@interface NSCIDGlyphInfo : NSGlyphInfo <NSSecureCoding>

 {
    unsigned short _cid;
    NSUInteger _collection;
}




+(BOOL)supportsSecureCoding;
+(id)glyphInfoWithCharacterIdentifier:(NSUInteger)arg0 collection:(NSUInteger)arg1 baseString:(id)arg2 ;
+(void)initialize;
-(NSUInteger)characterCollection;
-(NSUInteger)characterIdentifier;
-(id)description;
-(id)initWithCharacterIdentifier:(NSUInteger)arg0 collection:(NSUInteger)arg1 baseString:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)_glyphForFont:(id)arg0 baseString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif