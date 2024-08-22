// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVMOBILEIMAGECONFIGURATION_H
#define AVMOBILEIMAGECONFIGURATION_H

@class UIFont, NSString;

#import <Foundation/Foundation.h>


@interface AVMobileImageConfiguration : NSObject

@property (readonly, nonatomic) UIFont *font; // ivar: _font
@property (readonly, nonatomic) BOOL prefersWesternLatinDigits; // ivar: _prefersWesternLatinDigits
@property (readonly, copy, nonatomic) NSString *string; // ivar: _string


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)imageName;
-(id)initWithImageName:(id)arg0 font:(id)arg1 prefersWesternLatinDigits:(BOOL)arg2 ;
-(id)initWithString:(id)arg0 font:(id)arg1 ;


@end


#endif