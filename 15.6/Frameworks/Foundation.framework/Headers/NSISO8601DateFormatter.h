// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSISO8601DATEFORMATTER_H
#define NSISO8601DATEFORMATTER_H

@class NSTimeZone;
@protocol NSSecureCoding;


#import "NSFormatter.h"

@interface NSISO8601DateFormatter : NSFormatter <NSSecureCoding>

 {
    *__CFDateFormatter _formatter;
    NSTimeZone *_timeZone;
    NSUInteger _formatOptions;
}


@property NSUInteger formatOptions;
@property (copy) NSTimeZone *timeZone;


+(BOOL)supportsSecureCoding;
+(id)stringFromDate:(id)arg0 timeZone:(id)arg1 formatOptions:(NSUInteger)arg2 ;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 range:(struct _NSRange *)arg2 error:(*id)arg3 ;
-(id)dateFromString:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromDate:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateFormatter;


@end


#endif