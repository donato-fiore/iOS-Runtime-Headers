// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ACCESSORYSERVERTRANSPORTBASEWITHDELEGATE_H
#define HAP2ACCESSORYSERVERTRANSPORTBASEWITHDELEGATE_H

@class NSString;
@protocol HAP2AccessoryServerTransport, HAP2AccessoryServerTransportDelegate, HAP2AccessoryServerTransportCommon;


#import "HAP2AccessoryServerTransportBase.h"

@interface HAP2AccessoryServerTransportBaseWithDelegate : HAP2AccessoryServerTransportBase <HAP2AccessoryServerTransport>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAP2AccessoryServerTransportDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat maxRequestTimeout;
@property (readonly, nonatomic) NSUInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerTransportCommon> *underlyingTransport;


-(void)didChangeStateWithError:(id)arg0 ;


@end


#endif