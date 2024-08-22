// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NS128BITWRAPPER_H
#define _NS128BITWRAPPER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _NS128bitWrapper : NSObject <NSCopying>

 {
    _double_quad_uint bits;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif