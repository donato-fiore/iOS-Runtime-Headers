// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTREVENTPATH_H
#define MTREVENTPATH_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTREventPath : NSObject

@property (readonly, nonatomic) NSNumber *cluster; // ivar: _cluster
@property (readonly, nonatomic) NSNumber *endpoint; // ivar: _endpoint
@property (readonly, nonatomic) NSNumber *event; // ivar: _event


+(id)eventPathWithEndpointId:(id)arg0 clusterId:(id)arg1 eventId:(id)arg2 ;
-(id)initWithPath:(struct ConcreteEventPath *)arg0 ;


@end


#endif