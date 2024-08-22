// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SKUIVIEWELEMENTTEXTLAYOUTCACHEBESTGUESSCACHEKEY_H
#define _SKUIVIEWELEMENTTEXTLAYOUTCACHEBESTGUESSCACHEKEY_H

@class UIFont, NSString;

#import <Foundation/Foundation.h>


@interface _SKUIViewElementTextLayoutCacheBestGuessCacheKey : NSObject

@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger width; // ivar: _width


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif