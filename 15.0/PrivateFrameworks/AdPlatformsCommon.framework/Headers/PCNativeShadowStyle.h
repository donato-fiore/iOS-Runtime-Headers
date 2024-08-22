// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PCNATIVESHADOWSTYLE_H
#define PCNATIVESHADOWSTYLE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PCNativeColor.h"

@interface PCNativeShadowStyle : NSObject <NSSecureCoding>



@property (retain, nonatomic) PCNativeColor *color; // ivar: _color
@property (retain, nonatomic) NSArray *offsets; // ivar: _offsets
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (nonatomic) CGFloat radius; // ivar: _radius


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif