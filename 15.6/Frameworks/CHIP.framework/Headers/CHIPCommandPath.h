// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPCOMMANDPATH_H
#define CHIPCOMMANDPATH_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPCommandPath : NSObject

@property (readonly, nonatomic) NSNumber *cluster; // ivar: _cluster
@property (readonly, nonatomic) NSNumber *command; // ivar: _command
@property (readonly, nonatomic) NSNumber *endpoint; // ivar: _endpoint


+(id)commandPathWithEndpointId:(id)arg0 clusterId:(id)arg1 commandId:(id)arg2 ;
-(id)initWithPath:(struct ConcreteCommandPath *)arg0 ;


@end


#endif