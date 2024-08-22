// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRPROMPTFORROUTEAUTHORIZATIONMESSAGE_H
#define MRPROMPTFORROUTEAUTHORIZATIONMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRAVOutputDevice.h"

@interface MRPromptForRouteAuthorizationMessage : MRProtocolMessage {
    MRAVOutputDevice *_route;
}


@property (readonly, nonatomic) NSInteger inputType;
@property (readonly, nonatomic) MRAVOutputDevice *route;


-(NSUInteger)type;
-(id)initWithRoute:(id)arg0 inputType:(NSInteger)arg1 ;


@end


#endif