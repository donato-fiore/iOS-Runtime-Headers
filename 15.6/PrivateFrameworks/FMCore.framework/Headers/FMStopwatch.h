// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMSTOPWATCH_H
#define FMSTOPWATCH_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FMStopwatch : NSObject

@property (copy, nonatomic) NSString *comment; // ivar: _comment
@property (nonatomic) NSUInteger endTime; // ivar: _endTime
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger startTime; // ivar: _startTime


+(id)illegalLabelCharacterSet;
+(id)stopwatchWithLabel:(id)arg0 ;
+(void)dumpBuffer:(id)arg0 ;
+(void)eventWithLabel:(id)arg0 ;
+(void)eventWithLabel:(id)arg0 comment:(id)arg1 ;
+(void)initialize;
-(id)description;
-(id)descriptionAsData;
-(id)initWithLabel:(id)arg0 ;
-(void)stop;
-(void)stopWithComment:(id)arg0 ;


@end


#endif