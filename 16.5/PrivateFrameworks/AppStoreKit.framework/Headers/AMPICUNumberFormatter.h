// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMPICUNUMBERFORMATTER_H
#define AMPICUNUMBERFORMATTER_H

@class NSString, NSLocale;

#import <Foundation/Foundation.h>


@interface AMPICUNumberFormatter : NSObject

@property (copy, nonatomic) NSString *_currencyCodeBeingUsed; // ivar: __currencyCodeBeingUsed
@property (nonatomic) **void _icuNumberFormatter; // ivar: __icuNumberFormatter
@property (copy, nonatomic) NSString *_localeIdentifierBeingUsed; // ivar: __localeIdentifierBeingUsed
@property (nonatomic) NSUInteger extendedStyle; // ivar: _extendedStyle
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (nonatomic) BOOL usesGroupingSeparator;


-(id)init;
-(id)initWithExtendedStyle:(NSUInteger)arg0 locale:(id)arg1 ;
-(id)stringFromNumber:(id)arg0 ;
-(void)dealloc;


@end


#endif