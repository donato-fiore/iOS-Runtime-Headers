// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMEDIATIMEFORMATTER_H
#define ICMEDIATIMEFORMATTER_H

@class NSDateComponentsFormatter;



@interface ICMediaTimeFormatter : NSDateComponentsFormatter



+(id)timecodeFormatter;
+(id)wordyFormatter;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromTimeInterval:(CGFloat)arg0 ;


@end


#endif