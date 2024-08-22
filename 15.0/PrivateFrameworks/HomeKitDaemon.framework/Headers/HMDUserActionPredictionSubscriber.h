// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUSERACTIONPREDICTIONSUBSCRIBER_H
#define HMDUSERACTIONPREDICTIONSUBSCRIBER_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface HMDUserActionPredictionSubscriber : NSObject

@property (readonly) NSUInteger predictionLimit; // ivar: _predictionLimit
@property (readonly, copy) NSUUID *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithUUID:(id)arg0 predictionLimit:(NSUInteger)arg1 ;


@end


#endif