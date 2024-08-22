// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARAREALIGHT_H
#define ARAREALIGHT_H

@protocol ARDaemonSecureCoding;

#import <Foundation/Foundation.h>


@interface ARAreaLight : NSObject <ARDaemonSecureCoding>

 {
    ? _direction;
    ? _color;
}


@property (readonly, nonatomic) float angularSize; // ivar: _angularSize
@property ? color;
@property ? direction;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithDirection:(float)arg0 angularSizecolor;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif