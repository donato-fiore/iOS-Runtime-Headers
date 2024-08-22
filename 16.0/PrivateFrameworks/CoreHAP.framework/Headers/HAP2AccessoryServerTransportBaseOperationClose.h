// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2ACCESSORYSERVERTRANSPORTBASEOPERATIONCLOSE_H
#define HAP2ACCESSORYSERVERTRANSPORTBASEOPERATIONCLOSE_H

@class NSError;


#import "HAP2AccessoryServerTransportBaseOperation.h"

@interface HAP2AccessoryServerTransportBaseOperationClose : HAP2AccessoryServerTransportBaseOperation {
    NSError *_desiredError;
    id *_clientCompletion;
}




-(id)initWithTransport:(id)arg0 desiredError:(id)arg1 completion:(id)arg2 ;
-(void)main;


@end


#endif