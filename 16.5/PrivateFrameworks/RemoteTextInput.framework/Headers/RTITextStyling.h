// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTITEXTSTYLING_H
#define RTITEXTSTYLING_H

@class NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTITextStyling : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, copy, nonatomic) NSString *fontName; // ivar: _fontName
@property (readonly, nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (readonly, nonatomic) CGFloat fontWeight; // ivar: _fontWeight


+(BOOL)supportsSecureCoding;
+(id)textStylingWithFontName:(id)arg0 fontSize:(CGFloat)arg1 fontWeight:(CGFloat)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)addAttributes:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif