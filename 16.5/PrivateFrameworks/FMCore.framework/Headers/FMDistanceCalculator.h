// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMDISTANCECALCULATOR_H
#define FMDISTANCECALCULATOR_H

@class NSNumberFormatter, NSLocale, NSUserDefaults;
@protocol OS_dispatch_queue, FMDistanceCalculatorLocalizationDelegate;

#import <Foundation/Foundation.h>


@interface FMDistanceCalculator : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calculationQueue; // ivar: _calculationQueue
@property (retain, nonatomic) NSNumberFormatter *formatter; // ivar: _formatter
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (weak, nonatomic) NSObject<FMDistanceCalculatorLocalizationDelegate> *localizationDelegate; // ivar: _localizationDelegate
@property (nonatomic) NSInteger measurementSystem;
@property (retain, nonatomic) NSLocale *measurementSystemLocale; // ivar: _measurementSystemLocale
@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


-(CGFloat)averageDistanceFromLocation:(id)arg0 toLocation:(id)arg1 ;
-(id)_localizedDistanceFromLocation:(id)arg0 toLocation:(id)arg1 ;
-(id)_localizedStringFromNumber:(id)arg0 numberStyle:(NSUInteger)arg1 fractionDigits:(NSUInteger)arg2 ;
-(id)_scaledAndConvertedMin:(CGFloat)arg0 andMax:(CGFloat)arg1 ;
-(id)futureLocalizedDistanceFromLocation:(id)arg0 toLocation:(id)arg1 ;
-(id)init;
-(id)initWithDefaultsSuiteName:(id)arg0 ;
-(id)initWithDefaultsSuiteName:(id)arg0 locale:(id)arg1 ;
-(id)initWithDefaultsSuiteName:(id)arg0 locale:(id)arg1 measurementSystemLocale:(id)arg2 ;
-(id)localizedDistanceFromLocation:(id)arg0 toLocation:(id)arg1 ;
-(id)localizedStringForKey:(id)arg0 value:(id)arg1 ;
-(id)localizedStringForKey:(id)arg0 value:(id)arg1 table:(id)arg2 ;


@end


#endif