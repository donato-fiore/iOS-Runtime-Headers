// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NENEXUSFLOW_H
#define NENEXUSFLOW_H

@class NSUUID, NWEndpoint, NWParameters;

#import <Foundation/Foundation.h>

#import "NENexusFlowManager.h"

@interface NENexusFlow : NSObject

@property (readonly, nonatomic) NSUUID *clientIdentifier;
@property (readonly, nonatomic) NWEndpoint *endpoint;
@property (weak) NENexusFlowManager *manager; // ivar: _manager
@property (retain) NSUUID *nexusInstance; // ivar: _nexusInstance
@property (readonly, nonatomic) NWParameters *parameters;
@property (nonatomic) *nw_protocol protocol; // ivar: _protocol
@property (nonatomic) NSUInteger state; // ivar: _state


-(void)dealloc;
-(void)setupFlowProtocolWithUUID:(id)arg0 ;


@end


#endif