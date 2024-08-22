// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHSYMBOLPATHCACHEKEY_H
#define TSCHSYMBOLPATHCACHEKEY_H

@class TSDStroke;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCHSymbolPathCacheKey : NSObject <NSCopying>

 {
    int _symbolType;
    CGFloat _size;
    TSDStroke *_stroke;
    BOOL _forHitCheck;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSymbolType:(int)arg0 symbolSize:(CGFloat)arg1 stroke:(id)arg2 forHitCheck:(BOOL)arg3 ;


@end


#endif