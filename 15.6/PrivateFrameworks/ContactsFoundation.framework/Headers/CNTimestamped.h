// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNTIMESTAMPED_H
#define CNTIMESTAMPED_H


#import <Foundation/Foundation.h>


@interface CNTimestamped : NSObject

@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) id *value; // ivar: _value


+(id)timestampedWithValue:(id)arg0 timestamp:(CGFloat)arg1 ;
+(id)wrapTransformWithScheduler:(SEL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithValue:(id)arg0 timestamp:(CGFloat)arg1 ;


@end


#endif