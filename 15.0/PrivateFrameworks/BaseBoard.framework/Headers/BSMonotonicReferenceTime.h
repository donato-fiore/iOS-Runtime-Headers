// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSMONOTONICREFERENCETIME_H
#define BSMONOTONICREFERENCETIME_H


#import <Foundation/Foundation.h>


@interface BSMonotonicReferenceTime : NSObject {
    CGFloat _startTimeStamp;
}


@property (readonly, nonatomic) CGFloat timeIntervalSinceNow;
@property (readonly, nonatomic) CGFloat timeIntervalToNow;


+(id)distantFuture;
+(id)distantPast;
+(id)now;
+(id)referenceTimeForDate:(id)arg0 ;
+(id)referenceTimeWithTimeIntervalSinceNow:(CGFloat)arg0 ;
-(CGFloat)timeIntervalSinceReferenceTime:(id)arg0 ;
-(id)date;


@end


#endif