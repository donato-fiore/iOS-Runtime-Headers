// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFICONGRADIENTBACKGROUND_H
#define WFICONGRADIENTBACKGROUND_H

@class WFGradient;


#import "WFIconBackground.h"

@interface WFIconGradientBackground : WFIconBackground

@property (readonly, nonatomic) WFGradient *gradient; // ivar: _gradient


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGradient:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif