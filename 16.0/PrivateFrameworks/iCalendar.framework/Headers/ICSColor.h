// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSCOLOR_H
#define ICSCOLOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICSColor : NSObject <NSSecureCoding>

 {
    unsigned char _red;
    unsigned char _green;
    unsigned char _blue;
}




+(BOOL)colorDetailsAreEffectivelyDifferentFirstColor:(id)arg0 secondColor:(id)arg1 firstSymbolicName:(id)arg2 secondSymbolicName:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)symbolicColorForLegacyRGB:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRed:(unsigned char)arg0 green:(unsigned char)arg1 blue:(unsigned char)arg2 ;
-(unsigned char)blue;
-(unsigned char)green;
-(unsigned char)red;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif