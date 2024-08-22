// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CUITHEMEFACETCACHEKEY_H
#define _CUITHEMEFACETCACHEKEY_H


#import <Foundation/Foundation.h>


@interface _CUIThemeFacetCacheKey : NSObject {
    _renditionkeytoken keyList;
    NSInteger themeIndex;
    NSUInteger hashPrecalc;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)hash64;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithKeyList:(struct _renditionkeytoken *)arg0 themeIndex:(NSInteger)arg1 ;


@end


#endif