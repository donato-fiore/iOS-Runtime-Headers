// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKTEXTPROVIDERCACHE_H
#define CLKTEXTPROVIDERCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CLKTextProviderCache : NSObject {
    NSMutableDictionary *_cachesByStyle;
}




-(id)_cacheForStyle:(id)arg0 ;
-(id)attributedStringAndSize:(struct CGSize *)arg0 forMaxWidth:(CGFloat)arg1 withStyle:(id)arg2 generator:(id)arg3 ;
-(id)attributedStringForIndex:(NSUInteger)arg0 withStyle:(id)arg1 generator:(id)arg2 ;


@end


#endif