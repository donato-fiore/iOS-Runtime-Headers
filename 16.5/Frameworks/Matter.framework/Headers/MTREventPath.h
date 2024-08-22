// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTREVENTPATH_H
#define MTREVENTPATH_H

@class NSNumber;


#import "MTRClusterPath.h"

@interface MTREventPath : MTRClusterPath

@property (readonly, copy, nonatomic) NSNumber *event; // ivar: _event


+(id)eventPathWithEndpointID:(id)arg0 clusterID:(id)arg1 eventID:(id)arg2 ;
+(id)eventPathWithEndpointId:(id)arg0 clusterId:(id)arg1 eventId:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPath:(struct ConcreteEventPath *)arg0 ;


@end


#endif