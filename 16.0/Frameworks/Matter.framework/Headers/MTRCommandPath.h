// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRCOMMANDPATH_H
#define MTRCOMMANDPATH_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRCommandPath : NSObject

@property (readonly, nonatomic) NSNumber *cluster; // ivar: _cluster
@property (readonly, nonatomic) NSNumber *command; // ivar: _command
@property (readonly, nonatomic) NSNumber *endpoint; // ivar: _endpoint


+(id)commandPathWithEndpointId:(id)arg0 clusterId:(id)arg1 commandId:(id)arg2 ;
-(id)initWithPath:(struct ConcreteCommandPath *)arg0 ;


@end


#endif