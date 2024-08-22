// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICFONTCACHEKEY_H
#define ICFONTCACHEKEY_H

@class UIFontDescriptor, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICFontCacheKey : NSObject <NSCopying>



@property (readonly, nonatomic) UIFontDescriptor *fontDescriptor; // ivar: _fontDescriptor
@property (readonly, nonatomic) NSString *fontName; // ivar: _fontName
@property (readonly, nonatomic) CGFloat pointSize; // ivar: _pointSize
@property (readonly, nonatomic) int traits; // ivar: _traits


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFont:(id)arg0 ;


@end


#endif