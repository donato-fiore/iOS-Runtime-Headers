// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIMODERNSWITCHVISUALELEMENTCACHEKEY_H
#define _UIMODERNSWITCHVISUALELEMENTCACHEKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIModernSwitchVisualElementCacheKey : NSObject <NSCopying>

 {
    NSUInteger _mask;
    *CGColor _color;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCacheKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMask:(NSUInteger)arg0 color:(struct CGColor *)arg1 ;
-(void)dealloc;


@end


#endif