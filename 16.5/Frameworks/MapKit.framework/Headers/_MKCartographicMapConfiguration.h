// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKCARTOGRAPHICMAPCONFIGURATION_H
#define _MKCARTOGRAPHICMAPCONFIGURATION_H



#import "MKMapConfiguration.h"

@interface _MKCartographicMapConfiguration : MKMapConfiguration

@property (readonly, nonatomic) ? cartographicConfiguration; // ivar: _cartographicConfiguration


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCartographicMapConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCartographicConfiguration:(struct ? )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_addObserver:(id)arg0 options:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)_removeObserver:(id)arg0 context:(*void)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif