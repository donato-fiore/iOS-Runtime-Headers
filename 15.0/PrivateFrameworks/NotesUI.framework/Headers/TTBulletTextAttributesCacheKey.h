// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TTBULLETTEXTATTRIBUTESCACHEKEY_H
#define TTBULLETTEXTATTRIBUTESCACHEKEY_H


#import <Foundation/Foundation.h>


@interface TTBulletTextAttributesCacheKey : NSObject

@property (nonatomic) NSUInteger hashValue; // ivar: _hashValue


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTextFont:(id)arg0 paragraphStyle:(id)arg1 zoomFactor:(CGFloat)arg2 ;


@end


#endif