// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKFALLBACKTEXTPROVIDER_H
#define CLKFALLBACKTEXTPROVIDER_H

@class NSArray;


#import "CLKTextProvider.h"

@interface CLKFallbackTextProvider : CLKTextProvider

@property (readonly, nonatomic) NSArray *textProviders; // ivar: _textProviders


+(BOOL)supportsSecureCoding;
+(id)providerWithProviders:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTextProviders:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif