// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKDATE_H
#define CLKDATE_H

@class NSDate;



@interface CLKDate : NSDate



+(CGFloat)timeIntervalSinceReferenceDate;
+(id)complicationDate;
+(id)complicationDateWithTimeIntervalSinceNow:(CGFloat)arg0 ;
+(id)date;
+(id)dateWithTimeIntervalSinceNow:(CGFloat)arg0 ;
+(id)unmodifiedDate;
+(id)unmodifiedDateWithTimeIntervalSinceNow:(CGFloat)arg0 ;
-(CGFloat)timeIntervalSinceNow;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeIntervalSinceNow:(CGFloat)arg0 ;
-(id)initWithTimeIntervalSinceReferenceDate:(CGFloat)arg0 ;


@end


#endif