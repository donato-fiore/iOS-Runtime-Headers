// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ACCESSORYSERVERTRANSPORTBASEOPERATION_H
#define HAP2ACCESSORYSERVERTRANSPORTBASEOPERATION_H



#import "HAP2AsynchronousOperation.h"
#import "HAP2AccessoryServerTransportBase.h"

@interface HAP2AccessoryServerTransportBaseOperation : HAP2AsynchronousOperation {
    HAP2AccessoryServerTransportBase *_transport;
}




-(id)initWithName:(id)arg0 transport:(id)arg1 ;


@end


#endif