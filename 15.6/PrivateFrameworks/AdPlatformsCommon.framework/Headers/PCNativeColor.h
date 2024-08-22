// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCNATIVECOLOR_H
#define PCNATIVECOLOR_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PCNativeColor : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *darkModeColors; // ivar: _darkModeColors
@property (nonatomic) NSInteger gradientOrientation; // ivar: _gradientOrientation
@property (retain, nonatomic) NSArray *lightModeColors; // ivar: _lightModeColors


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif