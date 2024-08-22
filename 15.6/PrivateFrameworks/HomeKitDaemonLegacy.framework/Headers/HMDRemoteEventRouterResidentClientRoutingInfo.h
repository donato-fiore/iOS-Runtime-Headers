// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDREMOTEEVENTROUTERRESIDENTCLIENTROUTINGINFO_H
#define HMDREMOTEEVENTROUTERRESIDENTCLIENTROUTINGINFO_H

@class NSUUID, NSString;

#import <Foundation/Foundation.h>


@interface HMDRemoteEventRouterResidentClientRoutingInfo : NSObject

@property (readonly, copy) NSUUID *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, copy) NSString *eventFilterPrefix; // ivar: _eventFilterPrefix


-(id)initWithEventFilterPrefix:(id)arg0 deviceIdentifier:(id)arg1 ;


@end


#endif