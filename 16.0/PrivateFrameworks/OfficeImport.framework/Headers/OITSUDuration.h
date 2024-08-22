// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OITSUDURATION_H
#define OITSUDURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface OITSUDuration : NSObject <NSCopying>

 {
    CGFloat mTimeInterval;
}




+(id)durationWithTimeInterval:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)timeInterval;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTimeInterval:(CGFloat)arg0 ;


@end


#endif