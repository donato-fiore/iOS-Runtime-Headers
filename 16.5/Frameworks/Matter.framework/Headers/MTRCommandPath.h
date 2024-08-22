// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCOMMANDPATH_H
#define MTRCOMMANDPATH_H

@class NSNumber;


#import "MTRClusterPath.h"

@interface MTRCommandPath : MTRClusterPath

@property (readonly, copy, nonatomic) NSNumber *command; // ivar: _command


+(id)commandPathWithEndpointID:(id)arg0 clusterID:(id)arg1 commandID:(id)arg2 ;
+(id)commandPathWithEndpointId:(id)arg0 clusterId:(id)arg1 commandId:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPath:(struct ConcreteCommandPath *)arg0 ;


@end


#endif