// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CLVERTEX_H
#define _CLVERTEX_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CLVertex : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)getDistanceFrom:(struct CLLocationCoordinate2D )arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithClientCoordinate:(struct ? )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif