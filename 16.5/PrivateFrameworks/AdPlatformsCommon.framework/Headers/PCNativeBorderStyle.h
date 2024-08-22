// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCNATIVEBORDERSTYLE_H
#define PCNATIVEBORDERSTYLE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PCNativeColor.h"

@interface PCNativeBorderStyle : NSObject <NSSecureCoding>



@property (retain, nonatomic) PCNativeColor *color; // ivar: _color
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat width; // ivar: _width


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif