// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIIMAGEASSETRENDITIONCACHEKEY_H
#define _UIIMAGEASSETRENDITIONCACHEKEY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface _UIImageAssetRenditionCacheKey : NSObject {
    UIColor *resolvedTintColor;
    NSString *appearanceName;
    CGSize _size;
    unsigned int _drawMode;
    ? _flags;
}




+(id)keyWithSize:(struct CGSize )arg0 unresolvedTintColor:(id)arg1 traitCollection:(id)arg2 bold:(BOOL)arg3 letterpress:(BOOL)arg4 drawMode:(unsigned int)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif