// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUDURATION_H
#define TSUDURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSUDuration : NSObject <NSCopying>

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