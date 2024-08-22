// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXFONTINDEXCACHEKEY_H
#define SXFONTINDEXCACHEKEY_H

@protocol NSCopying, SXFontAttributes;

#import <Foundation/Foundation.h>


@interface SXFontIndexCacheKey : NSObject <NSCopying>



@property (readonly, nonatomic) NSObject<SXFontAttributes> *fontAttributes; // ivar: _fontAttributes
@property (readonly, nonatomic) NSInteger fontSize; // ivar: _fontSize


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFontAttributes:(id)arg0 fontSize:(NSInteger)arg1 ;


@end


#endif