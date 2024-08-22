// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRAVOUTPUTDEVICESOURCEINFO_H
#define MRAVOUTPUTDEVICESOURCEINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MRAVOutputDeviceSourceInfo : NSObject

@property (readonly, nonatomic) BOOL multipleBuiltInDevices; // ivar: _multipleBuiltInDevices
@property (readonly, nonatomic) NSString *routingContextUID; // ivar: _routingContextUID


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithRoutingContextUID:(id)arg0 multipleBuiltInDevices:(BOOL)arg1 ;


@end


#endif