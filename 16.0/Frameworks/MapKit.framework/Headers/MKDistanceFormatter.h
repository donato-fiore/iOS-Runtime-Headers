// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKDISTANCEFORMATTER_H
#define MKDISTANCEFORMATTER_H

@class NSFormatter, NSLocale;



@interface MKDistanceFormatter : NSFormatter

@property (copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (nonatomic) NSUInteger unitStyle; // ivar: _unitStyle
@property (nonatomic) NSUInteger units; // ivar: _units


-(BOOL)_useMetric;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(BOOL)isPartialStringValid:(*id)arg0 proposedSelectedRange:(struct _NSRange *)arg1 originalString:(id)arg2 originalSelectedRange:(struct _NSRange )arg3 errorDescription:(*id)arg4 ;
-(CGFloat)distanceFromString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromDistance:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif