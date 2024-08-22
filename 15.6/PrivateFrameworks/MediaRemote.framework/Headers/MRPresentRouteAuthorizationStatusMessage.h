// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRPRESENTROUTEAUTHORIZATIONSTATUSMESSAGE_H
#define MRPRESENTROUTEAUTHORIZATIONSTATUSMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRAVOutputDevice.h"

@interface MRPresentRouteAuthorizationStatusMessage : MRProtocolMessage {
    MRAVOutputDevice *_route;
}


@property (readonly, nonatomic) MRAVOutputDevice *route;
@property (readonly, nonatomic) int status;


-(NSUInteger)type;
-(id)initWithRoute:(id)arg0 status:(int)arg1 ;


@end


#endif