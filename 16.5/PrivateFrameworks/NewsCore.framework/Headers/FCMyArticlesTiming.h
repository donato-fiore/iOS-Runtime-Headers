// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCMYARTICLESTIMING_H
#define FCMYARTICLESTIMING_H


#import <Foundation/Foundation.h>


@interface FCMyArticlesTiming : NSObject

@property (readonly, nonatomic) CGFloat evergreenNetworkTime; // ivar: _evergreenNetworkTime
@property (readonly, nonatomic) CGFloat feedsNetworkTime; // ivar: _feedsNetworkTime
@property (readonly, nonatomic) CGFloat scoringTime; // ivar: _scoringTime
@property (readonly, nonatomic) CGFloat totalTime; // ivar: _totalTime


-(id)init;
-(id)initWithTotalTime:(CGFloat)arg0 feedsNetworkTime:(CGFloat)arg1 evergreenNetworkTime:(CGFloat)arg2 scoringTime:(CGFloat)arg3 ;


@end


#endif