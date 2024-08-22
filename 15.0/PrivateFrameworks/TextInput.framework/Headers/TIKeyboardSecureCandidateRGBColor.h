// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYBOARDSECURECANDIDATERGBCOLOR_H
#define TIKEYBOARDSECURECANDIDATERGBCOLOR_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TIKeyboardSecureCandidateRGBColor : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat colorA; // ivar: _colorA
@property (nonatomic) CGFloat colorB; // ivar: _colorB
@property (nonatomic) CGFloat colorG; // ivar: _colorG
@property (nonatomic) CGFloat colorR; // ivar: _colorR


+(BOOL)supportsSecureCoding;
+(id)blackColor;
+(id)lightGrayColor;
+(id)whiteColor;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithR:(CGFloat)arg0 G:(CGFloat)arg1 B:(CGFloat)arg2 A:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif