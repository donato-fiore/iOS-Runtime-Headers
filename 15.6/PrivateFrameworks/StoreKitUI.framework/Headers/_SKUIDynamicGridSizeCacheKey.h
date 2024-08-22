// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SKUIDYNAMICGRIDSIZECACHEKEY_H
#define _SKUIDYNAMICGRIDSIZECACHEKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SKUIViewElement.h"

@interface _SKUIDynamicGridSizeCacheKey : NSObject <NSCopying>



@property (nonatomic) NSInteger position; // ivar: _position
@property (retain, nonatomic) SKUIViewElement *viewElement; // ivar: _viewElement


-(BOOL)__isSKUIDynamicGridSizeCacheKey;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif