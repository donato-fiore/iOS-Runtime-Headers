// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARBODY2D_H
#define ARBODY2D_H


#import <Foundation/Foundation.h>

#import "ARSkeleton2D.h"

@interface ARBody2D : NSObject

@property (readonly, nonatomic) ARSkeleton2D *skeleton; // ivar: _skeleton


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSkeleton2D:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif