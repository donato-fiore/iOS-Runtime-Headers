// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISPRINGPARAMETERS_H
#define _UISPRINGPARAMETERS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _UISpringParameters : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) CGFloat _dampingRatio; // ivar: __dampingRatio
@property (readonly, nonatomic) CGFloat _response; // ivar: __response


+(BOOL)supportsSecureCoding;
+(id)parametersWithDampingRatio:(CGFloat)arg0 response:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDampingRatio:(CGFloat)arg0 response:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif