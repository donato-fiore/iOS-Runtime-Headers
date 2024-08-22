// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTIMEFORMATTER_H
#define AVTIMEFORMATTER_H

@class NSFormatter;


#import "AVTimeFormatterInternal.h"

@interface AVTimeFormatter : NSFormatter {
    AVTimeFormatterInternal *_internal;
}


@property (nonatomic) CGFloat formatTemplate;
@property (nonatomic, getter=isFullWidth) BOOL fullWidth;
@property (nonatomic) NSInteger style;


-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(BOOL)isRightToLeft;
-(id)cachedDateFormatterFormat;
-(id)cachedDateFormatterTemplate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)locale;
-(id)numberFormatterWithOneMinimumIntegerDigits;
-(id)numberFormatterWithTwoMinimumIntegerDigits;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromCMTime:(struct ? )arg0 ;
-(id)stringFromSeconds:(CGFloat)arg0 ;
-(id)stringFromTimeInterval:(CGFloat)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCachedDateFormatterFormat:(id)arg0 ;
-(void)setCachedDateFormatterTemplate:(id)arg0 ;
-(void)setIsRightToLeft:(BOOL)arg0 ;
-(void)setLocale:(id)arg0 ;
-(void)setNumberFormatterWithOneMinimumIntegerDigits:(id)arg0 ;
-(void)setNumberFormatterWithTwoMinimumIntegerDigits:(id)arg0 ;


@end


#endif