// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPFONTCACHEKEY_H
#define TSWPFONTCACHEKEY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSWPFontCacheKey : NSObject {
    NSUInteger _hash;
}


@property (readonly, nonatomic) NSString *fontName; // ivar: _fontName
@property (readonly, nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (readonly, nonatomic) CGFloat fontWeight; // ivar: _fontWeight


+(id)cacheKeyWithFontName:(id)arg0 size:(CGFloat)arg1 weight:(CGFloat)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithFontName:(id)arg0 size:(CGFloat)arg1 weight:(CGFloat)arg2 ;
-(void)dealloc;


@end


#endif