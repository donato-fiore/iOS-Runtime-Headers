// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICGCOLORCACHEKEY_H
#define _UICGCOLORCACHEKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UICGColorCacheKey : NSObject <NSCopying>

 {
    *__CFArray _colors;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCacheKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithColors:(struct CGColor *)arg0 ;
-(void)dealloc;


@end


#endif