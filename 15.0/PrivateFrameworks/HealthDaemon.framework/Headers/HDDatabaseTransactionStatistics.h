// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDATABASETRANSACTIONSTATISTICS_H
#define HDDATABASETRANSACTIONSTATISTICS_H


#import <Foundation/Foundation.h>


@interface HDDatabaseTransactionStatistics : NSObject

@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) CGFloat endTime; // ivar: _endTime
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime


-(id)_initWithStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 ;


@end


#endif