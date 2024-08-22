// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IFCOLOR_H
#define IFCOLOR_H

@class CIColor, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IFColor : NSObject <NSSecureCoding>



@property (readonly) *CGColor cgColor;
@property (readonly) CIColor *ciColor; // ivar: _ciColor
@property (readonly) NSUUID *digest; // ivar: _digest


+(BOOL)supportsSecureCoding;
+(id)black;
+(id)white;
+(struct CGColorSpace *)deviceGreyColorSpace;
+(struct CGColorSpace *)deviceRGBColorSpace;
-(id)initWithCGColor:(struct CGColor *)arg0 ;
-(id)initWithCIColor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)initWithWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif