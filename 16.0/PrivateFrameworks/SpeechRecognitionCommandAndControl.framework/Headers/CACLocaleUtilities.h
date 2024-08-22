// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACLOCALEUTILITIES_H
#define CACLOCALEUTILITIES_H


#import <Foundation/Foundation.h>


@interface CACLocaleUtilities : NSObject



+(BOOL)isLocaleIdentifier:(id)arg0 containedInLocaleIdentifiers:(id)arg1 ;
+(BOOL)isSameLangaugeFromLocaleIdentifier:(id)arg0 secondLocaleIdentifier:(id)arg1 ;
+(BOOL)isSameLocaleIdentifier:(id)arg0 secondLocaleIdentifier:(id)arg1 ;
+(id)_localizedUIStringForKey:(id)arg0 forResource:(id)arg1 ;
+(id)_localizedUIStringForKey:(id)arg0 forResource:(id)arg1 locale:(id)arg2 ;
+(id)componentsFromLocaleIdentifier:(id)arg0 ;
+(id)displayStringForByteSize:(NSUInteger)arg0 ;
+(id)displayStringForTimeRemaining:(CGFloat)arg0 ;
+(id)localizedDisplayStringForLocaleIdentifier:(id)arg0 ;
+(id)localizedUIStringForBuiltinCommandsMiniDescriptionsKey:(id)arg0 ;
+(id)localizedUIStringForKey:(id)arg0 ;
+(id)normalizedLocaleIdentifier:(id)arg0 ;
+(id)siriLocaleUIStringForKey:(id)arg0 ;
+(id)systemLocaleIdentifier;
+(id)systemUILocale;


@end


#endif