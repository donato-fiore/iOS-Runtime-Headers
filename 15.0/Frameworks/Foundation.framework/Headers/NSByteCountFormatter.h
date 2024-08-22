// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSBYTECOUNTFORMATTER_H
#define NSBYTECOUNTFORMATTER_H

@protocol NSObservable, NSObserver;


#import "NSFormatter.h"
#import "NSString.h"

@interface NSByteCountFormatter : NSFormatter <NSObservable, NSObserver>

 {
    unsigned int _allowedUnits;
    char _countStyle;
    int _formattingContext;
    int _reserved;
}


@property (getter=isAdaptive) BOOL adaptive; // ivar: _adaptive
@property NSUInteger allowedUnits;
@property BOOL allowsNonnumericFormatting; // ivar: _allowsNonnumericFormatting
@property NSInteger countStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSInteger formattingContext;
@property (readonly) NSUInteger hash;
@property BOOL includesActualByteCount; // ivar: _includesActualByteCount
@property BOOL includesCount; // ivar: _includesCount
@property BOOL includesUnit; // ivar: _includesUnit
@property (readonly) Class superclass;
@property BOOL zeroPadsFractionDigits; // ivar: _zeroPadsFractionDigits


+(id)stringFromByteCount:(NSInteger)arg0 countStyle:(NSInteger)arg1 ;
+(id)stringFromMeasurement:(id)arg0 countStyle:(NSInteger)arg1 ;
-(BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg0 ;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(BOOL)isPartialStringValid:(*id)arg0 proposedSelectedRange:(struct _NSRange *)arg1 originalString:(id)arg2 originalSelectedRange:(struct _NSRange )arg3 errorDescription:(*id)arg4 ;
-(NSUInteger)_options;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromByteCount:(NSInteger)arg0 ;
-(id)stringFromMeasurement:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)receiveObservedValue:(id)arg0 ;


@end


#endif