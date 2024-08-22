// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ACCESSORYSERVERPAIRINGDRIVERWORKITEM_H
#define HAP2ACCESSORYSERVERPAIRINGDRIVERWORKITEM_H

@class NSString, HMFActivity;
@protocol HAP2AccessoryServerPairingDriverWorkItem, HAP2AccessoryServerPairingDriverWorkItemInfo;


#import "HAP2LoggingObject.h"
#import "HAP2SerializedOperationQueue.h"

@interface HAP2AccessoryServerPairingDriverWorkItem : HAP2LoggingObject <HAP2AccessoryServerPairingDriverWorkItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, weak, nonatomic) HMFActivity *pairingActivity; // ivar: _pairingActivity
@property (readonly, weak, nonatomic) NSObject<HAP2AccessoryServerPairingDriverWorkItemInfo> *pairingDriver; // ivar: _pairingDriver
@property (readonly) Class superclass;


-(id)maybePairingDriver;
-(void)cancelWithError:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)runForPairingDriver:(id)arg0 ;
-(void)startWithPairingDriver:(id)arg0 ;


@end


#endif