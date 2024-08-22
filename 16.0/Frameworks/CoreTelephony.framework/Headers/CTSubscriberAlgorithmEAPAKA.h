// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTSUBSCRIBERALGORITHMEAPAKA_H
#define CTSUBSCRIBERALGORITHMEAPAKA_H

@class NSData;


#import "CTSubscriberAlgorithm.h"

@interface CTSubscriberAlgorithmEAPAKA : CTSubscriberAlgorithm

@property (retain, nonatomic) NSData *autn; // ivar: _autn
@property (retain, nonatomic) NSData *rand; // ivar: _rand


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif