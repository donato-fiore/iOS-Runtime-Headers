// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSENERGYFORMATTER_H
#define NSENERGYFORMATTER_H

@protocol NSObservable, NSObserver;


#import "NSFormatter.h"
#import "NSString.h"
#import "NSNumberFormatter.h"

@interface NSEnergyFormatter : NSFormatter <NSObservable, NSObserver>

 {
    *void _formatter;
    *void _reserved;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForFoodEnergyUse) BOOL forFoodEnergyUse; // ivar: _isForFoodEnergyUse
@property (readonly) NSUInteger hash;
@property (copy) NSNumberFormatter *numberFormatter;
@property (readonly) Class superclass;
@property NSInteger unitStyle;


-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(NSInteger)targetUnitFromJoules:(CGFloat)arg0 ;
-(id)attributedStringForObjectValue:(id)arg0 withDefaultAttributes:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromJoules:(CGFloat)arg0 ;
-(id)stringFromValue:(CGFloat)arg0 unit:(NSInteger)arg1 ;
-(id)unitStringFromJoules:(CGFloat)arg0 usedUnit:(*NSInteger)arg1 ;
-(id)unitStringFromValue:(CGFloat)arg0 unit:(NSInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)receiveObservedValue:(id)arg0 ;


@end


#endif