// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSLENGTHFORMATTER_H
#define NSLENGTHFORMATTER_H

@protocol NSObservable, NSObserver;


#import "NSFormatter.h"
#import "NSString.h"
#import "NSNumberFormatter.h"

@interface NSLengthFormatter : NSFormatter <NSObservable, NSObserver>

 {
    *void _formatter;
    BOOL _isForPersonHeight;
    *void _reserved;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForPersonHeightUse) BOOL forPersonHeightUse;
@property (readonly) NSUInteger hash;
@property (copy) NSNumberFormatter *numberFormatter;
@property (readonly) Class superclass;
@property NSInteger unitStyle;


-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(NSInteger)targetUnitFromMeters:(CGFloat)arg0 ;
-(id)attributedStringForObjectValue:(id)arg0 withDefaultAttributes:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromMeters:(CGFloat)arg0 ;
-(id)stringFromValue:(CGFloat)arg0 unit:(NSInteger)arg1 ;
-(id)unitStringFromMeters:(CGFloat)arg0 usedUnit:(*NSInteger)arg1 ;
-(id)unitStringFromValue:(CGFloat)arg0 unit:(NSInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)receiveObservedValue:(id)arg0 ;


@end


#endif