// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSLOGPOSITION_H
#define OSLOGPOSITION_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface OSLogPosition : NSObject

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) CGFloat offset; // ivar: _offset
@property (readonly, nonatomic) NSInteger precision; // ivar: _precision


-(id)initWithDate:(id)arg0 ;
-(id)initWithEventSource:(id)arg0 timeIntervalSinceEnd:(CGFloat)arg1 ;
-(id)initWithTimeIntervalSinceLatestBoot:(CGFloat)arg0 ;


@end


#endif