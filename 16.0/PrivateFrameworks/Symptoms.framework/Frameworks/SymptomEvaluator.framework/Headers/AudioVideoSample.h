// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUDIOVIDEOSAMPLE_H
#define AUDIOVIDEOSAMPLE_H


#import <Foundation/Foundation.h>


@interface AudioVideoSample : NSObject

@property (readonly, nonatomic) CGFloat averageRxThroughput;
@property (readonly, nonatomic) CGFloat averageTxThroughput;
@property (nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (readonly, nonatomic) BOOL isIdle;
@property (nonatomic) NSUInteger rxBytes; // ivar: _rxBytes
@property (nonatomic) CGFloat startTimeIntervalSinceReferenceDate; // ivar: _startTimeIntervalSinceReferenceDate
@property (nonatomic) NSUInteger txBytes; // ivar: _txBytes


-(id)description;


@end


#endif