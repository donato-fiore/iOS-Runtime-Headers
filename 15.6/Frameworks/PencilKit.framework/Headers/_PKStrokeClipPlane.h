// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PKSTROKECLIPPLANE_H
#define _PKSTROKECLIPPLANE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _PKStrokeClipPlane : NSObject <NSCopying>



@property (readonly, nonatomic) CGPoint normal; // ivar: _normal
@property (readonly, nonatomic) CGPoint origin; // ivar: _origin


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToClipPlane:(id)arg0 ;
-(CGFloat)distanceToPoint:(struct CGPoint )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithOrigin:(struct CGPoint )arg0 normal:(struct CGPoint )arg1 ;


@end


#endif