// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSUBSCRIBERALGORITHMEAPSIM_H
#define CTSUBSCRIBERALGORITHMEAPSIM_H

@class NSData;


#import "CTSubscriberAlgorithm.h"

@interface CTSubscriberAlgorithmEAPSIM : CTSubscriberAlgorithm

@property (retain, nonatomic) NSData *rand; // ivar: _rand


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif