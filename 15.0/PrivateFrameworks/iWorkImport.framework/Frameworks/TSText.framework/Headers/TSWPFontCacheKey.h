// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPFONTCACHEKEY_H
#define TSWPFONTCACHEKEY_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSWPFontCacheKey : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL bold; // ivar: _bold
@property (readonly, copy, nonatomic) NSArray *fontFeatures; // ivar: _fontFeatures
@property (readonly, nonatomic) NSString *fontName; // ivar: _fontName
@property (readonly, nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (readonly, nonatomic) BOOL hasExtraFields; // ivar: _hasExtraFields
@property (readonly, nonatomic) BOOL italic; // ivar: _italic


+(id)cacheKeyWithFontName:(id)arg0 fontSize:(CGFloat)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3 fontFeatures:(id)arg4 ;
+(id)cacheKeyWithFontName:(id)arg0 size:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFontName:(id)arg0 fontSize:(CGFloat)arg1 hasExtraFields:(BOOL)arg2 bold:(BOOL)arg3 italic:(BOOL)arg4 fontFeatures:(id)arg5 ;


@end


#endif