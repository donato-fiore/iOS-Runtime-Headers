// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCOLOR_H
#define PKCOLOR_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKColor : NSObject <NSSecureCoding, NSCopying>

 {
    CGFloat _red;
    CGFloat _green;
    CGFloat _blue;
    CGFloat _alpha;
    ? _colorRef;
}


@property (readonly, nonatomic) *CGColor CGColor;
@property (readonly, nonatomic) NSUInteger hash;
@property (readonly, weak, nonatomic) NSString *string;


+(BOOL)supportsSecureCoding;
+(id)colorFromString:(id)arg0 ;
+(id)colorWithH:(CGFloat)arg0 S:(CGFloat)arg1 B:(CGFloat)arg2 A:(CGFloat)arg3 ;
+(id)colorWithR:(CGFloat)arg0 G:(CGFloat)arg1 B:(CGFloat)arg2 A:(CGFloat)arg3 ;
-(CGFloat)luminance;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif