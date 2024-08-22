// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SDTRACEITEM_H
#define SDTRACEITEM_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SDTraceItem : NSObject <NSCopying>



@property (retain, nonatomic) NSObject *data; // ivar: _data
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSInteger identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (retain, nonatomic) NSString *string; // ivar: _string


+(id)stringFromReferenceDate:(CGFloat)arg0 ;
+(void)appendDescription:(id)arg0 prefix:(id)arg1 toString:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif