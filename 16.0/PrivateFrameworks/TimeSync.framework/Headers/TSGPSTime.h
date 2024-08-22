// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSGPSTIME_H
#define TSGPSTIME_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSGPSTime : NSObject <NSCopying>



@property (readonly, nonatomic) unsigned int extendedWeek;
@property (readonly, nonatomic) NSUInteger nanoseconds;
@property (readonly, nonatomic) NSUInteger nanosecondsSinceEpoch; // ivar: _nanosecondsSinceEpoch
@property (readonly, nonatomic) CGFloat seconds;
@property (readonly, nonatomic) unsigned short week;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithExtendedWeek:(unsigned int)arg0 nanoseconds:(NSUInteger)arg1 ;
-(id)initWithExtendedWeek:(unsigned int)arg0 seconds:(CGFloat)arg1 ;
-(id)initWithNanosecondsSinceEpoch:(NSUInteger)arg0 ;
-(id)initWithWeek:(unsigned int)arg0 nanoseconds:(NSUInteger)arg1 rollovers:(unsigned short)arg2 ;
-(id)initWithWeek:(unsigned int)arg0 seconds:(CGFloat)arg1 rollovers:(unsigned short)arg2 ;


@end


#endif