// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVNLPPERFORMANCERESULT_H
#define CVNLPPERFORMANCERESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CVNLPPerformanceResult : NSObject {
    CGFloat maxpeak;
    CGFloat peakdelta;
    CGFloat recentpeak;
    CGFloat current;
    CGFloat cpuTime;
    CGFloat cpuInstructions;
    CGFloat timeInterval;
}


@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)description;
-(id)dict;
-(id)initWithName:(id)arg0 ;


@end


#endif