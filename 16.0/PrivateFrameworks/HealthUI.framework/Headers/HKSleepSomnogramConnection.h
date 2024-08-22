// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPSOMNOGRAMCONNECTION_H
#define HKSLEEPSOMNOGRAMCONNECTION_H


#import <Foundation/Foundation.h>


@interface HKSleepSomnogramConnection : NSObject

@property (nonatomic) CGPoint endPoint; // ivar: _endPoint
@property (nonatomic) CGPoint startPoint; // ivar: _startPoint


-(id)initWithStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 ;


@end


#endif